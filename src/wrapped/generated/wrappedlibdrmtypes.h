/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedlibdrmTYPES_H_
#define __wrappedlibdrmTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpV_t)(void*, ...);

#define SUPER() ADDED_FUNCTIONS() \
	GO(drmMsg, vFpV_t)

#endif // __wrappedlibdrmTYPES_H_