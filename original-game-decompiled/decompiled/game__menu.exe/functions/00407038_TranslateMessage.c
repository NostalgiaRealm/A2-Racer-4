
/* ==== USER32.DLL::TranslateMessage @ 00407038 ==== 
 * signature: BOOL __stdcall TranslateMessage(MSG * lpMsg)
 * body: 00407038-0040703d
 * thunk to: USER32.DLL::TranslateMessage
 */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


