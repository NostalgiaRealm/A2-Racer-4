
/* ==== FUN_00467eac @ 00467eac ==== 
 * signature: undefined __register FUN_00467eac(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4)
 * body: 00467eac-00467ecc
 */

void FUN_00467eac(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,param_4,param_3);
  }
  return;
}


