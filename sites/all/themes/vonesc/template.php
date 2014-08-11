<?php

function vonesc_form_alter(&$form, $form_state, $form_id) {
	if ($form_id == 'search_block_form')
	{
		$form['search_block_form']['#attributes']['autocomplete'] = 'off';
		$form['search_block_form']['#attributes']['placeholder'] = 'Search';
	}
	else if ($form_id == 'webform_client_form_48')
	{
		$form['actions']['submit']['#attributes']['class'][] = 'button';
		$form['#action'] = '';
		drupal_set_message("<pre>".print_r($form['#action'], true)."</pre>");
	}
	else if ($form_id == 'search_form')
	{
		$form['basic']['submit']['#attributes']['class'][] = 'button';
	}
}

function vonesc_preprocess_page(&$var)
{
	$googleMapsAPIKey = 'AIzaSyArDzWsTLx4esQf9HTBagGny_Ld84NiTds';
	drupal_add_js("https://maps.googleapis.com/maps/api/js?key=$googleMapsAPIKey", 'external');
}


?>
