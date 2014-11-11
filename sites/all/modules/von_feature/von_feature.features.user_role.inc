<?php
/**
 * @file
 * von_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function von_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: belle river editor.
  $roles['belle river editor'] = array(
    'name' => 'belle river editor',
    'weight' => 7,
  );

  // Exported role: chatham editor.
  $roles['chatham editor'] = array(
    'name' => 'chatham editor',
    'weight' => 5,
  );

  // Exported role: pelee island editor.
  $roles['pelee island editor'] = array(
    'name' => 'pelee island editor',
    'weight' => 8,
  );

  // Exported role: sarnia editor.
  $roles['sarnia editor'] = array(
    'name' => 'sarnia editor',
    'weight' => 4,
  );

  // Exported role: super administrator.
  $roles['super administrator'] = array(
    'name' => 'super administrator',
    'weight' => 2,
  );

  // Exported role: windsor editor.
  $roles['windsor editor'] = array(
    'name' => 'windsor editor',
    'weight' => 6,
  );

  return $roles;
}
