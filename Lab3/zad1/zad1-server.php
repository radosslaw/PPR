<?php
 
    function add($params) {
        $a = $params[0];
        $b = $params[1];

        return $a + $b;
    }

    $xml  = file_get_contents('php://input');
	$params = xmlrpc_decode( $xml );
	$method = basename( $_SERVER[ 'SCRIPT_FILENAME' ] );
	$method = substr( $method, 0, -4 );
	$array = array( 
		'method' => $method,
		'params' =>	$params,
	);

    $method_res = null;
    // domyślnie add
    // if($method == "add")
    // {
    $method_res = add($array['params']);
    // }

    $res = xmlrpc_encode_request(NULL, $method_res);
    print $res;
?>