
/* ==== FUN_00491710 @ 00491710 ==== 
 * signature: undefined __register FUN_00491710(int param_1, int param_2)
 * body: 00491710-0049178c
 */

void FUN_00491710(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar5;
  
  uVar1 = FUN_0049169c(param_1);
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar5 = 0;
    do {
      uVar2 = param_2 - 1;
      if (SBORROW4(param_2,1)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      if ((int)uVar2 < iVar5) {
        piVar4 = (int *)FUN_00491684(param_1,iVar5);
        TGroupBox_set_Visible(piVar4,0,extraout_ECX_00);
      }
      else {
        iVar3 = FUN_00491684(param_1,iVar5);
        piVar4 = *(int **)(*(int *)(iVar3 + 300) + 0xc);
        (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_1 + 8));
        piVar4 = (int *)FUN_00491684(param_1,iVar5);
        TGroupBox_set_Visible(piVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
      }
      iVar5 = iVar5 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


