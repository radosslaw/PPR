#!/usr/bin/php

<?php
	# zmienne predefiniowane -------------------------------------------
	$host = "127.0.0.1";
	$port = 12345;
	
	# tworzymy gniazdo -------------------------------------------------
	if( ! ( $client = socket_create( AF_INET, SOCK_STREAM, SOL_TCP ) ) ){
		print "socket_create(): " 	. socket_strerror( socket_last_error( $client ) ) . "\n";
		exit( 1 );
	}
	
	# podlaczamy gniazdo do serwera ------------------------------------
	if( ! socket_connect( $client, $host, $port ) ){
		print "socket_connect(): " 	. socket_strerror( socket_last_error( $client ) ) . "\n";
		exit( 1 );
	}
		
	# odczytujemy wiadomosc od serwera ---------------------------------
	$msg = ""; 
	while( $rcv = socket_read( $client, 1024 ) ){ 
		$msg .= $rcv;  
	}
	
	# zamykamy gniazdo -------------------------------------------------
	socket_close( $client );
	
	# wyswietlamy wiadomosc --------------------------------------------
	print "$msg\n";
	#-------------------------------------------------------------------
?>
