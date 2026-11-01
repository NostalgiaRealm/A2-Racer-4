
/* ==== FUN_004d57d0 @ 004d57d0 ==== 
 * signature: undefined __cdecl FUN_004d57d0(undefined4 * param_1, facet * param_2, int * param_3, void * param_4, undefined4 param_5, byte * param_6, int param_7, size_t param_8)
 * body: 004d57d0-004d5bbe
 */

void __cdecl
FUN_004d57d0(undefined4 *param_1,facet *param_2,int *param_3,void *param_4,undefined4 param_5,
            byte *param_6,int param_7,size_t param_8)

{
  int iVar1;
  void **ppvVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  facet *pfVar8;
  byte *pbVar9;
  size_t sVar10;
  size_t sVar11;
  int iVar12;
  byte *pbVar13;
  facet *pfVar14;
  int *piVar15;
  int local_28 [2];
  facet *local_20;
  int *local_1c;
  facet *local_18;
  int *local_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  sVar11 = param_8;
  pbVar13 = param_6;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057004e;
  pvStack_c = ExceptionList;
  uVar4 = *(uint *)((int)param_4 + 0x14);
  if (((int)uVar4 < 1) || (uVar4 <= param_7 + param_8)) {
    local_28[0] = 0;
  }
  else {
    local_28[0] = (uVar4 - param_7) - param_8;
  }
  iVar7 = local_28[0];
  uVar4 = *(uint *)((int)param_4 + 0xc) & 0x1c0;
  pfVar14 = param_2;
  piVar15 = param_3;
  ppvVar2 = &pvStack_c;
  if (uVar4 != 0x40) {
    ppvVar2 = &pvStack_c;
    local_20 = param_2;
    local_1c = param_3;
    if (uVar4 == 0x100) {
      ppvVar2 = &pvStack_c;
      sVar10 = param_8;
      if ((param_8 != 0) &&
         ((bVar3 = *param_6, bVar3 == 0x2b || (ppvVar2 = &pvStack_c, bVar3 == 0x2d)))) {
        param_8 = CONCAT31(param_8._1_3_,bVar3);
        ExceptionList = &pvStack_c;
        FUN_004d60a0(&local_20,bVar3);
        pbVar13 = pbVar13 + 1;
        sVar10 = sVar11 - 1;
        ppvVar2 = ExceptionList;
        param_2 = local_20;
        param_3 = local_1c;
        param_8 = sVar10;
      }
      for (; ExceptionList = ppvVar2, sVar11 = param_8, iVar7 != 0; iVar7 = iVar7 + -1) {
        param_8 = sVar10;
        FUN_004d60a0(&local_20,(byte)param_5);
        ppvVar2 = ExceptionList;
        sVar10 = param_8;
        param_8 = sVar11;
      }
      local_28[0] = 0;
      pfVar14 = local_20;
      piVar15 = local_1c;
      ppvVar2 = ExceptionList;
      param_8 = sVar10;
    }
    else {
      for (; ExceptionList = ppvVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
        FUN_004d60a0(&local_20,(byte)param_5);
        ppvVar2 = ExceptionList;
      }
      local_28[0] = 0;
      pbVar13 = param_6;
      pfVar14 = local_20;
      piVar15 = local_1c;
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = ppvVar2;
  puVar5 = (undefined4 *)FUN_0055a6b0();
  pvVar6 = _memchr(pbVar13,(int)*(char *)*puVar5,sVar11);
  if (pvVar6 != (void *)0x0) {
    param_6 = (byte *)FUN_004d4370(param_4,(int *)&local_20);
    local_4 = 1;
    uVar4 = FUN_004d4350(&DAT_0074db10);
    param_2 = (facet *)FUN_0054ca8b(param_6,uVar4,'\x01');
    pfVar8 = param_2;
    if (param_2 == (facet *)0x0) {
      iVar7 = FUN_0054caca((int *)param_6);
      if ((char)iVar7 == '\0') {
        FUN_004d1030(&local_18);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_18,&DAT_00584188);
      }
      pfVar8 = DAT_0074b89c;
      if (DAT_0074b89c == (facet *)0x0) {
        param_6 = operator_new(0x18);
        local_4._0_1_ = 2;
        if (param_6 == (byte *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_004d6120(param_6,0);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        DAT_0074b89c = (facet *)FUN_004d6580((int)puVar5);
        pfVar8 = DAT_0074b89c;
      }
    }
    param_2 = pfVar8;
    local_4 = 0xffffffff;
    if ((local_20 != (facet *)0x0) &&
       (pfVar8 = std::locale::facet::_Decref(local_20), pfVar8 != (facet *)0x0)) {
      (*(code *)**(undefined4 **)pfVar8)(1);
    }
    iVar7 = (int)pvVar6 - (int)pbVar13;
    iVar12 = iVar7 + 1;
    param_6 = pbVar13;
    local_18 = pfVar14;
    local_14 = piVar15;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_004d60a0(&local_18,*param_6);
      param_6 = param_6 + 1;
    }
    bVar3 = (**(code **)(*(int *)param_2 + 4))();
    param_6 = (byte *)CONCAT31(param_6._1_3_,bVar3);
    param_3 = local_14;
    param_2 = local_18;
    FUN_004d60a0(&param_2,bVar3);
    pbVar13 = pbVar13 + iVar12;
    param_8 = param_8 - iVar12;
    pfVar14 = param_2;
    piVar15 = param_3;
  }
  pvVar6 = _memchr(pbVar13,0x65,param_8);
  sVar11 = param_8;
  param_2 = pfVar14;
  param_3 = piVar15;
  if (pvVar6 != (void *)0x0) {
    iVar7 = (int)pvVar6 - (int)pbVar13;
    iVar12 = iVar7 + 1;
    param_6 = pbVar13;
    for (; pfVar14 = param_2, piVar15 = param_3, iVar1 = param_7, iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_004d60a0(&param_2,*param_6);
      param_6 = param_6 + 1;
    }
    for (; local_14 = piVar15, local_18 = pfVar14, iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_004d60a0(&local_18,0x30);
      pfVar14 = local_18;
      piVar15 = local_14;
    }
    param_7 = 0;
    pbVar9 = &DAT_005b70a8;
    if ((*(byte *)((int)param_4 + 0xc) & 4) == 0) {
      pbVar9 = &DAT_005b70a4;
    }
    param_2 = local_18;
    param_3 = local_14;
    FUN_004d60a0(&param_2,*pbVar9);
    pbVar13 = pbVar13 + iVar12;
    sVar11 = param_8 - iVar12;
  }
  for (; piVar15 = param_3, pfVar14 = param_2, iVar7 = param_7, sVar11 != 0; sVar11 = sVar11 - 1) {
    FUN_004d60a0(&param_2,*pbVar13);
    pbVar13 = pbVar13 + 1;
  }
  for (; local_18 = pfVar14, local_14 = piVar15, iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_004d60a0(&local_18,0x30);
    piVar15 = local_14;
    pfVar14 = local_18;
  }
  *(undefined4 *)((int)param_4 + 0x14) = 0;
  puVar5 = (undefined4 *)FUN_004d5fe0(local_28,local_18,local_14,(byte)param_5,local_28[0]);
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  ExceptionList = pvStack_c;
  return;
}


