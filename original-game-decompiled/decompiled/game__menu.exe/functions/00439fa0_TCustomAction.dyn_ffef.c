
/* ==== TCustomAction.dyn_ffef @ 00439fa0 ==== 
 * signature: undefined TCustomAction.dyn_ffef(void)
 * body: 00439fa0-00439fbc
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

uint TCustomAction_dyn_ffef(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_8;
  
  uStack_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x72) != 0) {
    (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x74),param_2,&uStack_8);
  }
  return uStack_8 & 0xff;
}


