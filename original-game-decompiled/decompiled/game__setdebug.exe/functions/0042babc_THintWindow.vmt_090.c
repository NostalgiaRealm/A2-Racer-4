
/* ==== THintWindow.vmt_090 @ 0042babc ==== 
 * signature: undefined THintWindow.vmt_090(void)
 * body: 0042babc-0042baf5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[1] = -0x7f800000;
  param_2[9] = param_2[9] | 0x800;
  if (DAT_00447740 != '\0') {
    param_2[2] = 0x80;
  }
  FUN_00427910(param_1,(uint *)(param_2 + 2));
  return;
}


