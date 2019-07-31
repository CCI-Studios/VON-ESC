<?php

function vonesc_form_alter(&$form, $form_state, $form_id) {
	$form['actions']['submit']['#attributes']['class'][] = 'button';
	if ($form_id == 'search_block_form')
	{
		$form['search_block_form']['#attributes']['autocomplete'] = 'off';
		$form['search_block_form']['#attributes']['placeholder'] = 'Search';
		unset($form['actions']['submit']['#attributes']['class']);
	}
	else if ($form_id == 'webform_client_form_48' || 
		$form_id == 'webform_client_form_253'|| 
		$form_id == 'webform_client_form_254'|| 
		$form_id == 'webform_client_form_255')
	{
		$form['#action'] = '';
	}

	if (isset($form['submitted']))
	{
		foreach($form['submitted'] as $component_id=>$component)
		{
			if ($form['submitted'][$component_id]['#required'])
			{
				$form['submitted'][$component_id]['#attributes']['aria-required'] = 'true';
			}
		}
	}
}

function vonesc_preprocess_page(&$variables)
{
	$googleMapsAPIKey = 'AIzaSyArDzWsTLx4esQf9HTBagGny_Ld84NiTds';
	drupal_add_js("https://maps.googleapis.com/maps/api/js?key=$googleMapsAPIKey", 'external');
	
	if ($node = menu_get_object())
	{
		$location = @$node->field_location['und'][0]['taxonomy_term']->name;
		
		if ($node->type == 'volunteer_opportunity')
		{
			$variables['title'] = 'Volunteer: '.$location;
		}
		else if ($node->type == 'news')
		{
			$variables['title'] = 'News: '.$location;
		}
		else if ($node->type == 'news_erie_st_clair_')
		{
			$variables['title'] = 'News';
		}
		else if ($node->type == 'event')
		{
			$variables['title'] = 'Events: '.$location;
		}
	}
	
}

function vonesc_menu_tree($variables) {
  return '<ul class="menu" aria-role="menu">' . $variables['tree'] . '</ul>';
}

function vonesc_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li aria-role="menuitem" ' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

?>
