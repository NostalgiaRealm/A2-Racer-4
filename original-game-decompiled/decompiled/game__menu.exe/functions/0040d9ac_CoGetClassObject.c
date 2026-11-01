
/* ==== OLE32.DLL::CoGetClassObject @ 0040d9ac ==== 
 * signature: HRESULT __stdcall CoGetClassObject(IID * rclsid, DWORD dwClsContext, LPVOID pvReserved, IID * riid, LPVOID * ppv)
 * body: 0040d9ac-0040d9b1
 * thunk to: OLE32.DLL::CoGetClassObject
 */

HRESULT __stdcall
CoGetClassObject(IID *rclsid,DWORD dwClsContext,LPVOID pvReserved,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoGetClassObject(rclsid,dwClsContext,pvReserved,riid,ppv);
  return HVar1;
}


