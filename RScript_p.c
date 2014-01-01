

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "RScript.h"

#define TYPE_FORMAT_STRING_SIZE   1273                              
#define PROC_FORMAT_STRING_SIZE   1057                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _RScript_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } RScript_MIDL_TYPE_FORMAT_STRING;

typedef struct _RScript_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } RScript_MIDL_PROC_FORMAT_STRING;

typedef struct _RScript_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } RScript_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const RScript_MIDL_TYPE_FORMAT_STRING RScript__MIDL_TypeFormatString;
extern const RScript_MIDL_PROC_FORMAT_STRING RScript__MIDL_ProcFormatString;
extern const RScript_MIDL_EXPR_FORMAT_STRING RScript__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRubyEngine_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRubyEngine_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRubyWrapper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRubyWrapper_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const RScript_MIDL_PROC_FORMAT_STRING RScript__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure CreateObject */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10 */	NdrFcShort( 0x74 ),	/* 116 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 24 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter pszHost */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 34 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter riid */

/* 36 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 38 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 40 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter ppv */

/* 42 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 44 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 46 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckInterfaceIsSafety */

/* 54 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 64 */	NdrFcShort( 0x30 ),	/* 48 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 70 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 78 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter pUnk */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckActiveXIsSafety */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x5 ),	/* 5 */
/* 104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 106 */	NdrFcShort( 0x30 ),	/* 48 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 120 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnterScript */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LeaveScript */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x7 ),	/* 7 */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnScriptError */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pError */

/* 216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterServiceProvider */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x9 ),	/* 9 */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProvider */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterServiceProvider */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0xa ),	/* 10 */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSecurityLevel */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xb ),	/* 11 */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pResult */

/* 318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearModuleObject */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0xc ),	/* 12 */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 346 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRubyize */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xd ),	/* 13 */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	NdrFcShort( 0x5 ),	/* 5 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter f */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRubyize */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0xe ),	/* 14 */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModule */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0xf ),	/* 15 */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x24 ),	/* 36 */
/* 440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pResult */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectObjects */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DefineGlobalObject */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x11 ),	/* 17 */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rb_intern */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x3 ),	/* 3 */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pid */

/* 552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rb_module_new */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x4 ),	/* 4 */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	NdrFcShort( 0x24 ),	/* 36 */
/* 578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter parent */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p */

/* 594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SearchMethod */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x5 ),	/* 5 */
/* 614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pName */

/* 636 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pDispID */

/* 642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rb_invoke */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x6 ),	/* 6 */
/* 662 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 670 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pengine */

/* 678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter Module */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter func */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDispParams */

/* 696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 700 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Parameter pVarResult */

/* 702 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	NdrFcShort( 0x4b8 ),	/* Type Offset=1208 */

	/* Parameter ppError */

/* 708 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 710 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 712 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SearchClass */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x7 ),	/* 7 */
/* 728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 744 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pval */

/* 750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rb_funcall_with_string2 */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 772 */	NdrFcShort( 0x25 ),	/* 37 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 778 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pengine */

/* 786 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 790 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter val */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter id */

/* 798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter line */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cb */

/* 810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 812 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter p */

/* 816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 818 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 820 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Parameter TraceRequired */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 826 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter pVarResult */

/* 828 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 830 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 832 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppError */

/* 834 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 836 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 838 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterObject */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x9 ),	/* 9 */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter Module */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterObject */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0xa ),	/* 10 */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 912 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter Module */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Disconnect */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0xb ),	/* 11 */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pengin */

/* 954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 958 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DefineGlobalObject */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0xc ),	/* 12 */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pengine */

/* 990 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DefineConstant */

/* 1002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0xd ),	/* 13 */
/* 1010 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1018 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 1026 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1030 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter Module */

/* 1032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVar */

/* 1038 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1040 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1042 */	NdrFcShort( 0x476 ),	/* Type Offset=1142 */

	/* Parameter pengine */

/* 1044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1046 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1048 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const RScript_MIDL_TYPE_FORMAT_STRING RScript__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  4 */	NdrFcShort( 0x8 ),	/* 8 */
/*  6 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/*  8 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 14 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 16 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (2) */
			0x5b,		/* FC_END */
/* 20 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 22 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0xffee ),	/* Offset= -18 (8) */
/* 28 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 44 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 46 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 48 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0xeae1ba61 ),	/* -354305439 */
/* 56 */	NdrFcShort( 0xa4ed ),	/* -23315 */
/* 58 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 60 */	0x8f,		/* 143 */
			0x20,		/* 32 */
