<?php
/**
 * @file
 * von_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function von_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'belle-river-home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'belle-river' => 'belle-river',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c83644a2ff6bb026e8ba32367dd34bad' => array(
          'module' => 'views',
          'delta' => 'c83644a2ff6bb026e8ba32367dd34bad',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-e2fcd0a6abdef4c8eb9aef0815bcba94' => array(
          'module' => 'views',
          'delta' => 'e2fcd0a6abdef4c8eb9aef0815bcba94',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'second_widgets',
          'weight' => '-10',
        ),
        'views-news-block_br' => array(
          'module' => 'views',
          'delta' => 'news-block_br',
          'region' => 'second_widgets',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'belle-river',
    ),
  );
  $context->condition_mode = 0;
  $export['belle-river-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'belle-river-inner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'belle-river/*' => 'belle-river/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'belle-river belle-river-inner location-inner',
    ),
  );
  $context->condition_mode = 0;
  $export['belle-river-inner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chatham-kent-home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'chatham-kent' => 'chatham-kent',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-38abc5e170c939ef3e4062b8cb1b1b74' => array(
          'module' => 'views',
          'delta' => '38abc5e170c939ef3e4062b8cb1b1b74',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-f15c41344b712e7d0a269196820f3846' => array(
          'module' => 'views',
          'delta' => 'f15c41344b712e7d0a269196820f3846',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'second_widgets',
          'weight' => '-10',
        ),
        'views-news-block_ck' => array(
          'module' => 'views',
          'delta' => 'news-block_ck',
          'region' => 'second_widgets',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'chatham-kent',
    ),
  );
  $context->condition_mode = 0;
  $export['chatham-kent-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chatham-kent-inner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'chatham-kent/*' => 'chatham-kent/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-22' => array(
          'module' => 'block',
          'delta' => '22',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'chatham-kent chatham-kent-inner location-inner',
    ),
  );
  $context->condition_mode = 0;
  $export['chatham-kent-inner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chatham_volunteer';
  $context->description = '';
  $context->tag = 'H1 title override';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '/chatham-kent/volunteer/*' => '/chatham-kent/volunteer/*',
      ),
    ),
  );
  $context->reactions = array(
    'h1_override' => array(
      'h1_admin' => TRUE,
      'h1_title' => 'Volunteer: Chatham-Kent',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('H1 title override');
  $export['chatham_volunteer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pelee-island-home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pelee-island' => 'pelee-island',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2dd13d0e4729ccd8fc318a73bee9147b' => array(
          'module' => 'views',
          'delta' => '2dd13d0e4729ccd8fc318a73bee9147b',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-cfc67ef74e2113928c2cf3eebe77ef17' => array(
          'module' => 'views',
          'delta' => 'cfc67ef74e2113928c2cf3eebe77ef17',
          'region' => 'header',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'second_widgets',
          'weight' => '-41',
        ),
        'views-news-block_pi' => array(
          'module' => 'views',
          'delta' => 'news-block_pi',
          'region' => 'second_widgets',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'pelee-island',
    ),
  );
  $context->condition_mode = 0;
  $export['pelee-island-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pelee-island-inner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pelee-island/*' => 'pelee-island/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-23' => array(
          'module' => 'block',
          'delta' => '23',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'pelee-island pelee-island-inner location-inner',
    ),
  );
  $context->condition_mode = 0;
  $export['pelee-island-inner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sarnia-lambton-home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sarnia-lambton' => 'sarnia-lambton',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-271174728a8acc7ebb85a950ba434849' => array(
          'module' => 'views',
          'delta' => '271174728a8acc7ebb85a950ba434849',
          'region' => 'header',
          'weight' => '-22',
        ),
        'views-7927fe78d61e5adc4cdf5850663384ca' => array(
          'module' => 'views',
          'delta' => '7927fe78d61e5adc4cdf5850663384ca',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'second_widgets',
          'weight' => '-10',
        ),
        'views-news-block_sl' => array(
          'module' => 'views',
          'delta' => 'news-block_sl',
          'region' => 'second_widgets',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sarnia-lambton',
    ),
  );
  $context->condition_mode = 0;
  $export['sarnia-lambton-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sarnia-lambton-inner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sarnia-lambton/*' => 'sarnia-lambton/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-24' => array(
          'module' => 'block',
          'delta' => '24',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'sarnia-lambton sarnia-lambton-inner location-inner',
    ),
  );
  $context->condition_mode = 0;
  $export['sarnia-lambton-inner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'windsor-essex-home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'windsor-essex' => 'windsor-essex',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-49126f7e8d852bf4491af5fe41e5e2fe' => array(
          'module' => 'views',
          'delta' => '49126f7e8d852bf4491af5fe41e5e2fe',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-e82269ec9496cc900ccb58d7ccaafc5b' => array(
          'module' => 'views',
          'delta' => 'e82269ec9496cc900ccb58d7ccaafc5b',
          'region' => 'header',
          'weight' => '-8',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'second_widgets',
          'weight' => '-10',
        ),
        'views-news-block_we' => array(
          'module' => 'views',
          'delta' => 'news-block_we',
          'region' => 'second_widgets',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'windsor-essex',
    ),
  );
  $context->condition_mode = 0;
  $export['windsor-essex-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'windsor-essex-inner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'windsor-essex/*' => 'windsor-essex/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'sidebar',
          'weight' => '-8',
        ),
        'block-25' => array(
          'module' => 'block',
          'delta' => '25',
          'region' => 'sidebar',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'windsor-essex windsor-essex-inner location-inner',
    ),
  );
  $context->condition_mode = 0;
  $export['windsor-essex-inner'] = $context;

  return $export;
}
