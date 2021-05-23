/* soapStub.h
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


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20835
# error "GSOAP VERSION 20835 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Structs and Unions                                                         *
 *                                                                            *
\******************************************************************************/

struct ns__addResponse;	/* calc.h:97 */
struct ns__add;	/* calc.h:97 */
struct ns__subResponse;	/* calc.h:100 */
struct ns__sub;	/* calc.h:100 */
struct ns__mulResponse;	/* calc.h:103 */
struct ns__mul;	/* calc.h:103 */
struct ns__divResponse;	/* calc.h:106 */
struct ns__div;	/* calc.h:106 */
struct ns__powResponse;	/* calc.h:109 */
struct ns__pow;	/* calc.h:109 */
struct ns__hexResponse;	/* calc.h:111 */
struct ns__hex;	/* calc.h:111 */

/* calc.h:97 */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (10)
/* complex XSD type 'ns:addResponse': */
struct ns__addResponse {
        /** Optional element 'result' of XSD type 'xsd:double' */
        double *result;
};
#endif

/* calc.h:97 */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (11)
/* complex XSD type 'ns:add': */
struct ns__add {
        /** Required element 'a' of XSD type 'xsd:double' */
        double a;
        /** Required element 'b' of XSD type 'xsd:double' */
        double b;
};
#endif

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (13)
/* complex XSD type 'ns:subResponse': */
struct ns__subResponse {
        /** Optional element 'result' of XSD type 'xsd:double' */
        double *result;
};
#endif

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (14)
/* complex XSD type 'ns:sub': */
struct ns__sub {
        /** Required element 'a' of XSD type 'xsd:double' */
        double a;
        /** Required element 'b' of XSD type 'xsd:double' */
        double b;
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__mulResponse
#define SOAP_TYPE_ns__mulResponse (16)
/* complex XSD type 'ns:mulResponse': */
struct ns__mulResponse {
        /** Optional element 'result' of XSD type 'xsd:double' */
        double *result;
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__mul
#define SOAP_TYPE_ns__mul (17)
/* complex XSD type 'ns:mul': */
struct ns__mul {
        /** Required element 'a' of XSD type 'xsd:double' */
        double a;
        /** Required element 'b' of XSD type 'xsd:double' */
        double b;
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__divResponse
#define SOAP_TYPE_ns__divResponse (19)
/* complex XSD type 'ns:divResponse': */
struct ns__divResponse {
        /** Optional element 'result' of XSD type 'xsd:double' */
        double *result;
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__div
#define SOAP_TYPE_ns__div (20)
/* complex XSD type 'ns:div': */
struct ns__div {
        /** Required element 'a' of XSD type 'xsd:double' */
        double a;
        /** Required element 'b' of XSD type 'xsd:double' */
        double b;
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__powResponse
#define SOAP_TYPE_ns__powResponse (22)
/* complex XSD type 'ns:powResponse': */
struct ns__powResponse {
        /** Optional element 'result' of XSD type 'xsd:double' */
        double *result;
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__pow
#define SOAP_TYPE_ns__pow (23)
/* complex XSD type 'ns:pow': */
struct ns__pow {
        /** Required element 'a' of XSD type 'xsd:double' */
        double a;
        /** Required element 'b' of XSD type 'xsd:double' */
        double b;
};
#endif

/* calc.h:111 */
#ifndef SOAP_TYPE_ns__hexResponse
#define SOAP_TYPE_ns__hexResponse (26)
/* complex XSD type 'ns:hexResponse': */
struct ns__hexResponse {
        /** Optional element 'result' of XSD type 'xsd:string' */
        char **result;
};
#endif

/* calc.h:111 */
#ifndef SOAP_TYPE_ns__hex
#define SOAP_TYPE_ns__hex (27)
/* complex XSD type 'ns:hex': */
struct ns__hex {
        /** Optional element 'a' of XSD type 'xsd:string' */
        char *a;
        /** Required element 'size' of XSD type 'xsd:int' */
        int size;
};
#endif

/* calc.h:112 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (28)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif
#endif

/* calc.h:112 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (29)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
};
#endif
#endif

/* calc.h:112 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (31)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
};
#endif
#endif

/* calc.h:112 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (34)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
};
#endif
#endif

/* calc.h:112 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (35)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* calc.h:97 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* calc.h:97 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* double has binding name 'double' for type 'xsd:double' */
#ifndef SOAP_TYPE_double
#define SOAP_TYPE_double (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (35)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (34)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (31)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (29)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (28)
#endif

/* struct ns__hex has binding name 'ns__hex' for type 'ns:hex' */
#ifndef SOAP_TYPE_ns__hex
#define SOAP_TYPE_ns__hex (27)
#endif

/* struct ns__hexResponse has binding name 'ns__hexResponse' for type 'ns:hexResponse' */
#ifndef SOAP_TYPE_ns__hexResponse
#define SOAP_TYPE_ns__hexResponse (26)
#endif

/* struct ns__pow has binding name 'ns__pow' for type 'ns:pow' */
#ifndef SOAP_TYPE_ns__pow
#define SOAP_TYPE_ns__pow (23)
#endif

/* struct ns__powResponse has binding name 'ns__powResponse' for type 'ns:powResponse' */
#ifndef SOAP_TYPE_ns__powResponse
#define SOAP_TYPE_ns__powResponse (22)
#endif

/* struct ns__div has binding name 'ns__div' for type 'ns:div' */
#ifndef SOAP_TYPE_ns__div
#define SOAP_TYPE_ns__div (20)
#endif

/* struct ns__divResponse has binding name 'ns__divResponse' for type 'ns:divResponse' */
#ifndef SOAP_TYPE_ns__divResponse
#define SOAP_TYPE_ns__divResponse (19)
#endif

/* struct ns__mul has binding name 'ns__mul' for type 'ns:mul' */
#ifndef SOAP_TYPE_ns__mul
#define SOAP_TYPE_ns__mul (17)
#endif

/* struct ns__mulResponse has binding name 'ns__mulResponse' for type 'ns:mulResponse' */
#ifndef SOAP_TYPE_ns__mulResponse
#define SOAP_TYPE_ns__mulResponse (16)
#endif

/* struct ns__sub has binding name 'ns__sub' for type 'ns:sub' */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (14)
#endif

/* struct ns__subResponse has binding name 'ns__subResponse' for type 'ns:subResponse' */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (13)
#endif

/* struct ns__add has binding name 'ns__add' for type 'ns:add' */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (11)
#endif

/* struct ns__addResponse has binding name 'ns__addResponse' for type 'ns:addResponse' */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (10)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (37)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (36)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (30)
#endif

/* char ** has binding name 'PointerTostring' for type 'xsd:string' */
#ifndef SOAP_TYPE_PointerTostring
#define SOAP_TYPE_PointerTostring (24)
#endif

/* double * has binding name 'PointerTodouble' for type 'xsd:double' */
#ifndef SOAP_TYPE_PointerTodouble
#define SOAP_TYPE_PointerTodouble (8)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stub Functions                                            *
 *                                                                            *
\******************************************************************************/

    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__mul(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__div(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__pow(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double *result);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__hex(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *a, int size, char **result);

/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/

    /** Web service operation 'ns__add' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__add(struct soap*, double a, double b, double *result);
    /** Web service operation 'ns__sub' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__sub(struct soap*, double a, double b, double *result);
    /** Web service operation 'ns__mul' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__mul(struct soap*, double a, double b, double *result);
    /** Web service operation 'ns__div' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__div(struct soap*, double a, double b, double *result);
    /** Web service operation 'ns__pow' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__pow(struct soap*, double a, double b, double *result);
    /** Web service operation 'ns__hex' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns__hex(struct soap*, char *a, int size, char **result);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__add(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__sub(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__mul(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__div(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__pow(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns__hex(struct soap*);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */
