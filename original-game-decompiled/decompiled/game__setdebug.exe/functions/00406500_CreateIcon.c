
/* ==== USER32.DLL::CreateIcon @ 00406500 ==== 
 * signature: HICON __stdcall CreateIcon(HINSTANCE hInstance, int nWidth, int nHeight, BYTE cPlanes, BYTE cBitsPixel, BYTE * lpbANDbits, BYTE * lpbXORbits)
 * body: 00406500-00406505
 * thunk to: USER32.DLL::CreateIcon
 */

HICON __stdcall
CreateIcon(HINSTANCE hInstance,int nWidth,int nHeight,BYTE cPlanes,BYTE cBitsPixel,BYTE *lpbANDbits,
          BYTE *lpbXORbits)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateIcon(hInstance,nWidth,nHeight,cPlanes,cBitsPixel,lpbANDbits,lpbXORbits);
  return pHVar1;
}


