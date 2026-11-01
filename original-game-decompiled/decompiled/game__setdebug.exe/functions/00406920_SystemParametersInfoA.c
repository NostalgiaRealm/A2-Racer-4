
/* ==== USER32.DLL::SystemParametersInfoA @ 00406920 ==== 
 * signature: BOOL __stdcall SystemParametersInfoA(UINT uiAction, UINT uiParam, PVOID pvParam, UINT fWinIni)
 * body: 00406920-00406925
 * thunk to: USER32.DLL::SystemParametersInfoA
 */

BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


