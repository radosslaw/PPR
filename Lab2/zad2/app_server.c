/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "app.h"

wyjscie *
obliczenia_1_svc(wejscie *argp, struct svc_req *rqstp)
{
	static wyjscie  result;

	printf("Twoje dane w hexa: ");
	for (int i=0; i < (argp->x2); ++i)
	{
		printf("%02x", argp->x1[i]);
	}

	printf("\n");
	fflush(stdout);
	
	//result.suma    = argp->x1 + argp->x2;
	// result.roznica = argp->x1 - argp->x2;
	// result.iloczyn = argp->x1 * argp->x2;

	return &result;
}
