/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedlberTYPES_H_
#define __wrappedlberTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFppip_t)(void*, void*, int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(ber_sockbuf_add_io, iFppip_t)

#endif // __wrappedlberTYPES_H_