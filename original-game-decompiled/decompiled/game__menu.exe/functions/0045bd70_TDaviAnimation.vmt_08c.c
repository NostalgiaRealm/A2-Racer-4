
/* ==== TDaviAnimation.vmt_08c @ 0045bd70 ==== 
 * signature: undefined TDaviAnimation.vmt_08c(void)
 * body: 0045bd70-0045be12
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_08c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_1[0xb];
  piVar1 = param_1 + 0xb;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (iVar2 == -1) {
    thunk_FUN_00402808((uint)param_1);
  }
  if (param_1[0xb] == -1) {
    thunk_FUN_00402808(0xffffffff);
  }
  if ((*(char *)(*(int *)(param_1[10] + 0x14) + 4) != '\0') &&
     (*(uint *)(*(int *)(param_1[10] + 0x14) + 0x10) < (uint)param_1[0xb])) {
    uVar4 = *(uint *)(param_1[10] + 0x14);
    uVar5 = *(uint *)(uVar4 + 8);
    if (((uint)param_1[0xe] < uVar5) || (uVar5 == 0)) {
      piVar1 = param_1 + 0xe;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (iVar2 == -1) {
        thunk_FUN_00402808(uVar4);
      }
      param_1[0xb] = *(int *)(*(int *)(param_1[10] + 0x14) + 0xc);
    }
  }
  iVar2 = *(int *)(param_1[10] + 4);
  if (iVar2 == param_1[0xb]) {
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = thunk_FUN_00402808(0xffffffff);
    }
    if (iVar6 == -1) {
      iVar6 = thunk_FUN_00402808(0xffffffff);
    }
    param_1[0xb] = iVar6;
    FUN_0045c82c(param_1);
  }
  if (iVar3 != param_1[0xb]) {
    (**(code **)(*param_1 + 100))(param_1,param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


