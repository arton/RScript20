

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Feb 03 23:31:52 2016
 */
/* Compiler settings for RScript.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IRubyEngine,0xB3B9ABD7,0xA7F9,0x4EC8,0x91,0x81,0xB8,0x87,0x6A,0x8B,0x8D,0x86);


MIDL_DEFINE_GUID(IID, IID_IRubyWrapper,0xBAF4A404,0xE824,0x4A95,0x8A,0xD0,0x5B,0xC7,0x49,0x81,0xF8,0xA5);


MIDL_DEFINE_GUID(IID, LIBID_RSCRIPTLib,0x821EF766,0xA6ED,0x48AD,0xA7,0x91,0x20,0xB6,0xF7,0xE0,0x92,0x39);


MIDL_DEFINE_GUID(IID, IID_IRubyScript,0x5DBEF577,0xE278,0x11D3,0x8E,0x7A,0x00,0x00,0xF4,0x5A,0x3C,0x05);


MIDL_DEFINE_GUID(IID, IID_IRubyize,0x0A4CBEBD,0xC46B,0x4A7C,0xA1,0xE2,0xAD,0x47,0x4C,0x33,0x0C,0x7A);


MIDL_DEFINE_GUID(CLSID, CLSID_RubyScript,0x456A3763,0x90A4,0x4F2A,0xBF,0xF1,0x4B,0x77,0x3C,0x10,0x56,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_RubyWrapper,0xFEB29CB6,0xDBE8,0x4A69,0xB2,0x9C,0x76,0x42,0x00,0x18,0x29,0xB7);


MIDL_DEFINE_GUID(CLSID, CLSID_Rubyize,0x0BCFF05A,0xC2BF,0x4CB2,0xA7,0x78,0x34,0x28,0xA8,0xE8,0x5A,0x21);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



