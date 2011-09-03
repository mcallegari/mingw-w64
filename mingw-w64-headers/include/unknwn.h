/*** Autogenerated by WIDL 1.0 from ../../w64-git/mingw-w64-headers/include/unknwn.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#if !defined(COM_NO_WINDOWS_H) && !defined(__WINESRC__)
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __WIDL_UNKNWN_H
#define __WIDL_UNKNWN_H

/* Forward declarations */

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;
#endif

#ifndef __IClassFactory_FWD_DEFINED__
#define __IClassFactory_FWD_DEFINED__
typedef interface IClassFactory IClassFactory;
#endif

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __AsyncIUnknown_FWD_DEFINED__
#define __AsyncIUnknown_FWD_DEFINED__
typedef struct AsyncIUnknown AsyncIUnknown;
#endif
  extern RPC_IF_HANDLE __MIDL_itf_unknwn_0000_v0_0_c_ifspec;
  extern RPC_IF_HANDLE __MIDL_itf_unknwn_0000_v0_0_s_ifspec;

#if defined(__cplusplus) && !defined(CINTERFACE) && !defined(__IUnknown_INTERFACE_DEFINED__)
#define __IUnknown_INTERFACE_DEFINED__
  typedef IUnknown *LPUNKNOWN;
  EXTERN_C const IID IID_IUnknown;
  extern "C++" {
    struct IUnknown {
    public:
      BEGIN_INTERFACE
	virtual HRESULT WINAPI QueryInterface(REFIID riid,void **ppvObject) = 0;
	virtual ULONG WINAPI AddRef(void) = 0;
	virtual ULONG WINAPI Release(void) = 0;
	template<class Q> HRESULT WINAPI QueryInterface(Q **pp) { return QueryInterface(__uuidof(*pp),(void **)pp); }
      END_INTERFACE
    };
  }
  HRESULT WINAPI IUnknown_QueryInterface_Proxy(IUnknown *This,REFIID riid,void **ppvObject);
  void __RPC_STUB IUnknown_QueryInterface_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  ULONG WINAPI IUnknown_AddRef_Proxy(IUnknown *This);
  void __RPC_STUB IUnknown_AddRef_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  ULONG WINAPI IUnknown_Release_Proxy(IUnknown *This);
  void __RPC_STUB IUnknown_Release_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
