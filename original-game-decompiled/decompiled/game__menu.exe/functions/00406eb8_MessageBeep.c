
/* ==== USER32.DLL::MessageBeep @ 00406eb8 ==== 
 * signature: BOOL __stdcall MessageBeep(UINT uType)
 * body: 00406eb8-00406ebd
 * thunk to: USER32.DLL::MessageBeep
 */

BOOL __stdcall MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}


