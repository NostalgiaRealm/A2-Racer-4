
/* ==== TfrmQuickRace.btnCloseClick @ 0049cbf8 ==== 
 * signature: undefined TfrmQuickRace.btnCloseClick(void)
 * body: 0049cbf8-0049cc1a
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_btnCloseClick(int param_1,undefined4 param_2)

{
  TTimer_set_Enabled(*(int *)(param_1 + 0x344),'\0');
  TGameMenuScreen_btnCloseClick(param_1,param_2);
  return;
}


