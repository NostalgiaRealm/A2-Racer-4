
/* ==== GDI32.DLL::ExtTextOutA @ 00406988 ==== 
 * signature: BOOL __stdcall ExtTextOutA(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCSTR lpString, UINT c, INT * lpDx)
 * body: 00406988-0040698d
 * thunk to: GDI32.DLL::ExtTextOutA
 */

BOOL __stdcall
ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}


