
/* ==== TScrollingWinControl.dyn_0114 @ 00445b54 ==== 
 * signature: undefined __register TScrollingWinControl.dyn_0114(int * param_1, int * param_2)
 * body: 00445b54-00445b77
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TScrollingWinControl_dyn_0114(int *param_1,int *param_2)

{
  if ((param_2[2] == 0) && (*(char *)(param_1[0x7c] + 0x1c) != '\0')) {
    FUN_00444d84(param_1[0x7c],(int)param_2);
    return;
  }
  TWinControl_dyn_0114(param_1,param_2);
  return;
}


