
/* ==== FUN_00416a08 @ 00416a08 ==== 
 * signature: undefined __register FUN_00416a08(int param_1, undefined4 * param_2)
 * body: 00416a08-00416a1f
 */

void FUN_00416a08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar3 = param_2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = 0;
  return;
}


