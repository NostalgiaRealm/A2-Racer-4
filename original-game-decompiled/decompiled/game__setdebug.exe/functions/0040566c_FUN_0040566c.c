
/* ==== FUN_0040566c @ 0040566c ==== 
 * signature: undefined __register FUN_0040566c(undefined * param_1)
 * body: 0040566c-004056a5
 */

void FUN_0040566c(undefined *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (2 < *(int *)(param_1 + 4) - 0xd7b1U) {
      if (param_1 == &DAT_00447048) {
        return;
      }
      iVar1 = 0x67;
      goto LAB_00405691;
    }
    iVar1 = (**(code **)(param_1 + 0x1c))();
    if (iVar1 != 0) goto LAB_00405691;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
LAB_00405691:
  FUN_004027a8(iVar1);
  return;
}


