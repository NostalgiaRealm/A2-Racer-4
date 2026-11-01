
/* ==== FUN_00405c60 @ 00405c60 ==== 
 * signature: undefined __register FUN_00405c60(undefined * param_1, undefined4 param_2)
 * body: 00405c60-00405c9a
 */

void FUN_00405c60(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0xd7b0) {
    if (3 < *(int *)(param_1 + 4) - 0xd7b0U) {
      FUN_0040286c(0x66);
      return;
    }
    FUN_00405c24(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar1 = (**(code **)(param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    FUN_0040286c(iVar1);
  }
  return;
}


