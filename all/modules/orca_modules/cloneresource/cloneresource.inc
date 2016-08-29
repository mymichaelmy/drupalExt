<?php
// cloneresource.inc
/**
 * Callback for creating clone resources.
 *
 * @param object $data
 * @return object
 */
function _cloneresource_create($data) {
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
      'data' => t('GET is not allowed'),
    ));
  exit;
  }

cloneresource_write_view($data);
return;  
}
 

// cloneresource.inc
/**
 * Callback for updating clone resources.
 *
 * @param int $id
 * @param object $data
 * @return object
 */
function _cloneresource_update($id, $data) {
  /*
    global $user;
  $view = cloneresource_get_view($id);
  $data->id = $id;
  $data->uid = $view->uid;
  $data->timestamp = time();
  

  cloneresource_write_view($data);
  */
  _cloneresource_create($data);
  return;
} 
/**
 * Callback for retrieving clone resources.
 *
 * @param int $id
 * @return object
 */
function _cloneresource_retrieve($id) {
  return cloneresource_get_view($id);
}
/**
 * Callback for deleting clone resources.
 *
 * @param int $id
 * @return object
 */
function _cloneresource_delete($id) {
  cloneresource_delete_view($id);
  
  return (object)array(
    'id' => $id,
  );
}
function 

_cloneresource_index($page, $parameters) {
  global $user;
  

$views = array();
  $res = db_query('SELECT * FROM {node_clone} WHERE uid=:uid ORDER BY modified DESC', 
           array(':uid' => $user->uid));
  foreach (

$res as $view) {
    $views[] = $view;
  }
  return 

$views;
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
function _cloneresource_access($op) {
  return TRUE;
}
?>  