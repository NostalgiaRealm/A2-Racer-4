
/* ==== USER32.DLL::IsDialogMessageA @ 00406770 ==== 
 * signature: BOOL __stdcall IsDialogMessageA(HWND hDlg, LPMSG lpMsg)
 * body: 00406770-00406775
 * thunk to: USER32.DLL::IsDialogMessageA
 */

BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}


