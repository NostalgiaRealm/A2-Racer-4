
/* ==== USER32.DLL::IsDialogMessageA @ 00406e40 ==== 
 * signature: BOOL __stdcall IsDialogMessageA(HWND hDlg, LPMSG lpMsg)
 * body: 00406e40-00406e45
 * thunk to: USER32.DLL::IsDialogMessageA
 */

BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}


