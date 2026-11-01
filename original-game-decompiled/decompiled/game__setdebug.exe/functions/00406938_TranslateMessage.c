
/* ==== USER32.DLL::TranslateMessage @ 00406938 ==== 
 * signature: BOOL __stdcall TranslateMessage(MSG * lpMsg)
 * body: 00406938-0040693d
 * thunk to: USER32.DLL::TranslateMessage
 */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


