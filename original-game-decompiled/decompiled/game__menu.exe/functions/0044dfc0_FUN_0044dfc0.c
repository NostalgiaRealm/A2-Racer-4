
/* ==== FUN_0044dfc0 @ 0044dfc0 ==== 
 * signature: undefined __register FUN_0044dfc0(undefined * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0044dfc0-0044e013
 */

void FUN_0044dfc0(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_004aa930;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_4 + -4) + 0x74);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar2 = (undefined *)FUN_00402ee0(puVar1), param_1 == puVar2)) {
    return;
  }
  FUN_00402f9c(*(int **)(*(int *)(param_4 + -4) + 0x74));
  uVar3 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)(param_4 + -4));
  *(undefined4 *)(*(int *)(param_4 + -4) + 0x74) = uVar3;
  return;
}


