<?php
/**
 * @file
 * von_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function von_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML with Blocks.
  $formats['full_html_with_blocks'] = array(
    'format' => 'full_html_with_blocks',
    'name' => 'Full HTML with Blocks',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'insert_block' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'check_roles' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
