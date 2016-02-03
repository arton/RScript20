/*
 *  Copyright(c) 2000 arton
 *
 *  You may distribute under the terms of either the GNU General Public
 *  License
 *
 *  $Date: 2006-11-03 04:23:11 +0900 ( 03 11 2006) $
 */


#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "RScript.h"
#include "RScript_i.c"

#include "RubyScript.h"
#include "RubyWrapper.h"

#include "dlldatax.h"
#include "Rubyize.h"

#ifdef _MERGE_PROXYSTUB
extern "C" HINSTANCE hProxyDll;
#endif

DEFINE_GUID(SID_GetCaller, 0x4717cc40, 0xbcb9, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);

CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
OBJECT_ENTRY(CLSID_Rubyize, CRubyize)
OBJECT_ENTRY(CLSID_RubyScript, CRubyScript)
OBJECT_ENTRY(CLSID_RubyWrapper, CRubyWrapper)
END_OBJECT_MAP()

#if defined(RUBY_2_1)
#define RSCRIPT_VERSION L"2.1"
#define CLSID_RUBYSCRIPT  L"{5FAA1692-10F7-4208-9E0B-92753C3F6D4C}"
#define CLSID_RUBYWRAPPER L"{8DA7117D-882E-4E29-889C-F31BED9D78CC}"
#define CLSID_RUBYIZE  L"{CB567E39-E753-4A60-A924-EE1C1538A971}"
#else
#if defined(RUBY_2_2)
#define RSCRIPT_VERSION L"2.2"
#define CLSID_RUBYSCRIPT  L"{456A3763-90A4-4F2A-BFF1-4B773C1056EC}"
#define CLSID_RUBYWRAPPER L"{FEB29CB6-DBE8-4A69-B29C-7642001829B7}"
#define CLSID_RUBYIZE  L"{0BCFF05A-C2BF-4CB2-A778-3428A8E85A21}"
#else
#define RSCRIPT_VERSION L"2.0"
#define CLSID_RUBYSCRIPT  L"{5C876DC5-499E-444D-8CBE-E4F7B4CF34D5}"
#define CLSID_RUBYWRAPPER L"{38DBE621-054C-4a2e-A993-2B05CECFCB71}"
#define CLSID_RUBYIZE  L"{275E45EA-C1BD-44A2-90CC-9F3ABFDFD213}"
#endif
#endif


_ATL_REGMAP_ENTRY CRubyize::RegEntries[] = {
	{ L"RSCRIPT_VERSION", RSCRIPT_VERSION },
	{ L"CLSID", CLSID_RUBYIZE },
	{ NULL, NULL }
};
_ATL_REGMAP_ENTRY CRubyScript::RegEntries[] = {
	{ L"RSCRIPT_VERSION", RSCRIPT_VERSION },
	{ L"CLSID", CLSID_RUBYSCRIPT },
	{ NULL, NULL }
};
_ATL_REGMAP_ENTRY CRubyWrapper::RegEntries[] = {
	{ L"RSCRIPT_VERSION", RSCRIPT_VERSION },
	{ L"CLSID", CLSID_RUBYWRAPPER },
	{ NULL, NULL }
};

/////////////////////////////////////////////////////////////////////////////

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    lpReserved;
#ifdef _MERGE_PROXYSTUB
    if (!PrxDllMain(hInstance, dwReason, lpReserved))
        return FALSE;
#endif
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        _Module.Init(ObjectMap, hInstance, &LIBID_RSCRIPTLib);
        DisableThreadLibraryCalls(hInstance);
    }
    else if (dwReason == DLL_PROCESS_DETACH)
        _Module.Term();
    return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////

STDAPI DllCanUnloadNow(void)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllCanUnloadNow() != S_OK)
        return S_FALSE;
#endif
	if (_Module.GetLockCount()==0)
	{
		return S_OK;
	}
    return S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllGetClassObject(rclsid, riid, ppv) == S_OK)
        return S_OK;
#endif
    return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////

STDAPI DllRegisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    HRESULT hRes = PrxDllRegisterServer();
    if (FAILED(hRes))
        return hRes;
#endif
    return _Module.RegisterServer(TRUE);
}

/////////////////////////////////////////////////////////////////////////////

STDAPI DllUnregisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    PrxDllUnregisterServer();
#endif
    return _Module.UnregisterServer(TRUE);
}