/* 62 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 64 */	0x5f,		/* 95 */
			0x2c,		/* 44 */
/* 66 */	0xd0,		/* 208 */
			0x64,		/* 100 */
/* 68 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 70 */	NdrFcLong( 0x6d5140c1 ),	/* 1834041537 */
/* 74 */	NdrFcShort( 0x7436 ),	/* 29750 */
/* 76 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 78 */	0x80,		/* 128 */
			0x34,		/* 52 */
/* 80 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 82 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 84 */	0x9,		/* 9 */
			0xfa,		/* 250 */
/* 86 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 88 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 92 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 96 */	NdrFcLong( 0x1aee0be2 ),	/* 451808226 */
/* 100 */	NdrFcShort( 0x4ac ),	/* 1196 */
/* 102 */	NdrFcShort( 0x11d4 ),	/* 4564 */
/* 104 */	0x8e,		/* 142 */
			0xa8,		/* 168 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	0xf4,		/* 244 */
			0x5a,		/* 90 */
/* 110 */	0x3c,		/* 60 */
			0x5,		/* 5 */
/* 112 */	
			0x11, 0x0,	/* FC_RP */
/* 114 */	NdrFcShort( 0x430 ),	/* Offset= 1072 (1186) */
/* 116 */	
			0x12, 0x0,	/* FC_UP */
/* 118 */	NdrFcShort( 0x3ec ),	/* Offset= 1004 (1122) */
/* 120 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 122 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 124 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 126 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (130) */
/* 130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 132 */	NdrFcShort( 0x2f ),	/* 47 */
/* 134 */	NdrFcLong( 0x14 ),	/* 20 */
/* 138 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 140 */	NdrFcLong( 0x3 ),	/* 3 */
/* 144 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 146 */	NdrFcLong( 0x11 ),	/* 17 */
/* 150 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 152 */	NdrFcLong( 0x2 ),	/* 2 */
/* 156 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 158 */	NdrFcLong( 0x4 ),	/* 4 */
/* 162 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 164 */	NdrFcLong( 0x5 ),	/* 5 */
/* 168 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 170 */	NdrFcLong( 0xb ),	/* 11 */
/* 174 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 176 */	NdrFcLong( 0xa ),	/* 10 */
/* 180 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 182 */	NdrFcLong( 0x6 ),	/* 6 */
/* 186 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (418) */
/* 188 */	NdrFcLong( 0x7 ),	/* 7 */
/* 192 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 194 */	NdrFcLong( 0x8 ),	/* 8 */
/* 198 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (424) */
/* 200 */	NdrFcLong( 0xd ),	/* 13 */
/* 204 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (450) */
/* 206 */	NdrFcLong( 0x9 ),	/* 9 */
/* 210 */	NdrFcShort( 0x102 ),	/* Offset= 258 (468) */
/* 212 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 216 */	NdrFcShort( 0x10e ),	/* Offset= 270 (486) */
/* 218 */	NdrFcLong( 0x24 ),	/* 36 */
/* 222 */	NdrFcShort( 0x33a ),	/* Offset= 826 (1048) */
/* 224 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 228 */	NdrFcShort( 0x334 ),	/* Offset= 820 (1048) */
/* 230 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 234 */	NdrFcShort( 0x332 ),	/* Offset= 818 (1052) */
/* 236 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 240 */	NdrFcShort( 0x330 ),	/* Offset= 816 (1056) */
/* 242 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 246 */	NdrFcShort( 0x32e ),	/* Offset= 814 (1060) */
/* 248 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 252 */	NdrFcShort( 0x32c ),	/* Offset= 812 (1064) */
/* 254 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 258 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1068) */
/* 260 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 264 */	NdrFcShort( 0x328 ),	/* Offset= 808 (1072) */
/* 266 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 270 */	NdrFcShort( 0x312 ),	/* Offset= 786 (1056) */
/* 272 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 276 */	NdrFcShort( 0x310 ),	/* Offset= 784 (1060) */
/* 278 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 282 */	NdrFcShort( 0x31a ),	/* Offset= 794 (1076) */
/* 284 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 288 */	NdrFcShort( 0x310 ),	/* Offset= 784 (1072) */
/* 290 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 294 */	NdrFcShort( 0x312 ),	/* Offset= 786 (1080) */
/* 296 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 300 */	NdrFcShort( 0x310 ),	/* Offset= 784 (1084) */
/* 302 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 306 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1088) */
/* 308 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 312 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1092) */
/* 314 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 318 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1096) */
/* 320 */	NdrFcLong( 0x10 ),	/* 16 */
/* 324 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 326 */	NdrFcLong( 0x12 ),	/* 18 */
/* 330 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 332 */	NdrFcLong( 0x13 ),	/* 19 */
/* 336 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 338 */	NdrFcLong( 0x15 ),	/* 21 */
/* 342 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 344 */	NdrFcLong( 0x16 ),	/* 22 */
/* 348 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 350 */	NdrFcLong( 0x17 ),	/* 23 */
/* 354 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 356 */	NdrFcLong( 0xe ),	/* 14 */
/* 360 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1104) */
/* 362 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 366 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1114) */
/* 368 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 372 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1118) */
/* 374 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 378 */	NdrFcShort( 0x2a6 ),	/* Offset= 678 (1056) */
/* 380 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 384 */	NdrFcShort( 0x2a4 ),	/* Offset= 676 (1060) */
/* 386 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 390 */	NdrFcShort( 0x2a2 ),	/* Offset= 674 (1064) */
/* 392 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 396 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1060) */
/* 398 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 402 */	NdrFcShort( 0x292 ),	/* Offset= 658 (1060) */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* Offset= 0 (408) */
/* 410 */	NdrFcLong( 0x1 ),	/* 1 */
/* 414 */	NdrFcShort( 0x0 ),	/* Offset= 0 (414) */
/* 416 */	NdrFcShort( 0xffff ),	/* Offset= -1 (415) */
/* 418 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 424 */	
			0x12, 0x0,	/* FC_UP */
