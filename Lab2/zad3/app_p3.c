#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h> 

int error( int ern, const char *msg ){
    perror( msg );
    return ern;
}

int main( void ) {
	
	int  port   = 12345;
			
	int 		fd;
	char 		buffer[256];
	socklen_t 	socklen;
	char 		hex[200];
	
	struct 	sockaddr_in serv_addr, cli_addr;
	fd = socket( AF_INET, SOCK_STREAM, 0 );		// tworzymy nowe gniazdo
	if (fd < 0) 
        return error( 1, "socket()" );
	bzero( ( char * )&serv_addr, sizeof(serv_addr));

	serv_addr.sin_family 	  	= AF_INET;			// typ gniazda 
	serv_addr.sin_addr.s_addr 	= INADDR_ANY;		// oczekujemy polaczen na kazdym adresie
	serv_addr.sin_port 			= htons(port);		// port, na ktorym nasluchujemy	

	if( bind(fd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0 ) 
		return error( 2, "bind()" );
	listen( fd, 5 );	
	socklen = sizeof(cli_addr);	
	while(1) 
	{			
			bzero(buffer, 256);		
            struct sockaddr_in client = { };
            int clientSocket = accept(fd, (struct sockaddr * ) &client, &socklen);
			if (recv(clientSocket, buffer, sizeof(buffer), 0) <= 0 )
            {
                perror("recv() ERROR");
            }
			printf("Address: %s Port: %d\n",  inet_ntoa( cli_addr.sin_addr ), cli_addr.sin_port );
			printf("Wiadomosc w hexa = %s\n",buffer);
			char msg[256];			

	}
	close(fd);	
	return 0; 
}
