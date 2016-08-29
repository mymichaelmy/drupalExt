<?php
// recentsearches.inc
/**
 * Callback for creating a persistent recent search term.
 *
 * @param object $data
 *   Contains the search term string.
 *   
 * @return void
 */
function _recentsearches_create($data) {
  if (isset($data) && is_array($data)){ 
      $data=(object) $data;
      $term = $data->term;
      if (!isset($term) || "" === $term) {
        services_error('Missing search term.', 406);
        drupal_json_output(array(
          'status' => t('error'),
          'data' => t('Missing search term.')
        ));
       exit;
      } 
  
  // check for HTTP GET 
  if ($_SERVER['REQUEST_METHOD'] === 'GET') {
    drupal_json_output(array(
      'status' => t('error'),
      'data' => t('GET is not allowed'),
    ));
  exit;
  }

  recentsearches_write_view($term);
  return;  
}}
 
/**
 * Callback for retrieving a list of recent search terms.
 *
 * @return object
 */
function _recentsearches_index() {
  return recentsearches_get_view();
}


/**
 * Access callback for the recent search.
 *
 * @param string $op
 *  The operation that's going to be performed.
 * @return boolean
 *  Whether access is given or not.
 */
function _recentsearches_access($op) {
  // we don't want a forbidden access message to anyone
  return TRUE;
}
?>  
