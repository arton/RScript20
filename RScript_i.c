

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jan 01 13:16:25 2014
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

MIDL_DEFINE_GUID(IID, IID_IRubyEngine,0x1AEE0BE2,0x04AC,0x11d4,0x8E,0xA8,0x00,0x00,0xF4,0x5A,0x3C,0x05);


MIDL_DEFINE_GUID(IID, IID_IRubyWrapper,0x66D56EE1,0x0249,0x11D4,0x8E,0xA4,0x00,0x00,0xF4,0x5A,0x3C,0x05);


MIDL_DEFINE_GUID(IID, LIBID_RSCRIPTLib,0x821EF766,0xA6ED,0x48AD,0xA7,0x91,0x20,0xB6,0xF7,0xE0,0x92,0x39);


MIDL_DEFINE_GUID(IID, IID_IRubyScript,0x5DBEF577,0xE278,0x11D3,0x8E,0x7A,0x00,0x00,0xF4,0x5A,0x3C,0x05);


MIDL_DEFINE_GUID(IID, IID_IRubyize,0x0A4CBEBD,0xC46B,0x4A7C,0xA1,0xE2,0xAD,0x47,0x4C,0x33,0x0C,0x7A);


MIDL_DEFINE_GUID(CLSID, CLSID_RubyScript,0x5FAA1692,0x10F7,0x4208,0x9E,0x0B,0x92,0x75,0x3C,0x3F,0x6D,0x4C);


MIDL_DEFINE_GUID(CLSID, CLSID_RubyWrapper,0x8DA7117D,0x882E,0x4E29,0x88,0x9C,0xF3,0x1B,0xED,0x9D,0x78,0xCC);


MIDL_DEFINE_GUID(CLSID, CLSID_Rubyize,0xCB567E39,0xE753,0x4A60,0xA9,0x24,0xEE,0x1C,0x15,0x38,0xA9,0x71);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



