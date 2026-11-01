
/* ==== VERSION.DLL::GetFileVersionInfoA @ 004068a8 ==== 
 * signature: BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
 * body: 004068a8-004068ad
 * thunk to: VERSION.DLL::GetFileVersionInfoA
 */

BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}


