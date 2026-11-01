
/* ==== FUN_00442e34 @ 00442e34 ==== 
 * signature: undefined __register FUN_00442e34(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00442e34-00442e87
 */

void FUN_00442e34(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_0044685c;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_4 + -4) + 0x74);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined *)FUN_00402c5c(puVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00402d14(*(int **)(*(int *)(param_4 + -4) + 0x74));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x74) = uVar3;
  return;
}


