
/* ==== FUN_0042d968 @ 0042d968 ==== 
 * signature: undefined __register FUN_0042d968(int param_1, int * param_2, undefined4 param_3)
 * body: 0042d968-0042d9c0
 */

void FUN_0042d968(int param_1,int *param_2,undefined4 param_3)

{
  if (param_2 != (int *)0x0) {
    if ((int *)param_2[2] != (int *)0x0) {
      FUN_0042d934((int *)param_2[2],param_2,param_3,&stack0xfffffffc);
    }
    if (param_2[6] == 0) {
      if (param_2[5] != 0) {
        *(int *)(param_2[5] + 8) = param_2[3];
      }
    }
    else {
      *(int *)(param_2[6] + 0xc) = param_2[3];
    }
    if (param_2[3] != 0) {
      *(int *)(param_2[3] + 0x18) = param_2[6];
    }
    if (param_2 == *(int **)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    FUN_00402d14(param_2);
  }
  return;
}


