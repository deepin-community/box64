/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedlibx11xcbTYPES_H_
#define __wrappedlibx11xcbTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XGetXCBConnection, pFp_t)

#endif // __wrappedlibx11xcbTYPES_H_
