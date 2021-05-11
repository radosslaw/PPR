<?php
    function hex($string) {
        $hex = '';
        for ($i=0; $i<strlen($string); $i++){
            $ord = ord($string[$i]);
            $hexCode = dechex($ord);
            $hex .= substr('0'.$hexCode, -2);
        }
        return strToUpper($hex);
    }

    $xml  = file_get_contents('php://input');
	$params = xmlrpc_decode( $xml );
	$method = basename( $_SERVER[ 'SCRIPT_FILENAME' ] );
	$method = substr( $method, 0, -4 );
	$array = array( 
		'method' => $method,
		'params' =>	$params,
    );
    
    
    $method_res = hex($array['params'][0]);
    $out = fopen('php://stdout', 'wb');
    fwrite($out, $method_res . "\n");


    $res = xmlrpc_encode_request(NULL, 0);
    print $res;
?>