
/* ==== GDI32.DLL::GetBitmapBits @ 00406338 ==== 
 * signature: LONG __stdcall GetBitmapBits(HBITMAP hbit, LONG cb, LPVOID lpvBits)
 * body: 00406338-0040633d
 * thunk to: GDI32.DLL::GetBitmapBits
 */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}


