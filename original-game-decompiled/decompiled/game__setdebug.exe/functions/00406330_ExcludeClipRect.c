
/* ==== GDI32.DLL::ExcludeClipRect @ 00406330 ==== 
 * signature: int __stdcall ExcludeClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 00406330-00406335
 * thunk to: GDI32.DLL::ExcludeClipRect
 */

int __stdcall ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


