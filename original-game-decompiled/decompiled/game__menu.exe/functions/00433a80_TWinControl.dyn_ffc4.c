
/* ==== TWinControl.dyn_ffc4 @ 00433a80 ==== 
 * signature: undefined TWinControl.dyn_ffc4(void)
 * body: 00433a80-00433ac8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined1 TWinControl_dyn_ffc4(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  auStack_10[0] = 0;
  if (*(short *)(param_1 + 0x1da) != 0) {
    (**(code **)(param_1 + 0x1d8))
              (*(undefined4 *)(param_1 + 0x1dc),param_1,param_2,auStack_10,&uStack_18);
  }
  return auStack_10[0];
}


