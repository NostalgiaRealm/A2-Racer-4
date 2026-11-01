
/* ==== VERSION.DLL::GetFileVersionInfoSizeA @ 004068b0 ==== 
 * signature: DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
 * body: 004068b0-004068b5
 * thunk to: VERSION.DLL::GetFileVersionInfoSizeA
 */

DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


