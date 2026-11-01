
/* ==== KERNEL32.DLL::TlsSetValue @ 00405f4c ==== 
 * signature: BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
 * body: 00405f4c-00405f51
 * thunk to: KERNEL32.DLL::TlsSetValue
 */

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


