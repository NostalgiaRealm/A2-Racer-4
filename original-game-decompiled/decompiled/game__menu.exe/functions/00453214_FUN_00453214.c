
/* ==== FUN_00453214 @ 00453214 ==== 
 * signature: undefined __register FUN_00453214(int param_1)
 * body: 00453214-0045325f
 */

void FUN_00453214(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = FUN_00451bac(*(int *)(param_1 + 8));
  iVar4 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),iVar4);
      puVar3 = (undefined4 *)FUN_0040312c(piVar2,(int)FUN_00452afc);
      (**(code **)*puVar3)();
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),iVar4);
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return;
}


