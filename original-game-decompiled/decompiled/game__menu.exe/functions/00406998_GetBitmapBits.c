
/* ==== GDI32.DLL::GetBitmapBits @ 00406998 ==== 
 * signature: LONG __stdcall GetBitmapBits(HBITMAP hbit, LONG cb, LPVOID lpvBits)
 * body: 00406998-0040699d
 * thunk to: GDI32.DLL::GetBitmapBits
 */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}


