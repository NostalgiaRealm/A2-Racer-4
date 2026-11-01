
/* ==== KERNEL32.DLL::TlsSetValue @ 100154ba ==== 
 * signature: BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
 * body: 100154ba-100154bf
 * thunk to: KERNEL32.DLL::TlsSetValue
 */

BOOL TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


