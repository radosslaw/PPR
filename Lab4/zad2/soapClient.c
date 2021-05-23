/* soapClient.c
   Generated by gSOAP 2.8.35 for calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"
#ifdef __cplusplus
extern "C" {
#endif

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.35 2021-05-23 18:41:14 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result)
{	struct ns__add soap_tmp_ns__add;
	struct ns__addResponse *soap_tmp_ns__addResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__add.a = a;
	soap_tmp_ns__add.b = b;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__add(soap, &soap_tmp_ns__add);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__add(soap, &soap_tmp_ns__add, "ns:add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__add(soap, &soap_tmp_ns__add, "ns:add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	soap_default_double(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__addResponse = soap_get_ns__addResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__addResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__addResponse->result)
		*result = *soap_tmp_ns__addResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result)
{	struct ns__sub soap_tmp_ns__sub;
	struct ns__subResponse *soap_tmp_ns__subResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__sub.a = a;
	soap_tmp_ns__sub.b = b;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__sub(soap, &soap_tmp_ns__sub);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__sub(soap, &soap_tmp_ns__sub, "ns:sub", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__sub(soap, &soap_tmp_ns__sub, "ns:sub", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	soap_default_double(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__subResponse = soap_get_ns__subResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__subResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__subResponse->result)
		*result = *soap_tmp_ns__subResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__mul(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result)
{	struct ns__mul soap_tmp_ns__mul;
	struct ns__mulResponse *soap_tmp_ns__mulResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__mul.a = a;
	soap_tmp_ns__mul.b = b;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__mul(soap, &soap_tmp_ns__mul);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__mul(soap, &soap_tmp_ns__mul, "ns:mul", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__mul(soap, &soap_tmp_ns__mul, "ns:mul", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	soap_default_double(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__mulResponse = soap_get_ns__mulResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__mulResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__mulResponse->result)
		*result = *soap_tmp_ns__mulResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__div(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result)
{	struct ns__div soap_tmp_ns__div;
	struct ns__divResponse *soap_tmp_ns__divResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__div.a = a;
	soap_tmp_ns__div.b = b;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__div(soap, &soap_tmp_ns__div);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__div(soap, &soap_tmp_ns__div, "ns:div", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__div(soap, &soap_tmp_ns__div, "ns:div", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	soap_default_double(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__divResponse = soap_get_ns__divResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__divResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__divResponse->result)
		*result = *soap_tmp_ns__divResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__pow(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result)
{	struct ns__pow soap_tmp_ns__pow;
	struct ns__powResponse *soap_tmp_ns__powResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__pow.a = a;
	soap_tmp_ns__pow.b = b;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__pow(soap, &soap_tmp_ns__pow);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__pow(soap, &soap_tmp_ns__pow, "ns:pow", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__pow(soap, &soap_tmp_ns__pow, "ns:pow", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	soap_default_double(soap, result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__powResponse = soap_get_ns__powResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__powResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__powResponse->result)
		*result = *soap_tmp_ns__powResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__hex(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *a, int size, char **result)
{	struct ns__hex soap_tmp_ns__hex;
	struct ns__hexResponse *soap_tmp_ns__hexResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	soap_tmp_ns__hex.a = a;
	soap_tmp_ns__hex.size = size;
	soap_begin(soap);
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__hex(soap, &soap_tmp_ns__hex);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__hex(soap, &soap_tmp_ns__hex, "ns:hex", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__hex(soap, &soap_tmp_ns__hex, "ns:hex", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	*result = NULL;
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns__hexResponse = soap_get_ns__hexResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns__hexResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (result && soap_tmp_ns__hexResponse->result)
		*result = *soap_tmp_ns__hexResponse->result;
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
