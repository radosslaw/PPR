/*
	calcserver.c

	Example calculator service in C

	Compilation in C (see samples/calc/calc.h):
	$ soapcpp2 -c calc.h
	$ cc -o calcserver calcserver.c stdsoap2.c soapC.c soapServer.c
	where stdsoap2.c is in the 'gsoap' directory, or use libgsoap:
	$ cc -o calcserver calcserver.c soapC.c soapServer.c -lgsoap

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2008, Robert van Engelen, Genivia, Inc. All Rights Reserved.
This software is released under one of the following two licenses:
GPL or Genivia's license for commercial use.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapH.h"
#include "calc.nsmap"

int main(int argc, char **argv)
{ 
  SOAP_SOCKET m, s; /* master and slave sockets */
  struct soap soap;
  soap_init(&soap);
  if (argc < 2)
    soap_serve(&soap);	/* serve as CGI application */
  else
  { m = soap_bind(&soap, NULL, atoi(argv[1]), 100);
    if (!soap_valid_socket(m))
    { soap_print_fault(&soap, stderr);
      exit(-1);
    }
    // fprintf(stderr, "Socket connection successful: master socket = %d\n", m);
    for ( ; ; )
    { s = soap_accept(&soap);
      // fprintf(stderr, "Socket connection successful: slave socket = %d\n", s);
      if (!soap_valid_socket(s))
      { soap_print_fault(&soap, stderr);
        exit(-1);
      } 
      soap_serve(&soap);
      soap_end(&soap);
    }
  }
  return 0;
} 

int ns__add(struct soap *soap, double a, double b, double *result)
{ *result = a + b;
  return SOAP_OK;
} 

int ns__sub(struct soap *soap, double a, double b, double *result)
{ *result = a - b;
  return SOAP_OK;
} 

int ns__mul(struct soap *soap, double a, double b, double *result)
{ *result = a * b;
  return SOAP_OK;
} 

int ns__div(struct soap *soap, double a, double b, double *result)
{ if (b)
    *result = a / b;
  else
  { char *s = (char*)soap_malloc(soap, 1024);
    sprintf(s, "<error xmlns=\"http://tempuri.org/\">Can't divide %f by %f</error>", a, b);
    return soap_sender_fault(soap, "Division by zero", s);
  }
  return SOAP_OK;
} 

int ns__pow(struct soap *soap, double a, double b, double *result)
{ *result = pow(a, b);
  if (soap_errno == EDOM)	/* soap_errno is like errno, but compatible with Win32 */
  { char *s = (char*)soap_malloc(soap, 1024);
    sprintf(s, "Can't take the power of %f to %f", a, b);
    sprintf(s, "<error xmlns=\"http://tempuri.org/\">Can't take power of %f to %f</error>", a, b);
    return soap_sender_fault(soap, "Power function domain error", s);
  }
  return SOAP_OK;
}

int ns__hex(struct soap *soap, char *a, int size, char **result)
{
    char *msg = ( char* )soap_malloc( soap, 512 );
    for (size_t i = 0; i < sizeof a; i++){
      if(a[i] == '\0' || a[i] == '\n')
        break;

      sprintf(msg + i * 2, "%02x", a[i]);
    }
    strcat(msg, "\0");
    *result = msg;

  return SOAP_OK;
} 

int ns__hex_and_pass(struct soap *soap, char *a, int size, char **result)
{
    char *msg = ( char* )soap_malloc( soap, 512 );
    for (size_t i = 0; i < sizeof a; i++){
      if(a[i] == '\0' || a[i] == '\n')
        break;

      sprintf(msg + i * 2, "%02x", a[i]);
    }
    strcat(msg, "\0");
    *result = msg;

    // komunikacja z procesem 3
    {
      struct soap soap;
      char a[255];
      char *res;
      strcpy(a, *result);

      soap_init1(&soap, SOAP_XML_INDENT);
      soap_call_ns__get(&soap, "http://localhost:10011", "", a, 255, &res);
      if (soap.error)
      { 
        soap_print_fault(&soap, stderr);
        exit(1);
      }

      soap_destroy(&soap);
      soap_end(&soap);
      soap_done(&soap);
    }


  return SOAP_OK;
} 

int ns__get(struct soap *soap, char *a, int size, char **result)
{
  printf("%s", a);
  printf("\n");
  fflush(stdout);

  return SOAP_OK;
} 