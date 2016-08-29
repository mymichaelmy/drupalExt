<?php

/**
 * @file
 * The actual functionality for the Drupal Reset module.
 *
 * Provides the functions which delete the files and drop the database tables.
 */

/**
 * Delete all public and private files.
 */
function _drupal_reset_delete_files() {
  _drupal_reset_rrmdir(drupal_realpath('public://'), FALSE);
  _drupal_reset_rrmdir(drupal_realpath('private://'), FALSE);
}

/**
 * Delete all database tables.
 */
function _drupal_reset_drop_database() {
  global $databases;

  $tables = db_find_tables($databases['default']['default']['prefix'] . '%');

  foreach ($tables as $table) {
    db_drop_table($table);
  }
}

/**
 * Recursive directory deletion.
 *
 * @param string $dir
 *   The directory to delete.
 * @param bool $rmdir
 *   If TRUE, delete the directory. Otherwise, delete the contents, but not the
 *   directory itself.
 */
function _drupal_reset_rrmdir($dir, $rmdir = TRUE) {
  if (!empty($dir) && is_dir($dir)) {
    foreach (scandir($dir) as $object) {
      if ($object !== '.' && $object !== '..') {
        $this_object = $dir . DIRECTORY_SEPARATOR . $object;
        if (filetype($this_object) === 'dir') {
          _drupal_reset_rrmdir($this_object);
        }
        else {
          unlink($this_object);
        }
      }
    }
    if ($rmdir) {
      rmdir($dir);
    }
  }
}

/**
 * Check if the installation uses a single-database and a simple prefix.
 *
 * @return bool
 *   TRUE is the installation uses a single-database and a simple prefix, FALSE
 *   otherwise.
 */
function _drupal_reset_is_supported_database_configuration() {
  global $databases;
  return isset($databases['default']['default']) && count($databases['default']) === 1 && isset($databases['default']['default']['prefix']) && is_string($databases['default']['default']['prefix']);
}
