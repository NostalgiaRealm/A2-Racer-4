
/* ==== TCustomActionList.dyn_fff4 @ 0042f884 ==== 
 * signature: undefined TCustomActionList.dyn_fff4(void)
 * body: 0042f884-0042f8a0
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

uint TCustomActionList_dyn_fff4(int param_1,undefined4 param_2,uint param_3)

{
  uint uStack_8;
  
  uStack_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2,&uStack_8);
  }
  return uStack_8 & 0xff;
}


