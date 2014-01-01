

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Oct 13 18:11:40 2012
 */
/* Compiler settings for GRScript.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_GRSCRIPTLib,0x474067DF,0xD9CE,0x4324,0x9D,0x3F,0xE8,0x1F,0x8E,0x01,0x1A,0xD1);


MIDL_DEFINE_GUID(IID, IID_IGlobalRubyScript,0x0AC0D357,0xE866,0x11D3,0x8E,0x82,0x00,0x00,0xF4,0x5A,0x3C,0x05);


MIDL_DEFINE_GUID(IID, IID_IRubyize,0x0A4CBEBD,0xC46B,0x4A7C,0xA1,0xE2,0xAD,0x47,0x4C,0x33,0x0C,0x7A);


MIDL_DEFINE_GUID(CLSID, CLSID_GlobalRubyScript,0x0A383007,0x32FE,0x4ec0,0x97,0xD6,0x59,0x89,0x2E,0xCD,0x54,0x13);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleRubyize,0x63F6DE8D,0x85DF,0x4635,0xB8,0xBF,0x04,0xCE,0x3E,0xC5,0xD2,0xCC);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



