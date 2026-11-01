
/* ==== GDI32.DLL::GetClipBox @ 00406348 ==== 
 * signature: int __stdcall GetClipBox(HDC hdc, LPRECT lprect)
 * body: 00406348-0040634d
 * thunk to: GDI32.DLL::GetClipBox
 */

int __stdcall GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}