/* 426 */	NdrFcShort( 0xe ),	/* Offset= 14 (440) */
/* 428 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 430 */	NdrFcShort( 0x2 ),	/* 2 */
/* 432 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 434 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 436 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 438 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 440 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (428) */
/* 446 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 450 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 464 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 466 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 468 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 470 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 480 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 482 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 484 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 486 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 488 */	NdrFcShort( 0x2 ),	/* Offset= 2 (490) */
/* 490 */	
			0x12, 0x0,	/* FC_UP */
/* 492 */	NdrFcShort( 0x21a ),	/* Offset= 538 (1030) */
/* 494 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 496 */	NdrFcShort( 0x18 ),	/* 24 */
/* 498 */	NdrFcShort( 0xa ),	/* 10 */
/* 500 */	NdrFcLong( 0x8 ),	/* 8 */
/* 504 */	NdrFcShort( 0x5a ),	/* Offset= 90 (594) */
/* 506 */	NdrFcLong( 0xd ),	/* 13 */
/* 510 */	NdrFcShort( 0x7e ),	/* Offset= 126 (636) */
/* 512 */	NdrFcLong( 0x9 ),	/* 9 */
/* 516 */	NdrFcShort( 0x9e ),	/* Offset= 158 (674) */
/* 518 */	NdrFcLong( 0xc ),	/* 12 */
/* 522 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (722) */
/* 524 */	NdrFcLong( 0x24 ),	/* 36 */
/* 528 */	NdrFcShort( 0x124 ),	/* Offset= 292 (820) */
/* 530 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 534 */	NdrFcShort( 0x144 ),	/* Offset= 324 (858) */
/* 536 */	NdrFcLong( 0x10 ),	/* 16 */
/* 540 */	NdrFcShort( 0x15e ),	/* Offset= 350 (890) */
/* 542 */	NdrFcLong( 0x2 ),	/* 2 */
/* 546 */	NdrFcShort( 0x178 ),	/* Offset= 376 (922) */
/* 548 */	NdrFcLong( 0x3 ),	/* 3 */
/* 552 */	NdrFcShort( 0x192 ),	/* Offset= 402 (954) */
/* 554 */	NdrFcLong( 0x14 ),	/* 20 */
/* 558 */	NdrFcShort( 0x1ac ),	/* Offset= 428 (986) */
/* 560 */	NdrFcShort( 0xffff ),	/* Offset= -1 (559) */
/* 562 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 564 */	NdrFcShort( 0x4 ),	/* 4 */
/* 566 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 572 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 574 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 576 */	NdrFcShort( 0x4 ),	/* 4 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (440) */
/* 590 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 594 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 598 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 600 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 602 */	NdrFcShort( 0x4 ),	/* 4 */
/* 604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 606 */	0x11, 0x0,	/* FC_RP */
/* 608 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (562) */
/* 610 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 612 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 614 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 624 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 628 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 630 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 632 */	NdrFcShort( 0xfda8 ),	/* Offset= -600 (32) */
/* 634 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x6 ),	/* Offset= 6 (648) */
/* 644 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x11, 0x0,	/* FC_RP */
/* 650 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (614) */
/* 652 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 662 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 666 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 668 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 670 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (468) */
/* 672 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 674 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x6 ),	/* Offset= 6 (686) */
/* 682 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 686 */	
			0x11, 0x0,	/* FC_RP */
