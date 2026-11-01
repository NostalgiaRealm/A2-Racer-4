
/* ==== GDI32.DLL::IntersectClipRect @ 00406a48 ==== 
 * signature: int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 00406a48-00406a4d
 * thunk to: GDI32.DLL::IntersectClipRect
 */

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


