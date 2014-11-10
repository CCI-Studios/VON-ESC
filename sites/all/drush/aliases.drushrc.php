<?php

$aliases['dev'] = array(
	'uri'=> 'dev.voneriestclair.ca',
	'root' => '/home/vonesc/subdomains/dev/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'vonesc',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);

$aliases['live'] = array(
	'uri'=> 'live.voneriestclair.ca',
	'root' => '/home/vonesc/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'vonesc',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);