/* 688 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (652) */
/* 690 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 700 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 702 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	0x12, 0x0,	/* FC_UP */
/* 716 */	NdrFcShort( 0x196 ),	/* Offset= 406 (1122) */
/* 718 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 720 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 722 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x6 ),	/* Offset= 6 (734) */
/* 730 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (690) */
/* 738 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 740 */	NdrFcLong( 0x2f ),	/* 47 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 750 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 752 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 754 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 756 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 760 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 766 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 768 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 770 */	NdrFcShort( 0x10 ),	/* 16 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0xa ),	/* Offset= 10 (784) */
/* 776 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 778 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (738) */
/* 782 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 784 */	
			0x12, 0x0,	/* FC_UP */
/* 786 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (756) */
/* 788 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 792 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 798 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 800 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	0x12, 0x0,	/* FC_UP */
/* 814 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (768) */
/* 816 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 818 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 820 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x6 ),	/* Offset= 6 (832) */
/* 828 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 830 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 832 */	
			0x11, 0x0,	/* FC_RP */
/* 834 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (788) */
/* 836 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 846 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 850 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 852 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 854 */	NdrFcShort( 0xfe6c ),	/* Offset= -404 (450) */
/* 856 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 858 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x18 ),	/* 24 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0xa ),	/* Offset= 10 (874) */
/* 866 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 868 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0xfca2 ),	/* Offset= -862 (8) */
/* 872 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 874 */	
			0x11, 0x0,	/* FC_RP */
/* 876 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (836) */
/* 878 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 882 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 888 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 890 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	NdrFcShort( 0x4 ),	/* 4 */
/* 902 */	0x12, 0x0,	/* FC_UP */
/* 904 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (878) */
/* 906 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 908 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 910 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 912 */	NdrFcShort( 0x2 ),	/* 2 */
/* 914 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 920 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	0x12, 0x0,	/* FC_UP */
/* 936 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (910) */
/* 938 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 942 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 952 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 954 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	0x12, 0x0,	/* FC_UP */
/* 968 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (942) */
/* 970 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 972 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 974 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 984 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 986 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 992 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 998 */	0x12, 0x0,	/* FC_UP */
/* 1000 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (974) */
/* 1002 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1004 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1006 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1012 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1014 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1020 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1022 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1024 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1026 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1006) */
/* 1028 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1030 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1034 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1014) */
/* 1036 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1036) */
/* 1038 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1040 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1042 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1044 */	NdrFcShort( 0xfdda ),	/* Offset= -550 (494) */
/* 1046 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1048 */	
			0x12, 0x0,	/* FC_UP */
/* 1050 */	NdrFcShort( 0xfee6 ),	/* Offset= -282 (768) */
/* 1052 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1054 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1056 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1058 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1060 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1062 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1064 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1066 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1068 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1070 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1072 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1074 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1076 */	
			0x12, 0x0,	/* FC_UP */
/* 1078 */	NdrFcShort( 0xfd6c ),	/* Offset= -660 (418) */
/* 1080 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1082 */	NdrFcShort( 0xfd6e ),	/* Offset= -658 (424) */
/* 1084 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1086 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (450) */
/* 1088 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1090 */	NdrFcShort( 0xfd92 ),	/* Offset= -622 (468) */
/* 1092 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1094 */	NdrFcShort( 0xfda0 ),	/* Offset= -608 (486) */
/* 1096 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1098 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1100) */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1122) */
/* 1104 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1108 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1110 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1112 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1114 */	
			0x12, 0x0,	/* FC_UP */
/* 1116 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1104) */
/* 1118 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1120 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1122 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1124 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1128) */
/* 1130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1132 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1134 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1136 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1138 */	NdrFcShort( 0xfc06 ),	/* Offset= -1018 (120) */
/* 1140 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1142 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0xfbf6 ),	/* Offset= -1034 (116) */
/* 1152 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1162 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1166 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1142) */
/* 1172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1174 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1178 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1180 */	NdrFcShort( 0xc ),	/* 12 */
/* 1182 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1184 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1186 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1188 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1200) */
/* 1194 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1198 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1200 */	
			0x12, 0x0,	/* FC_UP */
/* 1202 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1152) */
/* 1204 */	
			0x12, 0x0,	/* FC_UP */
/* 1206 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1174) */
/* 1208 */	
			0x12, 0x0,	/* FC_UP */