__CRT_UUID_DECL(IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#else
/*****************************************************************************
 * IUnknown interface
 */
#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

typedef IUnknown *LPUNKNOWN;
DEFINE_GUID(IID_IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000000-0000-0000-c000-000000000046")
IUnknown
{
    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE QueryInterface(
        REFIID riid,
        void **ppvObject) = 0;

    virtual ULONG STDMETHODCALLTYPE AddRef(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Release(
        ) = 0;

    END_INTERFACE
};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUnknown* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUnknown* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUnknown* This);

    END_INTERFACE
} IUnknownVtbl;
interface IUnknown {
    CONST_VTBL IUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IUnknown_Release(This) (This)->lpVtbl->Release(This)
#endif

#endif

HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(
    IUnknown* This,
    REFIID riid,
    void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(
    IUnknown* This);
void __RPC_STUB IUnknown_AddRef_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(
    IUnknown* This);
void __RPC_STUB IUnknown_Release_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IUnknown_INTERFACE_DEFINED__ */

#endif
  extern RPC_IF_HANDLE __MIDL_itf_unknwn_0005_v0_0_c_ifspec;
  extern RPC_IF_HANDLE __MIDL_itf_unknwn_0005_v0_0_s_ifspec;
#ifndef __AsyncIUnknown_INTERFACE_DEFINED__
#define __AsyncIUnknown_INTERFACE_DEFINED__
  EXTERN_C const IID IID_AsyncIUnknown;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct AsyncIUnknown : public IUnknown {
  public:
    virtual HRESULT WINAPI Begin_QueryInterface(REFIID riid) = 0;
    virtual HRESULT WINAPI Finish_QueryInterface(void **ppvObject) = 0;
    virtual HRESULT WINAPI Begin_AddRef(void) = 0;
    virtual ULONG WINAPI Finish_AddRef(void) = 0;
    virtual HRESULT WINAPI Begin_Release(void) = 0;
    virtual ULONG WINAPI Finish_Release(void) = 0;
  };
#else
  typedef struct AsyncIUnknownVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(AsyncIUnknown *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(AsyncIUnknown *This);
      ULONG (WINAPI *Release)(AsyncIUnknown *This);
      HRESULT (WINAPI *Begin_QueryInterface)(AsyncIUnknown *This,REFIID riid);
      HRESULT (WINAPI *Finish_QueryInterface)(AsyncIUnknown *This,void **ppvObject);
      HRESULT (WINAPI *Begin_AddRef)(AsyncIUnknown *This);
      ULONG (WINAPI *Finish_AddRef)(AsyncIUnknown *This);
      HRESULT (WINAPI *Begin_Release)(AsyncIUnknown *This);
      ULONG (WINAPI *Finish_Release)(AsyncIUnknown *This);
    END_INTERFACE
  } AsyncIUnknownVtbl;
  struct AsyncIUnknown {
    CONST_VTBL struct AsyncIUnknownVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define AsyncIUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define AsyncIUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define AsyncIUnknown_Release(This) (This)->lpVtbl->Release(This)
#define AsyncIUnknown_Begin_QueryInterface(This,riid) (This)->lpVtbl->Begin_QueryInterface(This,riid)
#define AsyncIUnknown_Finish_QueryInterface(This,ppvObject) (This)->lpVtbl->Finish_QueryInterface(This,ppvObject)
#define AsyncIUnknown_Begin_AddRef(This) (This)->lpVtbl->Begin_AddRef(This)
#define AsyncIUnknown_Finish_AddRef(This) (This)->lpVtbl->Finish_AddRef(This)
#define AsyncIUnknown_Begin_Release(This) (This)->lpVtbl->Begin_Release(This)
#define AsyncIUnknown_Finish_Release(This) (This)->lpVtbl->Finish_Release(This)
#endif
#endif
  HRESULT WINAPI AsyncIUnknown_Begin_QueryInterface_Proxy(AsyncIUnknown *This,REFIID riid);
  void __RPC_STUB AsyncIUnknown_Begin_QueryInterface_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI AsyncIUnknown_Finish_QueryInterface_Proxy(AsyncIUnknown *This,void **ppvObject);
  void __RPC_STUB AsyncIUnknown_Finish_QueryInterface_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI AsyncIUnknown_Begin_AddRef_Proxy(AsyncIUnknown *This);
  void __RPC_STUB AsyncIUnknown_Begin_AddRef_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  ULONG WINAPI AsyncIUnknown_Finish_AddRef_Proxy(AsyncIUnknown *This);
  void __RPC_STUB AsyncIUnknown_Finish_AddRef_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI AsyncIUnknown_Begin_Release_Proxy(AsyncIUnknown *This);
  void __RPC_STUB AsyncIUnknown_Begin_Release_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  ULONG WINAPI AsyncIUnknown_Finish_Release_Proxy(AsyncIUnknown *This);
  void __RPC_STUB AsyncIUnknown_Finish_Release_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
#endif

/*****************************************************************************
 * IClassFactory interface
 */
#ifndef __IClassFactory_INTERFACE_DEFINED__
#define __IClassFactory_INTERFACE_DEFINED__

typedef IClassFactory *LPCLASSFACTORY;
DEFINE_GUID(IID_IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000001-0000-0000-c000-000000000046")
IClassFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE LockServer(
        WINBOOL fLock) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactory* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactory* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactory* This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactory* This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactory* This,
        WINBOOL fLock);

    END_INTERFACE
} IClassFactoryVtbl;
interface IClassFactory {
    CONST_VTBL IClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IClassFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IClassFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IClassFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IClassFactory methods ***/
#define IClassFactory_CreateInstance(This,pUnkOuter,riid,ppvObject) (This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject)
#define IClassFactory_LockServer(This,fLock) (This)->lpVtbl->LockServer(This,fLock)
#endif

#endif

HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IClassFactory_RemoteLockServer_Proxy(
    IClassFactory* This,
    WINBOOL fLock);
void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IClassFactory_CreateInstance_Proxy(
    IClassFactory* This,
    IUnknown *pUnkOuter,
    REFIID riid,
    void **ppvObject);
HRESULT __RPC_STUB IClassFactory_CreateInstance_Stub(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
HRESULT CALLBACK IClassFactory_LockServer_Proxy(
    IClassFactory* This,
    WINBOOL fLock);
HRESULT __RPC_STUB IClassFactory_LockServer_Stub(
    IClassFactory* This,
    WINBOOL fLock);

#endif  /* __IClassFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_UNKNWN_H */
