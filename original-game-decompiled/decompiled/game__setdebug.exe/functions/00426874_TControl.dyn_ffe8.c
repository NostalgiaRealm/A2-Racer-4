
/* ==== TControl.dyn_ffe8 @ 00426874 ==== 
 * signature: undefined TControl.dyn_ffe8(void)
 * body: 00426874-004268a5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffe8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = *param_2;
  uStack_10 = param_2[1];
  if (*(short *)(param_1 + 0x11a) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined4 *)(param_1 + 0x11c),param_1,&uStack_14,param_3);
  }
  return;
}


