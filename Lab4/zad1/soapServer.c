/* soapServer.c
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

SOAP_SOURCE_STAMP("@(#) soapServer.c ver 2.8.35 2021-05-26 15:03:40 GMT")
SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	unsigned int k = soap->max_keep_alive;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (soap->max_keep_alive > 0 && !--k)
			soap->keep_alive = 0;
#endif
		if (soap_begin_serve(soap))
		{	if (soap->error >= SOAP_STOP)
				continue;
			return soap->error;
		}
		if ((soap_serve_request(soap) || (soap->fserveloop && soap->fserveloop(soap))) && soap->error && soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:add"))
		return soap_serve_ns__add(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:sub"))
		return soap_serve_ns__sub(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:mul"))
		return soap_serve_ns__mul(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:div"))
		return soap_serve_ns__div(soap);
	if (!soap_match_tag(soap, soap->tag, "ns:pow"))
		return soap_serve_ns__pow(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__add(struct soap *soap)
{	struct ns__add soap_tmp_ns__add;
	struct ns__addResponse soap_tmp_ns__addResponse;
	double soap_tmp_double;
	soap_default_ns__addResponse(soap, &soap_tmp_ns__addResponse);
	soap_default_double(soap, &soap_tmp_double);
	soap_tmp_ns__addResponse.result = &soap_tmp_double;
	soap_default_ns__add(soap, &soap_tmp_ns__add);
	if (!soap_get_ns__add(soap, &soap_tmp_ns__add, "ns:add", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__add(soap, soap_tmp_ns__add.a, soap_tmp_ns__add.b, soap_tmp_ns__addResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__addResponse(soap, &soap_tmp_ns__addResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__addResponse(soap, &soap_tmp_ns__addResponse, "ns:addResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__addResponse(soap, &soap_tmp_ns__addResponse, "ns:addResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__sub(struct soap *soap)
{	struct ns__sub soap_tmp_ns__sub;
	struct ns__subResponse soap_tmp_ns__subResponse;
	double soap_tmp_double;
	soap_default_ns__subResponse(soap, &soap_tmp_ns__subResponse);
	soap_default_double(soap, &soap_tmp_double);
	soap_tmp_ns__subResponse.result = &soap_tmp_double;
	soap_default_ns__sub(soap, &soap_tmp_ns__sub);
	if (!soap_get_ns__sub(soap, &soap_tmp_ns__sub, "ns:sub", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__sub(soap, soap_tmp_ns__sub.a, soap_tmp_ns__sub.b, soap_tmp_ns__subResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__subResponse(soap, &soap_tmp_ns__subResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__subResponse(soap, &soap_tmp_ns__subResponse, "ns:subResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__subResponse(soap, &soap_tmp_ns__subResponse, "ns:subResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__mul(struct soap *soap)
{	struct ns__mul soap_tmp_ns__mul;
	struct ns__mulResponse soap_tmp_ns__mulResponse;
	double soap_tmp_double;
	soap_default_ns__mulResponse(soap, &soap_tmp_ns__mulResponse);
	soap_default_double(soap, &soap_tmp_double);
	soap_tmp_ns__mulResponse.result = &soap_tmp_double;
	soap_default_ns__mul(soap, &soap_tmp_ns__mul);
	if (!soap_get_ns__mul(soap, &soap_tmp_ns__mul, "ns:mul", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__mul(soap, soap_tmp_ns__mul.a, soap_tmp_ns__mul.b, soap_tmp_ns__mulResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__mulResponse(soap, &soap_tmp_ns__mulResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__mulResponse(soap, &soap_tmp_ns__mulResponse, "ns:mulResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__mulResponse(soap, &soap_tmp_ns__mulResponse, "ns:mulResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__div(struct soap *soap)
{	struct ns__div soap_tmp_ns__div;
	struct ns__divResponse soap_tmp_ns__divResponse;
	double soap_tmp_double;
	soap_default_ns__divResponse(soap, &soap_tmp_ns__divResponse);
	soap_default_double(soap, &soap_tmp_double);
	soap_tmp_ns__divResponse.result = &soap_tmp_double;
	soap_default_ns__div(soap, &soap_tmp_ns__div);
	if (!soap_get_ns__div(soap, &soap_tmp_ns__div, "ns:div", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__div(soap, soap_tmp_ns__div.a, soap_tmp_ns__div.b, soap_tmp_ns__divResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__divResponse(soap, &soap_tmp_ns__divResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__divResponse(soap, &soap_tmp_ns__divResponse, "ns:divResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__divResponse(soap, &soap_tmp_ns__divResponse, "ns:divResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__pow(struct soap *soap)
{	struct ns__pow soap_tmp_ns__pow;
	struct ns__powResponse soap_tmp_ns__powResponse;
	double soap_tmp_double;
	soap_default_ns__powResponse(soap, &soap_tmp_ns__powResponse);
	soap_default_double(soap, &soap_tmp_double);
	soap_tmp_ns__powResponse.result = &soap_tmp_double;
	soap_default_ns__pow(soap, &soap_tmp_ns__pow);
	if (!soap_get_ns__pow(soap, &soap_tmp_ns__pow, "ns:pow", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = ns__pow(soap, soap_tmp_ns__pow.a, soap_tmp_ns__pow.b, soap_tmp_ns__powResponse.result);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__powResponse(soap, &soap_tmp_ns__powResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__powResponse(soap, &soap_tmp_ns__powResponse, "ns:powResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__powResponse(soap, &soap_tmp_ns__powResponse, "ns:powResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapServer.c */
