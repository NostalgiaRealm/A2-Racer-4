
/* ==== TScrollingWinControl.vmt_098 @ 00445544 ==== 
 * signature: undefined __register TScrollingWinControl.vmt_098(int * param_1)
 * body: 00445544-0044556e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollingWinControl_vmt_098(int *param_1)

{
  TWinControl_vmt_098(param_1);
  if (PTR_DAT_004aba14[9] == '\0') {
    FUN_004349e0(param_1);
    FUN_00420da4();
  }
  FUN_00445748((int)param_1);
  return;
}


