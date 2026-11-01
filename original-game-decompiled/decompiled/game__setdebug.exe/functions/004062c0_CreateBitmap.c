
/* ==== GDI32.DLL::CreateBitmap @ 004062c0 ==== 
 * signature: HBITMAP __stdcall CreateBitmap(int nWidth, int nHeight, UINT nPlanes, UINT nBitCount, void * lpBits)
 * body: 004062c0-004062c5
 * thunk to: GDI32.DLL::CreateBitmap
 */

HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return pHVar1;
}


