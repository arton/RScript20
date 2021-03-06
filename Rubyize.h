/*
 *  Copyright(c) 2009 arton
 *
 *  You may distribute under the terms of either the GNU General Public
 *  License
 *
 *  $Date$
 */

#ifndef __RUBYIZE_H_
#define __RUBYIZE_H_

#include "resource.h"
#ifndef __IRubyWrapper_INTERFACE_DEFINED__
#include "GlobalRubyScript.h"
#else
#include "rubyscript.h"
#endif

/////////////////////////////////////////////////////////////////////////////
// CRubyize
class ATL_NO_VTABLE CRubyize : 
	public CComObjectRootEx<CComSingleThreadModel>,
#ifndef __IRubyWrapper_INTERFACE_DEFINED__
	public CComCoClass<CRubyize, &CLSID_SimpleRubyize>,
#else
	public CComCoClass<CRubyize, &CLSID_Rubyize>,
#endif
	public ISupportErrorInfo,
        public IActiveScriptSite,
#ifndef __IRubyWrapper_INTERFACE_DEFINED__
	public IDispatchImpl<IRubyize, &IID_IRubyize, &LIBID_GRSCRIPTLib>
#else
	public IDispatchImpl<IRubyize, &IID_IRubyize, &LIBID_RSCRIPTLib, 2, 0>
#endif
{
public:
	CRubyize()
	{
	}

	static _ATL_REGMAP_ENTRY RegEntries[];
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		return _Module.UpdateRegistryFromResourceS(IDR_RUBYIZE, bRegister, RegEntries);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRubyize)
	COM_INTERFACE_ENTRY(IRubyize)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
        COM_INTERFACE_ENTRY(IActiveScriptSite)
END_COM_MAP()

	HRESULT FinalConstruct();

	void FinalRelease();

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IActiveScriptSite
    HRESULT STDMETHODCALLTYPE GetLCID( 
            /* [out] */ LCID __RPC_FAR *plcid);
        
    HRESULT STDMETHODCALLTYPE GetItemInfo( 
            /* [in] */ LPCOLESTR pstrName,
            /* [in] */ DWORD dwReturnMask,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppiunkItem,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppti);
        
    HRESULT STDMETHODCALLTYPE GetDocVersionString( 
            /* [out] */ BSTR __RPC_FAR *pbstrVersion);
        
    HRESULT STDMETHODCALLTYPE OnScriptTerminate( 
            /* [in] */ const VARIANT __RPC_FAR *pvarResult,
            /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo);
        
    HRESULT STDMETHODCALLTYPE OnStateChange( 
            /* [in] */ SCRIPTSTATE ssScriptState);
        
    HRESULT STDMETHODCALLTYPE OnScriptError( 
            /* [in] */ IActiveScriptError __RPC_FAR *pscripterror);
        
    HRESULT STDMETHODCALLTYPE OnEnterScript( void);
        
    HRESULT STDMETHODCALLTYPE OnLeaveScript( void);

// IRubyize
public:
    HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR __RPC_FAR *pVersion);

    HRESULT STDMETHODCALLTYPE get_RubyVersion( 
            /* [retval][out] */ BSTR __RPC_FAR *pVersion);

    HRESULT STDMETHODCALLTYPE rubyize( 
            /* [in] */ VARIANT val,
            /* [retval][out] */ VARIANT __RPC_FAR *pObj);
        
    HRESULT STDMETHODCALLTYPE erubyize( 
            /* [in] */ BSTR script,
            /* [retval][out] */ VARIANT __RPC_FAR *pObj);

private:
#ifndef __IRubyWrapper_INTERFACE_DEFINED__
	CComObject<CGlobalRubyScript>* m_pRubyScript;
#else
    CComObject<CRubyScript>* m_pRubyScript;
#endif
    HRESULT Call(LPCOLESTR method, int cargs, VARIANT* args, VARIANT* pResult);
};

#endif //__RUBYIZE_H_
