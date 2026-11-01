
/* ==== KERNEL32.DLL::TlsGetValue @ 100154d2 ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 100154d2-100154d7
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


