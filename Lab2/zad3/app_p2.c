#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include "app.h"

char *message_hex;

wyjscie *
obliczenia_1_svc(wejscie *argp, struct svc_req *rqstp)
{
	static wyjscie result;

    message_hex = malloc(2*argp->x1*sizeof(char));	
	for (int i=0; i < (argp->x1); ++i)
	{
		snprintf(message_hex+2*i, sizeof(message_hex), "%x", argp->x2[i]);
	}

	int  	port   = 12345;
	char 	host[] = "127.0.0.1";

    int 	fd, n;
    struct 	sockaddr_in serv_addr;
    struct 	hostent *server;
    char 	buffer[256];
    
    fd = socket(AF_INET, SOCK_STREAM, 0);

    server = gethostbyname( host );

    bzero((char *) &serv_addr, sizeof(serv_addr));
    
    serv_addr.sin_family = AF_INET;			// typ gniazda 
    serv_addr.sin_port = htons(port);		// port
    
    bcopy( (char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr, server->h_length );
    
	connect( fd, (struct sockaddr *) &serv_addr, sizeof( serv_addr ) );
    
    send( fd, message_hex, strlen(message_hex), 0 ) ;
   
    close(fd);

	return &result;
}
