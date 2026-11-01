
/* ==== USER32.DLL::EqualRect @ 00406c88 ==== 
 * signature: BOOL __stdcall EqualRect(RECT * lprc1, RECT * lprc2)
 * body: 00406c88-00406c8d
 * thunk to: USER32.DLL::EqualRect
 */

BOOL __stdcall EqualRect(RECT *lprc1,RECT *lprc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EqualRect(lprc1,lprc2);
  return BVar1;
}


