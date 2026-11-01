
/* ==== FUN_004056a8 @ 004056a8 ==== 
 * signature: undefined __register FUN_004056a8(undefined * param_1, undefined4 param_2)
 * body: 004056a8-004056e2
 */

void FUN_004056a8(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b0) {
    if (3 < *(int *)(param_1 + 4) - 0xd7b0U) {
      FUN_004027a8(0x66);
      return;
    }
    FUN_0040566c(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = (**(code **)(param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    FUN_004027a8(iVar1);
  }
  return;
}


