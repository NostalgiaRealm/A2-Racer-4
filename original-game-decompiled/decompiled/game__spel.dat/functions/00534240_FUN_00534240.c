
/* ==== FUN_00534240 @ 00534240 ==== 
 * signature: undefined __cdecl FUN_00534240(int param_1, int param_2)
 * body: 00534240-005344dd
 */

void __cdecl FUN_00534240(int param_1,int param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double *pdVar3;
  bool bVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int local_10;
  
  local_10 = 0;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_all_merges__starting_to_merge_005c563c);
  }
LAB_00534288:
  do {
    bVar8 = false;
    iVar9 = FUN_00514af0(DAT_0074c6e0);
    while (iVar9 != 0) {
      puVar10 = (undefined4 *)FUN_005142e0(DAT_0074c6e0);
      while (puVar10 != (undefined4 *)0x0) {
        pdVar2 = (double *)puVar10[2];
        pdVar3 = (double *)puVar10[3];
        iVar9 = puVar10[4];
        if (puVar10 != (undefined4 *)0x0) {
          DAT_0074c79c = DAT_0074c79c + 1;
          puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x60) * 4);
          *puVar10 = *puVar1;
          *puVar1 = puVar10;
        }
        dVar6 = pdVar2[10];
        if (((((ulonglong)dVar6 & 0x400) == 0) &&
            (dVar7 = pdVar3[10], ((ulonglong)dVar7 & 0x400) == 0)) &&
           ((((((ulonglong)dVar6 & 0x200) == 0 || (((ulonglong)dVar6 & 0x4000000) != 0)) &&
             ((((ulonglong)dVar7 & 0x200) == 0 || (((ulonglong)dVar7 & 0x4000000) != 0)))) ||
            ((DAT_0074be94 == 0 || (2 < iVar9)))))) {
          FUN_00536460(pdVar2,pdVar3,iVar9);
          FUN_005361a0();
          local_10 = local_10 + 1;
          bVar8 = true;
        }
        puVar10 = (undefined4 *)FUN_005142e0(DAT_0074c6e0);
      }
      if (((DAT_0074c6b0 != 0) && (DAT_0074c03c < 6)) && (2 < local_10)) {
        local_10 = 0;
        FUN_00538390();
      }
      FUN_00535860(DAT_0074c60c);
      iVar9 = FUN_00514af0(DAT_0074c6e0);
    }
    if (DAT_0074c460 != 0) {
      bVar4 = false;
      if ((3 < DAT_0074c03c) && (piVar5 = DAT_0074c628, DAT_0074c6b0 != 0)) {
        for (; (piVar5 != (int *)0x0 && (*piVar5 != 0)); piVar5 = (int *)*piVar5) {
          piVar5[5] = piVar5[5] | 0x4000000;
        }
        bVar4 = true;
      }
      if ((((bVar8) || (param_1 != 0)) && ((DAT_0074be90 == 0 || (DAT_0074c6b0 != 0)))) &&
         (DAT_0074c03c < 6)) {
        param_1 = 0;
      }
      else if (!bVar4) goto LAB_00534443;
      bVar8 = FUN_00538390();
      if (CONCAT31(extraout_var,bVar8) != 0) {
        FUN_00535860(DAT_0074c60c);
        goto LAB_00534288;
      }
    }
LAB_00534443:
    if ((param_2 == 0) || (bVar8 = FUN_00538fb0(), CONCAT31(extraout_var_00,bVar8) == 0)) {
      if ((DAT_0074be2c != 0) && (DAT_0074be90 == 0)) {
        DAT_0074c738 = DAT_0074bf98;
        DAT_0074bf98 = 0;
        FUN_00516cc0(DAT_0074c60c,0);
        DAT_0074bf98 = DAT_0074c738;
      }
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_all_merges__merged__d_coplana_005c55dc);
      }
      if ((3 < DAT_0074be68) && (DAT_0074c634 < 0x32)) {
        FUN_0051a4b0();
      }
      return;
    }
  } while( true );
}


