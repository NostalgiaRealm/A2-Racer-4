
/* ==== FUN_00456234 @ 00456234 ==== 
 * signature: undefined __register FUN_00456234(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00456234-004562bf
 */

void FUN_00456234(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar6;
  int *piVar7;
  
  uVar1 = FUN_00403114(param_1,(int)FUN_004173a4);
  if ((char)uVar1 != '\0') {
    FUN_0045602c(param_1,extraout_EDX,extraout_ECX,param_4);
    return;
  }
  iVar6 = 0x18;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar3 = (**(code **)(*param_1 + 0x2c))();
  FUN_00457194(*(int **)(param_4 + -4),iVar3,iVar2,iVar6);
  puVar4 = (undefined4 *)FUN_00456928(*(int **)(param_4 + -4),extraout_EDX_00,extraout_ECX_00);
  FUN_00402c30(puVar4,*(uint *)(*(int *)(param_4 + -4) + 0x7c),0);
  piVar7 = param_1;
  piVar5 = (int *)FUN_00456800(*(int *)(param_4 + -4),extraout_EDX_01,extraout_ECX_01);
  FUN_00418f9c(piVar5,0,0,piVar7);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(**(int **)(param_4 + -4) + 0x3c))(*(int **)(param_4 + -4),uVar1);
  return;
}


