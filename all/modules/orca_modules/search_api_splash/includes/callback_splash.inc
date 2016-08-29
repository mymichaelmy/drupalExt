<?php

/**
 * @file
 * Contains SearchApiSplashAlterSettings
 */

/**
 * Search API data alteration callback that adds ability for Splash custmom alterations
 * 
 * This hook is utilized by two distinct Search API Indices (node_index, splash_file_index).
 * 
 * The job of this hook is to make certain all documents in SOLR have a consistent representation of
 * provider, category, and uri.
 *
 * In order for this hook to be invoked Search_API_Attachments module must be installed and enabled
 * and the index must have data alteration "Splash specific alterations" enabled on the Filters tab.
 * 
 * This hook is written to deal with both "node" indices (node_index) and "file" indices (aplash_file_index).
 *
 */
class SearchApiSplashAlterSettings extends SearchApiAbstractAlterCallback {

  public function alterItems(array &$items) {
      
    //foreach ($items as &$item) {
      foreach ($items as $id => $item) {
      
      $entityType = $this->index->datasource()->getEntityType($item);

      $item->provider = 'splash';      

      if ($entityType === 'node') {
        switch ($item->type) {
          case 'mapped':
            //watchdog("search_api_splash.module", $item->field_from_summary[$item->language][0]['value'], NULL, WATCHDOG_ERROR);
            $item->category = 'gallery';
            $item->uri = '/splashapp/gallery/project/' . $item->nid; 
           
            if(isset($item->field_from_summary[$item->language][0]['value']))
            { 
            $item->description = $item->field_from_summary[$item->language][0]['value'];  
            }
            
            if (empty($item->field_ranking[$item->language][0]['value'])) {
                $item->field_ranking[$item->language][0]['value'] = 9999;
            }
            break;

          case 'forum':
            
            $item->category = 'community';
            $item->uri = '/splashapp/communityDetail/' . $item->nid;
            
            if(isset($item->body[$item->language][0]['value']))
            {
            $item->description = $item->body[$item->language][0]['value'];   
            }
            break;	

          case 'method_card':
	    //watchdog("search_api_splash.module", isset($item->field_activity_description[$item->language][0]['value']), NULL, WATCHDOG_ERROR);
		    //var_dump($item);
            $item->category = 'learning';
            $item->uri = '/splashapp/learningDetail/' . $item->nid;
            $item->sub_title = 'Method';
            if(isset($item->field_activity_description[$item->language][0]['value']))
            {
            $item->description = $item->field_activity_description[$item->language][0]['value']; 
            }		
                        
            break;

          case 'course_card':
		 // watchdog("search_api_splash.module", $item->field_summary[$item->language][0]['value'], NULL, WATCHDOG_ERROR);
		  //var_dump($item);
            $item->category = 'learning';
            $item->uri = '/splashapp/learning';
             $item->sub_title = 'Course';
            if(isset($item->field_summary[$item->language][0]['value']))
            {
            $item->description = $item->field_summary[$item->language][0]['value'];  
            }
            break;     
            
          case 'learning_sections':
              $item->category = 'learning';
              $item->uri = '/splashapp/learning';
              if(isset($item->field_section_summary[$item->language][0]['value']))
            {
            $item->description = $item->field_section_summary[$item->language][0]['value'];  
            }
            break;
            
          default:
            
            $item->category = '';
            $item->uri = '';
            $item->description = '';
            break;
        }

      } elseif ($entityType === 'file') {
          $result = db_query('SELECT n.title as ti, n.type as ty, n.nid as tn FROM {file_usage} fu inner join {node} n on n.nid = fu.id where fu.fid = :uri', array(':uri' => $item->fid));
          //watchdog("search_api_splash.module",  $item->fid , NULL, WATCHDOG_ERROR);
          $output = $result->fetchObject();
          //watchdog("search_api_splash.module", $output->ti, NULL, WATCHDOG_ERROR);
         // watchdog("search_api_splash.module",$item, NULL, WATCHDOG_ERROR);
         // $array_file_mime_type = array(':file_mime_type' => $item->filemime);
          $array_file_type = array(':file_type' => $item->type);
          //var_dump($item);
          $item->sub_category = 'document';  
          $file_name = basename($item->uri);
          $file_info = new SplFileInfo($file_name);
          $item->extension_s = $file_info->getExtension();
          $item->content_type_s = $item->filemime;
          $item->uri = '/splash/sites/default/files/' . $file_name;
          $item->title = $file_name;
          $item->description = $file_name;
          $item->hasThumb_b = false;
          switch ($output->ty) {
          case 'mapped':
            
            $item->category = 'gallery';
            //$item->sub_title = 'File in ' . 'gallery ' . $output->ti;
            
            break;

          case 'forum':
           
            $item->category = 'community';
            //$item->sub_title = 'File in ' . 'forum ' . $output->ti;
            break;	

          case 'method_card':
	    
            $item->category = 'learning';
            /*if($array_file_mime_type[':file_mime_type'] == 'image/png' OR $array_file_mime_type[':file_mime_type'] == 'image/jpg' OR $array_file_mime_type[':file_mime_type'] == 'image/gif' OR $array_file_mime_type[':file_mime_type'] == 'image/jpeg')
            {
            unset($items[$id]);
            }*/
            $item->sub_title = 'File in method';
            $item->sub_title_name = $output->ti;
            $item->sub_uri = '/splashapp/learningDetail/' . $output->tn;
            if($array_file_type[':file_type'] == 'image')
            {
                unset($items[$id]);
            }
            
            break;

          case 'course_card':
		
            $item->category = 'learning';
            //$item->sub_title = 'File in ' . 'course ' . $output->ti;
           /* if($array_file_mime_type[':file_mime_type'] == 'image/png' OR $array_file_mime_type[':file_mime_type'] == 'image/jpg' OR $array_file_mime_type[':file_mime_type'] == 'image/gif' OR $array_file_mime_type[':file_mime_type'] == 'image/jpeg')
            {
            unset($items[$id]);
            }*/
           if($array_file_type[':file_type'] == 'image')
            {
                unset($items[$id]);
            }
            
            break;                    
        
          default:
            //$item->category = '';
            unset($items[$id]);
      
            break;
        }
        
      }
    }
  }

