#!/usr/bin/php

<?php

ini_set('error_reporting', E_ALL ^ E_NOTICE);
ini_set('display_errors', 1);


set_time_limit(0);
$address = 'localhost';
$port = 11000;
ob_implicit_flush();
$socket = socket_create(AF_INET, SOCK_DGRAM, SOL_UDP);
socket_bind($socket, $address, $port) or onSocketFailure("Failed to bind ", $socket);
$clients = [];
while (true){
    socket_recvfrom($socket, $buffer, 32768, 0, $ip, $port);
    $spaceIndex = strpos($buffer,"-");
    $data = substr($buffer,$spaceIndex+1);
    $pid = substr($buffer,0,$spaceIndex);
    if($data && $pid){
        $file = fopen($pid,"a") or die("unable");
        fwrite($file,$data);
        fclose($file);
    }
}
socket_close($socket);