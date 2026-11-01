
/* ==== FUN_0052f850 @ 0052f850 ==== 
 * signature: undefined __cdecl FUN_0052f850(int * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * body: 0052f850-0052fb27
 */

void __cdecl FUN_0052f850(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_64;
  double local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  double local_28 [4];
  
  bVar3 = false;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x3ff00000;
  local_30 = 0;
  local_2c = 0;
  if (DAT_0074c65c == 2) {
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar4 = FUN_00528400(param_2);
      *(undefined4 *)(param_2 + 0x28) = uVar4;
    }
    puVar5 = *(undefined4 **)(param_2 + 0x28);
  }
  else {
    puVar5 = (undefined4 *)FUN_00528400(param_2);
    bVar3 = true;
  }
  FUN_00558953(param_1,(byte *)s__appearance___normal__edge_norms_005c36d8);
  if (DAT_0074c710 == 0) {
    pcVar10 = s__INST_geom_____centrum___transfo_005c35fc;
  }
  else {
    DAT_0074c710 = 0;
    pcVar10 = s__INST_geom___define_centrum_CQUA_005c3628;
  }
  FUN_00558953(param_1,(byte *)pcVar10);
  iVar9 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  FUN_005273a0(*(double **)(iVar9 + 8),param_2,(double *)&local_68);
  puVar6 = (undefined4 *)
           FUN_005288f0(*(double **)(iVar9 + 8),param_2,(double)CONCAT44(local_64,local_68));
  if (DAT_0074c03c != 0) {
    iVar8 = *(int *)(param_2 + 0x18) - (int)puVar5;
    pdVar7 = (double *)(puVar5 + (DAT_0074c03c + -1) * 2);
    iVar9 = DAT_0074c03c;
    do {
      pdVar1 = (double *)(((int)puVar6 - (int)puVar5) + (int)pdVar7);
      dVar2 = *pdVar7;
      iVar9 = iVar9 + -1;
      pdVar7 = pdVar7 + -1;
      *(double *)((int)local_60 + (8 - (int)puVar5) + (int)pdVar7) = *pdVar1 - dVar2;
      *(undefined4 *)((int)local_60 + -(int)puVar5 + -0x20 + (int)pdVar7) =
           *(undefined4 *)(iVar8 + 8 + (int)pdVar7);
      *(undefined4 *)((int)local_60 + -(int)puVar5 + -0x1c + (int)pdVar7) =
           *(undefined4 *)(iVar8 + 0xc + (int)pdVar7);
    } while (iVar9 != 0);
  }
  if (DAT_0074c03c == 2) {
    local_50 = 0;
    local_4c = 0;
    local_78 = 0;
    local_74 = 0;
  }
  else if (DAT_0074c03c == 4) {
    FUN_00533c70((undefined4 *)local_60,(undefined4 *)local_60);
    FUN_00533c70((undefined4 *)&local_88,(undefined4 *)&local_88);
    FUN_005285e0((double *)&local_88,DAT_0074bee4,1,(double *)0x0,(undefined4 *)0x0);
  }
  FUN_00529580(3,local_60,(double *)&local_88,local_28);
  FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_0_005c35e4);
  FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_0_005c35e4);
  FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_0_005c35e4);
  FUN_00532ae0(param_1,puVar5);
  FUN_00558953(param_1,(byte *)s_1_____005c35dc);
  FUN_0051e2b0(puVar6,DAT_0074c5f4);
  FUN_00532dc0(param_1,puVar5,*(int *)(param_2 + 0x18),0,(double)CONCAT44(param_4,param_3));
  if (bVar3) {
    FUN_0051e2b0(puVar5,DAT_0074c5f4);
  }
  return;
}


