
/* ==== KERNEL32.DLL::TlsAlloc @ 100154c0 ==== 
 * signature: DWORD __stdcall TlsAlloc(void)
 * body: 100154c0-100154c5
 * thunk to: KERNEL32.DLL::TlsAlloc
 */

DWORD TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}


