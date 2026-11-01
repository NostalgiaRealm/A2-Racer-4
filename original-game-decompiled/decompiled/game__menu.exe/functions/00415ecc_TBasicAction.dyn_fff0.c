
/* ==== TBasicAction.dyn_fff0 @ 00415ecc ==== 
 * signature: undefined4 __register TBasicAction.dyn_fff0(int param_1)
 * body: 00415ecc-00415ee5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TBasicAction_dyn_fff0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    uVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


