
/* ==== FUN_004108a0 @ 004108a0 ==== 
 * signature: undefined __register FUN_004108a0(int * param_1, int param_2, undefined4 * param_3)
 * body: 004108a0-00410905
 */

void FUN_004108a0(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x74))();
  if (param_1[4] == param_1[5]) {
    FUN_004107ec(param_1);
  }
  if (param_2 < param_1[4]) {
    FUN_004027d0((undefined4 *)(param_1[3] + param_2 * 8),
                 (undefined4 *)(param_1[3] + 8 + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  piVar1 = (int *)(param_1[3] + param_2 * 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  FUN_00403a0c(piVar1,param_3);
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x70))();
  return;
}


