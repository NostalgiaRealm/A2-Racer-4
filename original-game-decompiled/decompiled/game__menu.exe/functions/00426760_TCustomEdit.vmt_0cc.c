
/* ==== TCustomEdit.vmt_0cc @ 00426760 ==== 
 * signature: undefined __register TCustomEdit.vmt_0cc(int * param_1)
 * body: 00426760-00426776
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_0cc(int *param_1)

{
  HWND hWnd;
  code *lpString;
  
  lpString = FUN_00426778;
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowTextA(hWnd,(LPCSTR)lpString);
  return;
}