/* 1210 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1216) */
/* 1212 */	
			0x13, 0x0,	/* FC_OP */
/* 1214 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1122) */
/* 1216 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1212) */
/* 1226 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1230) */
/* 1230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1232 */	NdrFcLong( 0xeae1ba61 ),	/* -354305439 */
/* 1236 */	NdrFcShort( 0xa4ed ),	/* -23315 */
/* 1238 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1240 */	0x8f,		/* 143 */
			0x20,		/* 32 */
/* 1242 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1244 */	0x5f,		/* 95 */
			0x2c,		/* 44 */
/* 1246 */	0xd0,		/* 208 */
			0x64,		/* 100 */
/* 1248 */	
			0x11, 0x0,	/* FC_RP */
/* 1250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1252) */
/* 1252 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1256 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1258 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1260 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1262 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1264 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1266 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1216) */
/* 1268 */	
			0x11, 0x0,	/* FC_RP */
/* 1270 */	NdrFcShort( 0xff80 ),	/* Offset= -128 (1142) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IRubyEngine, ver. 0.0,
   GUID={0x1AEE0BE2,0x04AC,0x11d4,{0x8E,0xA8,0x00,0x00,0xF4,0x5A,0x3C,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IRubyEngine_FormatStringOffsetTable[] =
    {
    0,
    54,
    96,
    132,
    162,
    192,
    228,
    264,
    294,
    330,
    360,
    396,
    426,
    462,
    492
    };

static const MIDL_STUBLESS_PROXY_INFO IRubyEngine_ProxyInfo =
    {
    &Object_StubDesc,
    RScript__MIDL_ProcFormatString.Format,
    &IRubyEngine_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRubyEngine_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    RScript__MIDL_ProcFormatString.Format,
    &IRubyEngine_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IRubyEngineProxyVtbl = 
{
    &IRubyEngine_ProxyInfo,
    &IID_IRubyEngine,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRubyEngine::CreateObject */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::CheckInterfaceIsSafety */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::CheckActiveXIsSafety */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::EnterScript */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::LeaveScript */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::OnScriptError */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::RegisterServiceProvider */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::UnregisterServiceProvider */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::GetSecurityLevel */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::ClearModuleObject */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::SetRubyize */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::GetRubyize */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::GetModule */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::DisconnectObjects */ ,
    (void *) (INT_PTR) -1 /* IRubyEngine::DefineGlobalObject */
};

const CInterfaceStubVtbl _IRubyEngineStubVtbl =
{
    &IID_IRubyEngine,
    &IRubyEngine_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRubyWrapper, ver. 0.0,
   GUID={0x66D56EE1,0x0249,0x11D4,{0x8E,0xA4,0x00,0x00,0xF4,0x5A,0x3C,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IRubyWrapper_FormatStringOffsetTable[] =
    {
    522,
    564,
    606,
    654,
    720,
    762,
    846,
    888,
    930,
    966,
    1002
    };

static const MIDL_STUBLESS_PROXY_INFO IRubyWrapper_ProxyInfo =
    {
    &Object_StubDesc,
    RScript__MIDL_ProcFormatString.Format,
    &IRubyWrapper_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRubyWrapper_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    RScript__MIDL_ProcFormatString.Format,
    &IRubyWrapper_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IRubyWrapperProxyVtbl = 
{
    &IRubyWrapper_ProxyInfo,
    &IID_IRubyWrapper,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::rb_intern */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::rb_module_new */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::SearchMethod */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::rb_invoke */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::SearchClass */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::rb_funcall_with_string2 */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::RegisterObject */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::UnregisterObject */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::Disconnect */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::DefineGlobalObject */ ,
    (void *) (INT_PTR) -1 /* IRubyWrapper::DefineConstant */
};

const CInterfaceStubVtbl _IRubyWrapperStubVtbl =
{
    &IID_IRubyWrapper,
    &IRubyWrapper_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    RScript__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _RScript_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IRubyWrapperProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRubyEngineProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _RScript_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IRubyWrapperStubVtbl,
    ( CInterfaceStubVtbl *) &_IRubyEngineStubVtbl,
    0
};

PCInterfaceName const _RScript_InterfaceNamesList[] = 
{
    "IRubyWrapper",
    "IRubyEngine",
    0
};


#define _RScript_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _RScript, pIID, n)

int __stdcall _RScript_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _RScript, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _RScript, 2, *pIndex )
    
}

const ExtendedProxyFileInfo RScript_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _RScript_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _RScript_StubVtblList,
    (const PCInterfaceName * ) & _RScript_InterfaceNamesList,
    0, /* no delegation */
    & _RScript_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

