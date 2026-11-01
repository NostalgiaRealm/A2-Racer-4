
/* ==== FUN_00530580 @ 00530580 ==== 
 * signature: undefined __cdecl FUN_00530580(int * param_1, int param_2, int param_3)
 * body: 00530580-00530820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00530580(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  int *local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
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
  FUN_0052dc70(param_2,(double *)&local_50,(double *)&local_48);
  local_54 = (int *)FUN_005182e0(param_2);
  iVar2 = FUN_00514af0(local_54);
  local_58 = (int *)FUN_00514b50(iVar2);
  if (local_54 != (int *)0x0) {
    iVar2 = local_54[1];
    piVar1 = local_54 + 2;
    while (iVar2 != 0) {
      DAT_0074c968 = DAT_0074c968 + 1;
      FUN_005273a0(*(double **)(iVar2 + 8),param_2,(double *)&local_40);
      iVar2 = FUN_005288f0(*(double **)(iVar2 + 8),param_2,(double)CONCAT44(local_3c,local_40));
      FUN_00514020((int *)&local_58,iVar2);
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  if (DAT_0074bf00 == 0) {
    if (DAT_0074bef8 != 0) goto LAB_005306b3;
    if (DAT_0074bef0 == 0) goto LAB_00530696;
  }
  else {
LAB_00530696:
    FUN_00530830(param_1,local_58,param_2,(double)CONCAT44(uStack_4c,local_50));
LAB_005306b3:
    if ((DAT_0074bef0 == 0) &&
       (((DAT_0074bef8 != 0 || (DAT_0074bf00 != 0)) ||
        ((double)CONCAT44(uStack_4c,local_50) - (double)CONCAT44(uStack_44,local_48) <=
         _DAT_0074c498 * 0.004)))) goto LAB_00530723;
  }
  iVar2 = 3;
  pdVar3 = (double *)(param_3 + 0x10);
  do {
    iVar2 = iVar2 + -1;
    *pdVar3 = 1.0 - *pdVar3;
    pdVar3 = pdVar3 + -1;
  } while (iVar2 != 0);
  FUN_00530830(param_1,local_58,param_2,(double)CONCAT44(uStack_44,local_48));
LAB_00530723:
  if (local_58 != (int *)0x0) {
    puVar4 = (undefined4 *)local_58[1];
    piVar1 = local_58 + 2;
    while (puVar4 != (undefined4 *)0x0) {
      FUN_0051e2b0(puVar4,DAT_0074c5f4);
      puVar4 = (undefined4 *)*piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  FUN_00514ba0((int *)&local_58);
  FUN_00514ba0((int *)&local_54);
  if (((DAT_0074be44 != 0) || (DAT_0074bf78 != 0)) &&
     (((*(uint *)(param_2 + 0x50) & 0x400) == 0 || (DAT_0074c690 == 0)))) {
    iVar2 = *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x48) = DAT_0074c6d0;
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 4);
      piVar1 = *(int **)(iVar2 + 4);
      while (piVar1 != (int *)0x0) {
        puVar4 = puVar4 + 1;
        iVar2 = piVar1[1];
        if (iVar2 == param_2) {
          iVar2 = piVar1[2];
        }
        if (*(int *)(iVar2 + 0x48) != DAT_0074c6d0) {
          if (DAT_0074be44 != 0) {
            FUN_00532480(param_1,param_2,iVar2,(int *)*piVar1);
          }
          if (DAT_0074bf78 != 0) {
            FUN_005327b0(param_1,*(undefined4 **)(*(int *)(*piVar1 + 4) + 8),
                         *(undefined4 **)(*(int *)(*piVar1 + 8) + 8));
          }
        }
        piVar1 = (int *)*puVar4;
      }
    }
  }
  return;
}


