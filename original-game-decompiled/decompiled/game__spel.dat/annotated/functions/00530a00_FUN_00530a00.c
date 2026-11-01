
/* ==== FUN_00530a00 @ 00530a00 ==== 
 * signature: undefined __cdecl FUN_00530a00(int * param_1, int param_2, int param_3)
 * body: 00530a00-00530c79
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00530a00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  double *pdVar3;
  int iVar4;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3ff00000;
  local_10 = 0;
  local_c = 0;
  FUN_0052dc70(param_2,(double *)&local_48,(double *)&local_40);
  local_50 = (int *)FUN_005182e0(param_2);
  local_4c = (int *)FUN_00514b50(DAT_0074c5fc);
  if (local_50 != (int *)0x0) {
    iVar4 = local_50[1];
    piVar2 = local_50 + 2;
    while (iVar4 != 0) {
      FUN_00514020((int *)&local_4c,*(int *)(iVar4 + 8));
      iVar4 = *piVar2;
      piVar2 = piVar2 + 1;
    }
  }
  if (DAT_0074bf00 == 0) {
    if (DAT_0074bef8 != 0) goto LAB_00530b06;
    if (DAT_0074bef0 == 0) goto LAB_00530ae9;
  }
  else {
LAB_00530ae9:
    FUN_00530830(param_1,local_4c,param_2,(double)CONCAT44(uStack_44,local_48));
LAB_00530b06:
    if ((DAT_0074bef0 == 0) &&
       (((DAT_0074bef8 != 0 || (DAT_0074bf00 != 0)) ||
        ((double)CONCAT44(uStack_44,local_48) - (double)CONCAT44(uStack_3c,local_40) <=
         _DAT_0074c498 * 0.004)))) goto LAB_00530b76;
  }
  iVar4 = 3;
  pdVar3 = (double *)(param_3 + 0x10);
  do {
    iVar4 = iVar4 + -1;
    *pdVar3 = 1.0 - *pdVar3;
    pdVar3 = pdVar3 + -1;
  } while (iVar4 != 0);
  FUN_00530830(param_1,local_4c,param_2,(double)CONCAT44(uStack_3c,local_40));
LAB_00530b76:
  FUN_00514ba0((int *)&local_4c);
  FUN_00514ba0((int *)&local_50);
  if (((DAT_0074be44 != 0) || (DAT_0074bf78 != 0)) &&
     (((*(uint *)(param_2 + 0x50) & 0x400) == 0 || (DAT_0074c690 == 0)))) {
    iVar4 = *(int *)(param_2 + 0x3c);
    *(int *)(param_2 + 0x48) = DAT_0074c6d0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 4);
      piVar2 = (int *)(iVar4 + 8);
      while (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x48) != DAT_0074c6d0) {
          local_50 = (int *)FUN_00514880(*(int **)(param_2 + 0x34),DAT_0074c03c,
                                         (int)piVar2 + (-8 - *(int *)(param_2 + 0x3c)) >> 2,0);
          if (DAT_0074be44 != 0) {
            FUN_00532480(param_1,param_2,iVar1,local_50);
          }
          if (DAT_0074bf78 != 0) {
            FUN_005327b0(param_1,*(undefined4 **)(local_50[1] + 8),*(undefined4 **)(local_50[2] + 8)
                        );
          }
          FUN_005145f0(&local_50);
        }
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
      }
    }
  }
  return;
}


