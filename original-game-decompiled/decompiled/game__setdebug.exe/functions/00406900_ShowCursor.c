
/* ==== USER32.DLL::ShowCursor @ 00406900 ==== 
 * signature: int __stdcall ShowCursor(BOOL bShow)
 * body: 00406900-00406905
 * thunk to: USER32.DLL::ShowCursor
 */

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}


