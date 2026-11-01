
/* ==== GDI32.DLL::CreateBitmap @ 004068e8 ==== 
 * signature: HBITMAP __stdcall CreateBitmap(int nWidth, int nHeight, UINT nPlanes, UINT nBitCount, void * lpBits)
 * body: 004068e8-004068ed
 * thunk to: GDI32.DLL::CreateBitmap
 */

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}


