
/* ==== USER32.DLL::EnumThreadWindows @ 00406c78 ==== 
 * signature: BOOL __stdcall EnumThreadWindows(DWORD dwThreadId, WNDENUMPROC lpfn, LPARAM lParam)
 * body: 00406c78-00406c7d
 * thunk to: USER32.DLL::EnumThreadWindows
 */

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}


