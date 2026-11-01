
/* ==== KERNEL32.DLL::TlsSetValue @ 00406504 ==== 
 * signature: BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
 * body: 00406504-00406509
 * thunk to: KERNEL32.DLL::TlsSetValue
 */

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


