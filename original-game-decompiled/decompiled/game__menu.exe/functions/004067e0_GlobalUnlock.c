
/* ==== KERNEL32.DLL::GlobalUnlock @ 004067e0 ==== 
 * signature: BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * body: 004067e0-004067e5
 * thunk to: KERNEL32.DLL::GlobalUnlock
 */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


