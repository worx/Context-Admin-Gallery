<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_gallery content
  $permissions['create ca_gallery content'] = array(
    'name' => 'create ca_gallery content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create ca_gallery_image content
  $permissions['create ca_gallery_image content'] = array(
    'name' => 'create ca_gallery_image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any ca_gallery content
  $permissions['delete any ca_gallery content'] = array(
    'name' => 'delete any ca_gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any ca_gallery_image content
  $permissions['delete any ca_gallery_image content'] = array(
    'name' => 'delete any ca_gallery_image content',
    'roles' => array(),
  );

  // Exported permission: delete own ca_gallery content
  $permissions['delete own ca_gallery content'] = array(
    'name' => 'delete own ca_gallery content',
    'roles' => array(),
  );

  // Exported permission: delete own ca_gallery_image content
  $permissions['delete own ca_gallery_image content'] = array(
    'name' => 'delete own ca_gallery_image content',
    'roles' => array(),
  );

  // Exported permission: edit any ca_gallery content
  $permissions['edit any ca_gallery content'] = array(
    'name' => 'edit any ca_gallery content',
    'roles' => array(),
  );

  // Exported permission: edit any ca_gallery_image content
  $permissions['edit any ca_gallery_image content'] = array(
    'name' => 'edit any ca_gallery_image content',
    'roles' => array(),
  );

  // Exported permission: edit own ca_gallery content
  $permissions['edit own ca_gallery content'] = array(
    'name' => 'edit own ca_gallery content',
    'roles' => array(),
  );

  // Exported permission: edit own ca_gallery_image content
  $permissions['edit own ca_gallery_image content'] = array(
    'name' => 'edit own ca_gallery_image content',
    'roles' => array(),
  );

  return $permissions;
}
