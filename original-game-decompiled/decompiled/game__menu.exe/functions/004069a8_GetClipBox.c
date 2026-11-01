
/* ==== GDI32.DLL::GetClipBox @ 004069a8 ==== 
 * signature: int __stdcall GetClipBox(HDC hdc, LPRECT lprect)
 * body: 004069a8-004069ad
 * thunk to: GDI32.DLL::GetClipBox
 */

int __stdcall GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}


