
/* ==== GDI32.DLL::IntersectClipRect @ 004063e0 ==== 
 * signature: int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 004063e0-004063e5
 * thunk to: GDI32.DLL::IntersectClipRect
 */

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


