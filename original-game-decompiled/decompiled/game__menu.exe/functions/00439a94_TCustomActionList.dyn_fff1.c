
/* ==== TCustomActionList.dyn_fff1 @ 00439a94 ==== 
 * signature: undefined TCustomActionList.dyn_fff1(void)
 * body: 00439a94-00439ab0
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

uint TCustomActionList_dyn_fff1(int param_1,undefined4 param_2,uint param_3)

{
  uint uStack_8;
  
  uStack_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_2,&uStack_8);
  }
  return uStack_8 & 0xff;
}


