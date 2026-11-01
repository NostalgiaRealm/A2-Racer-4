
/* ==== USER32.DLL::EnumThreadWindows @ 004065b8 ==== 
 * signature: BOOL __stdcall EnumThreadWindows(DWORD dwThreadId, WNDENUMPROC lpfn, LPARAM lParam)
 * body: 004065b8-004065bd
 * thunk to: USER32.DLL::EnumThreadWindows
 */

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}


