
/* ==== KERNEL32.DLL::GlobalUnlock @ 00406200 ==== 
 * signature: BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * body: 00406200-00406205
 * thunk to: KERNEL32.DLL::GlobalUnlock
 */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


