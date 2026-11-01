
/* ==== GDI32.DLL::GetDIBits @ 004069c8 ==== 
 * signature: int __stdcall GetDIBits(HDC hdc, HBITMAP hbm, UINT start, UINT cLines, LPVOID lpvBits, LPBITMAPINFO lpbmi, UINT usage)
 * body: 004069c8-004069cd
 * thunk to: GDI32.DLL::GetDIBits
 */

int __stdcall
GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDIBits(hdc,hbm,start,cLines,lpvBits,lpbmi,usage);
  return iVar1;
}


