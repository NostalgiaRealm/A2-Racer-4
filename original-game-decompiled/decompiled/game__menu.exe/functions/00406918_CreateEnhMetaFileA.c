
/* ==== GDI32.DLL::CreateEnhMetaFileA @ 00406918 ==== 
 * signature: HDC __stdcall CreateEnhMetaFileA(HDC hdc, LPCSTR lpFilename, RECT * lprc, LPCSTR lpDesc)
 * body: 00406918-0040691d
 * thunk to: GDI32.DLL::CreateEnhMetaFileA
 */

HDC __stdcall CreateEnhMetaFileA(HDC hdc,LPCSTR lpFilename,RECT *lprc,LPCSTR lpDesc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateEnhMetaFileA(hdc,lpFilename,lprc,lpDesc);
  return pHVar1;
}


