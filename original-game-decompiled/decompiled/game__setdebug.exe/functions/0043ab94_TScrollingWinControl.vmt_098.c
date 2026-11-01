
/* ==== TScrollingWinControl.vmt_098 @ 0043ab94 ==== 
 * signature: undefined __register TScrollingWinControl.vmt_098(int * param_1)
 * body: 0043ab94-0043abbe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollingWinControl_vmt_098(int *param_1)

{
  TWinControl_vmt_098(param_1);
  if (PTR_DAT_00446da0[9] == '\0') {
    FUN_0042a8b4(param_1);
    FUN_0041de94();
  }
  FUN_0043ad98((int)param_1);
  return;
}


