
/* ==== TBasicAction.vmt_044 @ 00414334 ==== 
 * signature: undefined4 __register TBasicAction.vmt_044(int param_1)
 * body: 00414334-0041434d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TBasicAction_vmt_044(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x3a) != 0) {
    uVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


