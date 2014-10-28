<?php

function vonesc_form_alter(&$form, $form_state, $form_id) {
	if ($form_id == 'search_block_form')
	{
		$form['search_block_form']['#attributes']['autocomplete'] = 'off';
		$form['search_block_form']['#attributes']['placeholder'] = 'Search';
	}
	else if ($form_id == 'webform_client_form_48' || 
		$form_id == 'webform_client_form_253'|| 
		$form_id == 'webform_client_form_254'|| 
		$form_id == 'webform_client_form_255')
	{
		$form['actions']['submit']['#attributes']['class'][] = 'button';
		$form['#action'] = '';
	}
	else if ($form_id == 'search_form')
	{
		$form['basic']['submit']['#attributes']['class'][] = 'button';
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
		else if ($node->type == 'event')
		{
			$variables['title'] = 'Events: '.$location;
		}
	}
	
}

?>
