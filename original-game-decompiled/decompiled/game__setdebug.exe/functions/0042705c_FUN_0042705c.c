
/* ==== FUN_0042705c @ 0042705c ==== 
 * signature: undefined __register FUN_0042705c(byte param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0042705c-004271ab
 */

void FUN_0042705c(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_4 + -8) + 8))();
  if (((*(int *)(param_4 + -0xc) != 0) &&
      (((param_1 == 0 || (*(char *)(*(int *)(param_4 + -0xc) + 0x47) != '\0')) ||
       (((*(byte *)(*(int *)(param_4 + -0xc) + 0x20) & 0x10) != 0 &&
        ((*(byte *)(*(int *)(param_4 + -0xc) + 0x41) & 4) == 0)))))) &&
     (param_1 == *(byte *)(*(int *)(param_4 + -0xc) + 0x4b))) {
    FUN_0040eec8(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc));
  }
  local_c = FUN_0042781c(*(int *)(param_4 + -0x10));
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      iVar1 = FUN_004277e0(*(int *)(param_4 + -0x10),local_8);
      if (((param_1 == *(byte *)(iVar1 + 0x4b)) &&
          ((((param_1 == 0 || (*(char *)(iVar1 + 0x47) != '\0')) ||
            ((*(uint *)(iVar1 + 0x40) & 0x401) == 0x401)) ||
           (((*(byte *)(iVar1 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar1 + 0x41) & 4) == 0)))))) &&
         (iVar1 != *(int *)(param_4 + -0xc))) {
        for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_4 + -8) + 8); iVar5 = iVar5 + 1) {
          iVar2 = FUN_0040f024(*(undefined4 **)(param_4 + -8),iVar5);
          uVar3 = FUN_00426c60(iVar1,iVar2,param_1);
          if ((char)uVar3 != '\0') break;
        }
        FUN_0040f0a0(*(int **)(param_4 + -8),iVar5,iVar1);
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  local_c = *(int *)(*(int *)(param_4 + -8) + 8);
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      iVar1 = param_4;
      piVar4 = (int *)FUN_0040f024(*(undefined4 **)(param_4 + -8),local_8);
      FUN_00426cc0(piVar4,param_1,extraout_ECX,iVar1);
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


