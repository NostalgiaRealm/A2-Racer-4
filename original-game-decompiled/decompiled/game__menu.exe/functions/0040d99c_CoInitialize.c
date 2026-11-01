
/* ==== OLE32.DLL::CoInitialize @ 0040d99c ==== 
 * signature: HRESULT __stdcall CoInitialize(LPVOID pvReserved)
 * body: 0040d99c-0040d9a1
 * thunk to: OLE32.DLL::CoInitialize
 */

HRESULT __stdcall CoInitialize(LPVOID pvReserved)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoInitialize(pvReserved);
  return HVar1;
}


