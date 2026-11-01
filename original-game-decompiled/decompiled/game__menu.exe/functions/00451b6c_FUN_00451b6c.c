
/* ==== FUN_00451b6c @ 00451b6c ==== 
 * signature: undefined __register FUN_00451b6c(undefined4 * param_1)
 * body: 00451b6c-00451bab
 */

void FUN_00451b6c(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_00451bac((int)param_1);
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar3 = 0;
    do {
      piVar2 = (int *)(**(code **)*param_1)(param_1,iVar3);
      FUN_00402f9c(piVar2);
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  (**(code **)(*(int *)param_1[1] + 8))();
  return;
}


