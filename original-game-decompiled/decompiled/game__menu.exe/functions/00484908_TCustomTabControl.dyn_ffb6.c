
/* ==== TCustomTabControl.dyn_ffb6 @ 00484908 ==== 
 * signature: undefined TCustomTabControl.dyn_ffb6(void)
 * body: 00484908-0048492f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

uint TCustomTabControl_dyn_ffb6(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_8;
  
  uStack_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x22a) != 0) {
    (**(code **)(param_1 + 0x228))(*(undefined4 *)(param_1 + 0x22c),param_1,&uStack_8);
  }
  return uStack_8 & 0xff;
}


