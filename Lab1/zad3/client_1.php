#!/usr/bin/php

<?php
	# zmienne predefiniowane -------------------------------------------
	$host = "127.0.0.1";
	$port = 12345;
	
	# tworzymy gniazdo -------------------------------------------------
	if( ! ( $client = socket_create( AF_INET, SOCK_DGRAM, 0 ) ) ){
		print "socket_create(): " 	. socket_strerror( socket_last_error( $client ) ) . "\n";
		exit( 1 );
	}
	
	# podlaczamy gniazdo do serwera ------------------------------------
	if( ! socket_connect( $client, $host, $port ) ){
		print "socket_connect(): " 	. socket_strerror( socket_last_error( $client ) ) . "\n";
		exit( 1 );
	}
		
	$processUser = posix_geteuid();
	$msg = $processUser;
	echo "Podaj wiadomosc: ";
	$msg .= rtrim(fgets(STDIN), "\n"); 
	if (!socket_send($client, $msg, strlen($msg), 0)) { 
		echo "Error! Sending not completed\n";  
	}
	
	# zamykamy gniazdo -------------------------------------------------
	socket_close( $client );
?>
