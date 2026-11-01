
/* ==== FUN_0044b95c @ 0044b95c ==== 
 * signature: undefined FUN_0044b95c(void)
 * body: 0044b95c-0044baa6
 */

void FUN_0044b95c(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int iVar6;
  undefined4 uStack_c;
  
  (**(code **)(**(int **)(param_4 + -8) + 8))();
  if ((((*(int *)(param_4 + -0xc) != 0) && (*(int *)(*(int *)(param_4 + -0xc) + 0x24) == 0)) &&
      ((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) == 0)) &&
     (((*(char *)(*(int *)(param_4 + -0xc) + 0x47) != '\0' &&
       (*(char *)(*(int *)(param_4 + -0xc) + 0x4b) == param_1)) &&
      (*(char *)(*(int *)(param_4 + -0xc) + 0x213) != '\x01')))) {
    FUN_00410104(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  iVar1 = FUN_0044b19c(*(int *)(param_4 + -0x10));
  if (-1 < iVar1 + -1) {
    uStack_c = 0;
    do {
      iVar2 = FUN_0044b188(*(int *)(param_4 + -0x10),uStack_c);
      if (((*(int *)(iVar2 + 0x24) == 0) && (*(char *)(iVar2 + 0x4b) == param_1)) &&
         (((*(byte *)(iVar2 + 0x20) & 0x10) == 0 &&
          (((*(char *)(iVar2 + 0x47) != '\0' && (*(char *)(iVar2 + 0x213) != '\x01')) &&
           (iVar2 != *(int *)(param_4 + -0xc))))))) {
        for (iVar6 = 0; iVar6 < *(int *)(*(int *)(param_4 + -8) + 8); iVar6 = iVar6 + 1) {
          iVar3 = FUN_004102b0(*(undefined4 **)(param_4 + -8),iVar6);
          uVar4 = FUN_0044b74c(iVar2,iVar3,param_1);
          if ((char)uVar4 != '\0') break;
        }
        FUN_0041032c(*(int **)(param_4 + -8),iVar6,iVar2);
      }
      uStack_c = uStack_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(*(int *)(param_4 + -8) + 8);
  if (-1 < iVar1 + -1) {
    uStack_c = 0;
    do {
      iVar2 = param_4;
      piVar5 = (int *)FUN_004102b0(*(undefined4 **)(param_4 + -8),uStack_c);
      FUN_0044b7ac(piVar5,param_1,extraout_ECX,iVar2);
      uStack_c = uStack_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