  public function propertyInfo() {
    return array(
      'category' => array(
        'label' => t('Category'),
        'description' => t('Category'),
        'type' => 'text',
      ),
      'provider' => array(
        'label' => t('Provider'),
        'description' => t('Provider'),
        'type' => 'text',
      ),
      'uri' => array(
        'label' => t('uri'),
        'description' => t('uri'),
        'type' => 'string',
      ),
      'title' => array(
        'label' => t('Title'),
        'description' => t('Title'),
        'type' => 'text',
      ),
      'description' => array(
        'label' => t('Description'),
        'description' => t('Description'),
        'type' => 'text',
      ),
       'sub_category' => array(
        'label' => t('sub_category'),
        'description' => t('sub_category'),
        'type' => 'text',
      ), 
        'sub_title' => array(
        'label' => t('sub_title'),
        'description' => t('sub_title'),
        'type' => 'string',
      ),
        'sub_uri' => array(
        'label' => t('sub_uri'),
        'description' => t('sub_uri'),
        'type' => 'string',
      ),
        'sub_title_name' => array(
        'label' => t('sub_title_name'),
        'description' => t('sub_title_name'),
        'type' => 'string',
      ),
        'extension_s' => array(
        'label' => t('extension_s'),
        'description' => t('extension_s'),
        'type' => 'string',
      ),
        'content_type_s' => array(
        'label' => t('content_type_s'),
        'description' => t('content_type_s'),
        'type' => 'string',
      ),
        'hasThumb_b' => array(
        'label' => t('hasThumb_b'),
        'description' => t('hasThumb_b'),
        'type' => 'boolean',
      ),     
    );
  } 

}
