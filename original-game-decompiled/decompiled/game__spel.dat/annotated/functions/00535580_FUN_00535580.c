
/* ==== FUN_00535580 @ 00535580 ==== 
 * signature: undefined __cdecl FUN_00535580(undefined4 * param_1)
 * body: 00535580-00535857
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00535580(undefined4 *param_1)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  int *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  iVar7 = 0;
  local_44 = 0;
  local_40 = 0;
  if (DAT_0074c008 + -1 == DAT_0074cd50) {
    DAT_0074be68 = DAT_0074bff0;
    DAT_0074c788 = DAT_0074bff0;
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_forcedmerges__begin_005c5d5c);
  }
  local_48 = FUN_00514c70();
  DAT_0074c6e0 = FUN_00514b50(DAT_0074c5fc);
  FUN_00514ce0(local_48);
  if (local_48 != (int *)0x0) {
    iVar2 = local_48[1];
    local_3c = local_48 + 2;
    while (iVar2 != 0) {
      dVar1 = _DAT_0074ca08;
      if (*(int *)(iVar2 + 0x10) == 5) {
        piVar3 = *(int **)(iVar2 + 8);
        piVar6 = *(int **)(iVar2 + 0xc);
        uVar4 = piVar3[0x14];
        while ((uVar4 & 0x400) != 0) {
          piVar3 = (int *)piVar3[8];
          uVar4 = piVar3[0x14];
        }
        uVar4 = piVar6[0x14];
        while ((uVar4 & 0x400) != 0) {
          piVar6 = (int *)piVar6[8];
          uVar4 = piVar6[0x14];
        }
        if (piVar3 != piVar6) {
          iVar7 = FUN_00514680(piVar6[0xf],(int)piVar3);
          if (iVar7 == 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_forcedm_005c5ce0);
            FUN_005258d0(5,piVar3,piVar6);
          }
          if (DAT_0074c008 + -1 == DAT_0074cd50) {
            DAT_0074be68 = DAT_0074bff0;
            DAT_0074c788 = DAT_0074bff0;
          }
          fVar8 = FUN_00528490((int)piVar3,(int)piVar6,&local_20,&local_28);
          local_38 = (double)fVar8;
          fVar8 = FUN_00528490((int)piVar6,(int)piVar3,&local_10,&local_18);
          local_30 = (double)fVar8;
          if (DAT_0074be68 != 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_forcedmerges__duplicate_ridge_005c5c7c);
          }
          if (local_30 <= local_38) {
            FUN_00537280(piVar6,piVar3,&local_10,&local_18,(int *)0x0);
            dVar1 = local_30;
          }
          else {
            FUN_00537280(piVar3,piVar6,&local_20,&local_28,(int *)0x0);
            piVar6 = piVar3;
            dVar1 = local_38;
          }
          if ((piVar6[0x14] & 0x8000U) == 0) {
            local_44 = local_44 + 1;
          }
          else {
            DAT_0074cb08 = DAT_0074cb08 + 1;
            local_40 = local_40 + 1;
          }
          if (DAT_0074bf80 != 0) {
            _DAT_0074ca10 = _DAT_0074ca10 + dVar1;
            _DAT_0074ca00 = _DAT_0074ca00 + 1;
            if (_DAT_0074ca08 < dVar1) goto LAB_005357bf;
          }
          dVar1 = _DAT_0074ca08;
        }
      }
LAB_005357bf:
      _DAT_0074ca08 = dVar1;
      iVar2 = *local_3c;
      iVar7 = local_44;
      local_3c = local_3c + 1;
    }
    if (local_48 != (int *)0x0) {
      puVar5 = (undefined4 *)local_48[1];
      piVar3 = local_48 + 2;
      while (puVar5 != (undefined4 *)0x0) {
        if (puVar5[4] == 5) {
          FUN_0051e2b0(puVar5,0x18);
        }
        else {
          FUN_00514020(&DAT_0074c6e0,(int)puVar5);
        }
        puVar5 = (undefined4 *)*piVar3;
        piVar3 = piVar3 + 1;
      }
    }
  }
  FUN_00514ba0((int *)&local_48);
  if (iVar7 != 0) {
    *param_1 = 1;
  }
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_forcedmerges__merged__d_facet_005c5c28);
  }
  return;
}


