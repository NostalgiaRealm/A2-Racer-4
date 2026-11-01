
/* ==== KERNEL32.DLL::LockResource @ 00406228 ==== 
 * signature: LPVOID __stdcall LockResource(HGLOBAL hResData)
 * body: 00406228-0040622d
 * thunk to: KERNEL32.DLL::LockResource
 */

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}


