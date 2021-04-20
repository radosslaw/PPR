/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _APP_H_RPCGEN
#define _APP_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct wejscie {
	int x1;
	char x2[255];
};
typedef struct wejscie wejscie;

struct wyjscie {
	char x2[255];
};
typedef struct wyjscie wyjscie;

#define TESTOWY 0x21000000
#define PROBNA 1

#if defined(__STDC__) || defined(__cplusplus)
#define OBLICZENIA 1
extern  wyjscie * obliczenia_1(wejscie *, CLIENT *);
extern  wyjscie * obliczenia_1_svc(wejscie *, struct svc_req *);
extern int testowy_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define OBLICZENIA 1
extern  wyjscie * obliczenia_1();
extern  wyjscie * obliczenia_1_svc();
extern int testowy_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_wejscie (XDR *, wejscie*);
extern  bool_t xdr_wyjscie (XDR *, wyjscie*);

#else /* K&R C */
extern bool_t xdr_wejscie ();
extern bool_t xdr_wyjscie ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_APP_H_RPCGEN */
