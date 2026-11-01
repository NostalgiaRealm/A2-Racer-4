
/* ==== GDI32.DLL::PatBlt @ 00406a70 ==== 
 * signature: BOOL __stdcall PatBlt(HDC hdc, int x, int y, int w, int h, DWORD rop)
 * body: 00406a70-00406a75
 * thunk to: GDI32.DLL::PatBlt
 */

BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}


