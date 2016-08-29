<?php

/**
 * Return search results for nodes.
 *
 * @param $keys
 *   The keywords to search for within the nodes.
 * @param $simple
 *   When set to TRUE, only the fields indicated in $stdkeys will be returned.
 *   This can be helpful to limit the size of the search results.
 * @param $fields
 *   An array of the node properties that should be returned. When $simple
 *   is not set, a full node object is returned with each result. You can
 *   limit the properties of these objects to only the ones you need by
 *   specifying them in this array. Again, this gives the opportunity to
 *   limit your result set.
 *
 * @return
 *   An array of search results. If $simple is TRUE, this array will contain
 *   only results and no node objects. If $simple is FALSE the array will
 *   contain both results and full node objects, possibly limited by the
 *   properties indicated in $fields.
 *
 * @see hook_search_execute()
 * @see node_search_execute()
 */
function _services_search_resource_node($op, $keys, $simple = FALSE, $fields = array()) {
  // Define standard keys for simple set.
  $stdkeys = array('node', 'link', 'type', 'title', 'user', 'date', 'snippet', 'language', 'created');

  // Invoke the search hook to generate results.
  $results = module_invoke('node', 'search_execute', $keys);
  if ($results && is_array($results) && count($results)) {
    foreach ($results as &$result) {
      // The 'date' attribute returned by node_search_execute() represents the
      // node's 'updated' timestamp. Also add the 'created' timestamp.
      $result['created'] = $result['node']->created;

      // If simple results requested, remove extra data.
      if ($simple) {
        $keys = array_keys($result);
        foreach ($keys as $key) {
          if ($key == 'node') {
            $result[$key] = $result['node']->nid;
          }
          if (!in_array($key, $stdkeys)) {
            unset($result[$key]);
          }
        }
      }
      else {
        $result['node'] = _services_search_node_load($result['node'], $fields);
      }
    }
    drupal_alter('services_search_results', $results);
    return $results;
  }
  return services_error(t('Search returned no results.'), 404);
}

/**
 * Return search results for users.
 *
 * @param $keys
 *   The keywords to search for within the users.
 *
 * @return
 *   An array of search results.
 *
 * @see hook_search_execute()
 * @see user_search_execute()
 */
function _services_search_resource_user($op, $keys) {
  // Invoke the search hook to generate results
  $results = module_invoke('user', 'search_execute', $keys);
  if ($results && is_array($results) && count($results)) {
    return $results;
  }
  return services_error(t('Search returned no results.'), 401);
}

/**
 * Replacement for deprecated services_node_load function.
 */
function _services_search_node_load($node, $fields = array()) {
  if (!isset($node->nid)) {
    return NULL;
  }

  // Loop through and get only requested fields
  if (count($fields) > 0) {
    foreach ($fields as $field) {
      $val->{$field} = $node->{$field};
    }
  }
  else {
    $val = $node;
  }

  return $val;
}
