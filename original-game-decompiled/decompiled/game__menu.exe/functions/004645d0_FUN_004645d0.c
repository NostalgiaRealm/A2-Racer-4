
/* ==== FUN_004645d0 @ 004645d0 ==== 
 * signature: undefined4 __register FUN_004645d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004645d0-004645ef
 */

undefined4 FUN_004645d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x4a) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_2,param_3,param_4);
  }
  return uVar1;
}


