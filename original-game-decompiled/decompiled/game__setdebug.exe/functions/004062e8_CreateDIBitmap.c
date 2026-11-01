
/* ==== GDI32.DLL::CreateDIBitmap @ 004062e8 ==== 
 * signature: HBITMAP __stdcall CreateDIBitmap(HDC hdc, BITMAPINFOHEADER * pbmih, DWORD flInit, void * pjBits, BITMAPINFO * pbmi, UINT iUsage)
 * body: 004062e8-004062ed
 * thunk to: GDI32.DLL::CreateDIBitmap
 */

HBITMAP __stdcall
CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,
              UINT iUsage)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return pHVar1;
}


