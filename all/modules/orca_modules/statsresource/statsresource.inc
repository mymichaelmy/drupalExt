<?php
// statsresource.inc
/**
 * Callback for creating view resources.
 *
 * @param object $data
 * @return object
 */
function _viewresource_create($data) {
  global $user;
  if (isset($data) &&  is_array($data)) $data=(object) $data;
  unset($data->id);
  $data->uid = $user->uid;
  $data->created = time();
  $data->modified = time();
  if (!isset(

$data->subject)) {
    return services_error('Missing view attribute subject', 406);
  }
  if (!isset(

$data->view)) {
    return services_error('Missing view attribute view', 406);
  }
  

viewresource_write_view($data);
  
  return (object)array(
    'id' => $data->id,
    'uri' => services_resource_uri(array('view', $data->id)),
  );
}
 

/**
 * Callback for updating view resources.
 *
 * @param int $id
 * @param object $data
 * @return object
 */
function _viewresource_update($id, $data) {
  global $user;
  $view = viewresource_get_view($id);
  unset(

$data->created);
  $data->id = $id;
  $data->uid = $view->uid;
  $data->modified = time();
  

viewresource_write_view($data);
  
  return (object)array(
    'id' => $id,
    'uri' => services_resource_uri(array('view', $id)),
  );
} 
/**
 * Callback for retrieving view resources.
 *
 * @param int $id
 * @return object
 */
function _viewresource_retrieve($id) {
  return viewresource_get_view($id);
}
/**
 * Callback for deleting view resources.
 *
 * @param int $id
 * @return object
 */
function _viewresource_delete($id) {
  viewresource_delete_view($id);
  
  return (object)array(
    'id' => $id,
  );
}
function 

_viewresource_index() {
  return viewresource_get_views();

}
/**
 * Access callback for the view resource.
 *
 * @param string $op
 *  The operation that's going to be performed.
 * @param array $args
 *  The arguments that will be passed to the callback.
 * @return bool
 *  Whether access is given or not.
 */
function _viewresource_access($op, $args) {
  global $user;
  $access = FALSE;
  switch (

$op) {
    case 'view':
      $view = viewresource_get_view($args[0]);
      $access = user_access('view resource view any view');
      $access = $access || $view->uid == $user->uid && user_access('view resource view own views');
      break;
    case 'update':
      $view = viewresource_get_view($args[0]->id);
      $access = user_access('view resource edit any view');
      $access = $access || $view->uid == $user->uid && user_access('view resource edit own views');
      break;
    case 'delete':
      $view = viewresource_get_view($args[0]);
      $access = user_access('view resource delete any view');
      $access = $access || $view->uid == $user->uid && user_access('view resource delete own views');
      break;
  }
  $access = TRUE;
  
  return $access;
}
?>