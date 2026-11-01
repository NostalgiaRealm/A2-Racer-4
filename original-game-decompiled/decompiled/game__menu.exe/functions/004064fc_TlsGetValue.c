
/* ==== KERNEL32.DLL::TlsGetValue @ 004064fc ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 004064fc-00406501
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


