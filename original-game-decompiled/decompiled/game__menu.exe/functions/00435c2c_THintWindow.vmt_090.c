
/* ==== THintWindow.vmt_090 @ 00435c2c ==== 
 * signature: undefined THintWindow.vmt_090(void)
 * body: 00435c2c-00435c65
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[1] = -0x7f800000;
  param_2[9] = param_2[9] | 0x800;
  if (DAT_004ac750 != '\0') {
    param_2[2] = 0x80;
  }
  FUN_004318b0(param_1,(uint *)(param_2 + 2));
  return;
}


