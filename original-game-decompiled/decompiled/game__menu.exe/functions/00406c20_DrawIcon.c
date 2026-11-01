
/* ==== USER32.DLL::DrawIcon @ 00406c20 ==== 
 * signature: BOOL __stdcall DrawIcon(HDC hDC, int X, int Y, HICON hIcon)
 * body: 00406c20-00406c25
 * thunk to: USER32.DLL::DrawIcon
 */

BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}


