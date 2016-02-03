/*
 *  Copyright(c) 2000 arton
 *
 *  You may distribute under the terms of either the GNU General Public
 *  License
 *
 *  $Date: 2006-11-15 12:49:36 +0900 (Ê∞¥, 15 11 2006) $
 */
#ifndef __RUBYWRAPPER_H_
#define __RUBYWRAPPER_H_

#include "resource.h"       // ÉÅÉCÉì ÉVÉìÉ{Éã

#include "giplip.h"
/////////////////////////////////////////////////////////////////////////////
// CRubyWrapper
class CScrError;
struct SInvokeParam;
struct STypeConvParam;
struct oledata;

struct OlePair
{
	OlePair() : pole(NULL), module(0) {}
	OlePair(oledata* p, VALUE m) : pole(p), module(m) {}
	OlePair(const OlePair& r) : pole(r.pole), module(r.module) {}
	struct oledata* pole;
	VALUE  module;
};

typedef std::list<OlePair> OleList;
typedef std::list<OlePair>::iterator OleListIter;

class ATL_NO_VTABLE CRubyWrapper : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRubyWrapper, &CLSID_RubyWrapper>,
	public IRubyWrapper
{
public:
	CRubyWrapper() :
	  m_uiQuitTimer(0),
	  m_pCurrentEngine(NULL),
	  m_fTracing(false)
	{
	}

	static _ATL_REGMAP_ENTRY RegEntries[];
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		return _Module.UpdateRegistryFromResourceS(IDR_RUBYWRAPPER, bRegister, RegEntries);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRubyWrapper)
	COM_INTERFACE_ENTRY(IRubyWrapper)
END_COM_MAP()

	HRESULT FinalConstruct();
	void FinalRelease();

	// C++ object function
	void Globalize();
	void Unglobalize();
	static IRubyWrapper* GetWrapper();
	static CRubyWrapper* GetCWrapper();
	bool ReleaseOle(oledata*);
	void AddOle(VALUE, oledata*);
	inline UINT GetTimerID() const { return m_uiQuitTimer; }
	inline IRubyEngine* GetCurrentEngine() { return m_pCurrentEngine; }

	inline void SetHandle(HANDLE h) { m_hThread = h; }
	inline HANDLE GetHandle() const { return m_hThread; }

        static ID s_idInstanceEval;
        static ID s_idModuleEval;

// IRubyWrapper
public:
        HRESULT STDMETHODCALLTYPE rb_intern( 
            /* [string][in] */ unsigned char *name,
            /* [out] */ unsigned __int3264 *pid);
        
        HRESULT STDMETHODCALLTYPE rb_module_new( 
            /* [in] */ unsigned __int3264 parent,
            /* [out] */ unsigned __int3264 *p);
        
        HRESULT STDMETHODCALLTYPE SearchMethod( 
            /* [in] */ unsigned __int3264 val,
            /* [string][in] */ unsigned char *pName,
            /* [out] */ DISPID *pDispID);
        
        HRESULT STDMETHODCALLTYPE rb_invoke( 
            /* [in] */ IRubyEngine *pengine,
            /* [in] */ unsigned __int3264 Module,
            /* [in] */ unsigned __int3264 func,
            /* [in] */ DISPPARAMS *pDispParams,
            /* [unique][out][in] */ VARIANT *pVarResult,
            /* [out] */ IActiveScriptError **ppError);
        
        HRESULT STDMETHODCALLTYPE SearchClass( 
            /* [string][in] */ unsigned char *pName,
            /* [out] */ unsigned __int3264 *pval);
        
        HRESULT STDMETHODCALLTYPE rb_funcall_with_string2( 
            /* [in] */ IRubyEngine *pengine,
            /* [in] */ unsigned __int3264 val,
            /* [in] */ unsigned __int3264 id,
            /* [in] */ long line,
            /* [in] */ long cb,
            /* [size_is][in] */ unsigned char *p,
            /* [in] */ boolean TraceRequired,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ IActiveScriptError **ppError);
        
        HRESULT STDMETHODCALLTYPE RegisterObject( 
            /* [string][in] */ unsigned char *pName,
            /* [in] */ unsigned __int3264 Module);
        
        HRESULT STDMETHODCALLTYPE UnregisterObject( 
            /* [string][in] */ unsigned char *pName,
            /* [in] */ unsigned __int3264 Module);
        
        HRESULT STDMETHODCALLTYPE Disconnect( 
            /* [in] */ IRubyEngine *pengin);
        
        HRESULT STDMETHODCALLTYPE DefineGlobalObject( 
            /* [in] */ IRubyEngine *pengine);
        
        HRESULT STDMETHODCALLTYPE DefineConstant( 
            /* [string][in] */ unsigned char *pName,
            /* [in] */ unsigned __int3264 Module,
            /* [in] */ VARIANT *pVar,
            /* [in] */ IRubyEngine *pengine);
private:
	UINT m_uiQuitTimer;
	VALUE m_valList;
        ID m_idEach;
        ID m_idEachLine;
	ID m_idSize;
	ID m_idMethods;
	ID m_idDelete;
	OleList m_listOle;
	static CRubyWrapper* s_pWrapper;
	static GIP(IRubyWrapper) s_gip;
	static VALUE CallRuby(VALUE val);
	static IActiveScriptError* FetchErrorInfo(LPCSTR);
	HANDLE m_hThread;
	IRubyEngine* m_pCurrentEngine;
	//
	void GetValue(IRubyEngine *pengine, VALUE, VARIANT*, IActiveScriptError**);
	void GetEnum(IRubyEngine *pengine, VALUE, VARIANT*, IActiveScriptError**);
	static VALUE add_item(VALUE item, VALUE ary);
	static VALUE add_lineitem(VALUE i, VALUE ary, int argc, VALUE *argv);
	static VALUE InvokeRuby(VALUE pParam);
	static VALUE val2var(VALUE pParam);
	//
	bool m_fTracing;
};

#endif //__RUBYWRAPPER_H_
