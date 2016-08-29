<?php
// statisticsresource.inc
/**
 * Callback for creating statistics resources.
 *
 * @param object $data
 * @return object
 */
function _statisticsresource_create($data) {
  global $user;
  if (isset($data) &&  is_array($data)) $data=(object) $data;
  unset($data->id);
  $data->uid = $user->uid;
  $data->timestamp = time();
  if (!isset($data->nid)) {
    return services_error('Missing clone attribute node id - nid', 406);
  } 
  if (!isset($data->node_type)) {
    return services_error('Missing clone attribute node type', 406);
  }  
  
    // check for HTTP GET 
  if ($_SERVER['REQUEST_METHOD'] === 'GET') {
    drupal_json_output(array(
      'status' => t('error'),
      'data' => t('POST is not allowed'),
    ));
  exit;
  }

statisticsresource_write_view($data);
return;  
}
 

/**
 * Callback for updating statistics resources.
 *
 * @param int $id
 * @param object $data
 * @return object
 */
function _statisticsresource_update($id, $data) {
  global $user;
  $view = statisticsresource_get_view($id);
  unset(

$data->created);
  $data->id = $id;
  $data->uid = $view->uid;
  $data->modified = time();
  

statisticsresource_write_view($data);
  
  return (object)array(
    'id' => $id,
    'uri' => services_resource_uri(array('view', $id)),
  );
} 
/**
 * Callback for retrieving statistics resources.
 *
 * @param int $id
 * @return object
 */
function _statisticsresource_retrieve($id) {
  return statisticsresource_get_view($id);
}
/**
 * Callback for deleting statistics resources.
 *
 * @param int $id
 * @return object
 */
function _statisticsresource_delete($id) {
  statisticsresource_delete_view($id);
  
  return (object)array(
    'id' => $id,
  );
}
function 

_statisticsresource_index($page, $parameters) {
  global $user;
  return statisticsresource_get_views();
}
/**
 * Access callback for the clone resource.
 *
 * @param string $op
 *  The operation that's going to be performed.
 * @param array $args
 *  The arguments that will be passed to the callback.
 * @return bool
 *  Whether access is given or not.
 */
function _statisticsresource_access($op, $args) {
  global $user;
  $access = FALSE;
  switch (

$op) {
    case 'view':
      $view = statisticsresource_get_view($args[0]);
      $access = user_access('statistics resource view any statistics');
      $access = $access || $view->uid == $user->uid && user_access('statistics resource view own statistics');
      break;
    case 'update':
      $view = statisticsresource_get_view($args[0]->id);
      $access = user_access('statistics resource edit any statistics');
      $access = $access || $view->uid == $user->uid && user_access('statistics resource edit own statistics');
      break;
    case 'delete':
      $view = statisticsresource_get_view($args[0]);
      $access = user_access('statistics resource delete any statistics');
      $access = $access || $view->uid == $user->uid && user_access('statistics resource delete own statistics');
      break;
  }
  $access = TRUE;
  
  return $access;
}
?>