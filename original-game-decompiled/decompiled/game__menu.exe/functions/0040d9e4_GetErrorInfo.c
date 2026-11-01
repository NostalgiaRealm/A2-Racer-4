
/* ==== OLEAUT32.DLL::GetErrorInfo @ 0040d9e4 ==== 
 * signature: HRESULT __stdcall GetErrorInfo(ULONG dwReserved, IErrorInfo * * pperrinfo)
 * body: 0040d9e4-0040d9e9
 * thunk to: OLEAUT32.DLL::GetErrorInfo
 */

HRESULT __stdcall GetErrorInfo(ULONG dwReserved,IErrorInfo **pperrinfo)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = GetErrorInfo(dwReserved,pperrinfo);
  return HVar1;
}


