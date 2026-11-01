
/* ==== OLE32.DLL::CoCreateInstance @ 0040d9b4 ==== 
 * signature: HRESULT __stdcall CoCreateInstance(IID * rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, IID * riid, LPVOID * ppv)
 * body: 0040d9b4-0040d9b9
 * thunk to: OLE32.DLL::CoCreateInstance
 */

HRESULT __stdcall
CoCreateInstance(IID *rclsid,LPUNKNOWN pUnkOuter,DWORD dwClsContext,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);
  return HVar1;
}


