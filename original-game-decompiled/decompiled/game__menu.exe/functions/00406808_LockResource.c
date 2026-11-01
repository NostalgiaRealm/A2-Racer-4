
/* ==== KERNEL32.DLL::LockResource @ 00406808 ==== 
 * signature: LPVOID __stdcall LockResource(HGLOBAL hResData)
 * body: 00406808-0040680d
 * thunk to: KERNEL32.DLL::LockResource
 */

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}


