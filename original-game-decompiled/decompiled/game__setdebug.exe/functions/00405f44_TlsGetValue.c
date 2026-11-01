
/* ==== KERNEL32.DLL::TlsGetValue @ 00405f44 ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 00405f44-00405f49
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


