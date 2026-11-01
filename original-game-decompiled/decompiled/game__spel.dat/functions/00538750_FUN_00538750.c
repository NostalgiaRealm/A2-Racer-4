
/* ==== FUN_00538750 @ 00538750 ==== 
 * signature: uint __cdecl FUN_00538750(int * param_1, uint param_2, int * param_3)
 * body: 00538750-0053892a
 */

uint __cdecl FUN_00538750(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  piVar3 = param_1;
  uVar8 = 0;
  iVar5 = FUN_00514af0((int *)param_1[3]);
  uVar4 = param_2;
  if (iVar5 == 2) {
    uVar8 = *(uint *)(piVar3[3] + 4);
    if (uVar8 == param_2) {
      uVar8 = *(uint *)(piVar3[3] + 8);
    }
  }
  else {
    if (DAT_0074c03c == 3) {
      return 0;
    }
    DAT_0074c6d0 = DAT_0074c6d0 + 1;
    iVar5 = *(int *)(param_2 + 0x3c);
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 4);
      piVar2 = (int *)(iVar5 + 8);
      while (iVar1 != 0) {
        *(int *)(iVar1 + 0x48) = DAT_0074c6d0;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
      }
    }
    iVar5 = piVar3[3];
    if (iVar5 != 0) {
      uVar6 = *(uint *)(iVar5 + 4);
      puVar7 = (uint *)(iVar5 + 8);
      if (uVar6 != 0) {
        do {
          if ((*(int *)(uVar6 + 0x48) == DAT_0074c6d0) && (bVar9 = uVar8 != 0, uVar8 = uVar6, bVar9)
             ) {
            return 0;
          }
          uVar6 = *puVar7;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
        if (uVar8 != 0) goto LAB_0053883e;
      }
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_rename__005c6cb0);
    FUN_0051eb30(s_ERRONEOUS_005b9f2c,uVar4,0,(int *)0x0,(int)piVar3);
    FUN_0051e8e0(5,(int *)0x0);
  }
LAB_0053883e:
  param_3 = (int *)FUN_00514b50(DAT_0074c5fc);
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  *(int *)(uVar8 + 0x48) = DAT_0074c6d0;
  FUN_00539510((int)piVar3,uVar4,(int *)&param_3);
  if (1 < DAT_0074be68) {
    FUN_00514af0(param_3);
    FUN_005164c0(piVar3[2]);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_rename_sharedvertex__p_d__v_d_005c6c68);
  }
  DAT_0074caa0 = DAT_0074caa0 + 1;
  param_1 = (int *)FUN_0051a6d0(*(undefined4 *)(uVar4 + 0x34),*(undefined4 *)(uVar8 + 0x34));
  FUN_00514280(param_1,(int)piVar3);
  FUN_00514ce0(param_1);
  uVar6 = FUN_00534d30((uint)piVar3,param_1,param_3);
  if (uVar6 != 0) {
    FUN_00538a60((int)piVar3,uVar6,(int)param_3,uVar4,uVar8);
  }
  FUN_00514ba0((int *)&param_1);
  FUN_00514ba0((int *)&param_3);
  return uVar6;
}


