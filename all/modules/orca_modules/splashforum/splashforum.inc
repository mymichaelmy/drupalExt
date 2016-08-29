<?php


    /**
     * Callback for listing Splash Community Forums.
     *
     * @param int $page
     * @param array $parameters
     * @return array
     */
    function _splashforum_index($page, $sortby) {

      return splashforum_index($page, $sortby);
    }
    
    /**
     * Callback for retrieving SPlash Community Forum.
     *
     * @param int $id
     * @return object
     */
    function _splashforum_retrieve($tid, $page, $sortby) {
      return splashforum_retrieve($tid, $page, $sortby);
    }
 

