
/* ==== USER32.DLL::GetIconInfo @ 00406648 ==== 
 * signature: BOOL __stdcall GetIconInfo(HICON hIcon, PICONINFO piconinfo)
 * body: 00406648-0040664d
 * thunk to: USER32.DLL::GetIconInfo
 */

BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetIconInfo(hIcon,piconinfo);
  return BVar1;
}


