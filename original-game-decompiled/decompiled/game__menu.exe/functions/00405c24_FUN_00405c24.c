
/* ==== FUN_00405c24 @ 00405c24 ==== 
 * signature: undefined __register FUN_00405c24(undefined * param_1)
 * body: 00405c24-00405c5d
 */

void FUN_00405c24(undefined *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b1) {
    if (2 < *(int *)(param_1 + 4) - 0xd7b1U) {
      if (param_1 == &DAT_004ac050) {
        return;
      }
      iVar1 = 0x67;
      goto LAB_00405c49;
    }
    iVar1 = (**(code **)(param_1 + 0x1c))();
    if (iVar1 != 0) goto LAB_00405c49;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
LAB_00405c49:
  FUN_0040286c(iVar1);
  return;
}


