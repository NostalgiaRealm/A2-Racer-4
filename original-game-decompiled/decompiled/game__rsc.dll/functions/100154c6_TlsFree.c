
/* ==== KERNEL32.DLL::TlsFree @ 100154c6 ==== 
 * signature: BOOL __stdcall TlsFree(DWORD dwTlsIndex)
 * body: 100154c6-100154cb
 * thunk to: KERNEL32.DLL::TlsFree
 */

BOOL TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}


