
/* ==== TfrmWinFinal.FormCreate @ 004a4594 ==== 
 * signature: undefined TfrmWinFinal.FormCreate(void)
 * body: 004a4594-004a45b3
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinFinal_FormCreate(int param_1)

{
  TGameMenuScreen_FormCreate(param_1);
  *(int *)(param_1 + 0x2ec) = param_1;
  *(code **)(param_1 + 0x2e8) = TfrmWinFinal_FormShowScreen;
  return;
}


