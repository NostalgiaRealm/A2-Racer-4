
/* ==== FUN_0049180c @ 0049180c ==== 
 * signature: undefined FUN_0049180c(void)
 * body: 0049180c-00491904
 */

void FUN_0049180c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar5;
  
  uVar1 = FUN_0049169c(param_1);
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar5 = 0;
    do {
      if (iVar5 < param_2) {
        uVar2 = param_2 + param_3;
        if (SCARRY4(param_2,param_3)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        if (iVar5 < (int)uVar2) {
          iVar3 = FUN_00491684(param_1,iVar5);
          piVar4 = *(int **)(*(int *)(iVar3 + 300) + 0xc);
          (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_1 + 8));
          piVar4 = (int *)FUN_00491684(param_1,iVar5);
          TGroupBox_set_Visible
                    (piVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
        }
        else {
          iVar3 = FUN_00491684(param_1,iVar5);
          piVar4 = *(int **)(*(int *)(iVar3 + 300) + 0xc);
          (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_1 + 0xc));
          piVar4 = (int *)FUN_00491684(param_1,iVar5);
          TGroupBox_set_Visible(piVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
      else {
        uVar2 = param_2 + param_3;
        if (SCARRY4(param_2,param_3)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        if (iVar5 < (int)uVar2) {
          iVar3 = FUN_00491684(param_1,iVar5);
          piVar4 = *(int **)(*(int *)(iVar3 + 300) + 0xc);
          (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(param_1 + 0x10));
          piVar4 = (int *)FUN_00491684(param_1,iVar5);
          TGroupBox_set_Visible
                    (piVar4,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_01);
        }
        else {
          piVar4 = (int *)FUN_00491684(param_1,iVar5);
          TGroupBox_set_Visible(piVar4,0,extraout_ECX_02);
        }
      }
      iVar5 = iVar5 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


