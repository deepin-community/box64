/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedd3dadapter9TYPES_H_
#define __wrappedd3dadapter9TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pWp_t)(void*);
typedef int32_t (*iWip_t)(int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(D3DAdapter9GetProc, pWp_t) \
	GO(dummy_d3d, iWip_t)

#endif // __wrappedd3dadapter9TYPES_H_