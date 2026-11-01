
/* ==== OLE32.DLL::CreateStreamOnHGlobal @ 0040d9d4 ==== 
 * signature: HRESULT __stdcall CreateStreamOnHGlobal(HGLOBAL hGlobal, BOOL fDeleteOnRelease, LPSTREAM * ppstm)
 * body: 0040d9d4-0040d9d9
 * thunk to: OLE32.DLL::CreateStreamOnHGlobal
 */

HRESULT __stdcall CreateStreamOnHGlobal(HGLOBAL hGlobal,BOOL fDeleteOnRelease,LPSTREAM *ppstm)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CreateStreamOnHGlobal(hGlobal,fDeleteOnRelease,ppstm);
  return HVar1;
}


