
/* ==== KERNEL32.DLL::SetHandleCount @ 1001548a ==== 
 * signature: UINT __stdcall SetHandleCount(UINT uNumber)
 * body: 1001548a-1001548f
 * thunk to: KERNEL32.DLL::SetHandleCount
 */

UINT SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001548a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}


