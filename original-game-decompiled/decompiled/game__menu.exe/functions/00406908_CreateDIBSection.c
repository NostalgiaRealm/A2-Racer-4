
/* ==== GDI32.DLL::CreateDIBSection @ 00406908 ==== 
 * signature: HBITMAP __stdcall CreateDIBSection(HDC hdc, BITMAPINFO * lpbmi, UINT usage, void * * ppvBits, HANDLE hSection, DWORD offset)
 * body: 00406908-0040690d
 * thunk to: GDI32.DLL::CreateDIBSection
 */

HBITMAP __stdcall
CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}


