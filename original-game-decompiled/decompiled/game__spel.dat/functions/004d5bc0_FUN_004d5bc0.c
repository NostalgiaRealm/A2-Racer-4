
/* ==== FUN_004d5bc0 @ 004d5bc0 ==== 
 * signature: int * __cdecl FUN_004d5bc0(int * param_1, int param_2, void * param_3, void * param_4, undefined4 param_5, byte * param_6, uint param_7)
 * body: 004d5bc0-004d5fdb
 */

int * __cdecl
FUN_004d5bc0(int *param_1,int param_2,void *param_3,void *param_4,undefined4 param_5,byte *param_6,
            uint param_7)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *this;
  uint uVar7;
  int *this_00;
  int iVar8;
  undefined4 *puVar9;
  facet *pfVar10;
  int iVar11;
  void *pvVar12;
  byte *pbVar13;
  char *pcVar14;
  void *pvVar15;
  int local_3c;
  void *pvStack_38;
  void *local_34;
  facet *local_2c;
  int local_28 [3];
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570083;
  pvStack_c = ExceptionList;
  bVar2 = *param_6;
  if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
    local_3c = 1;
  }
  else if ((bVar2 == 0x30) && ((param_6[1] == 0x78 || (param_6[1] == 0x58)))) {
    local_3c = 2;
  }
  else {
    local_3c = 0;
  }
  ExceptionList = &pvStack_c;
  this = (int *)FUN_004d4370(param_4,(int *)&local_2c);
  local_4 = 1;
  uVar7 = FUN_004d4350(&DAT_0074db10);
  this_00 = (int *)FUN_0054ca8b(this,uVar7,'\x01');
  if (this_00 == (int *)0x0) {
    iVar8 = FUN_0054caca(this);
    if ((char)iVar8 == '\0') {
      FUN_004d1030(local_28);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00584188);
    }
    this_00 = DAT_0074b89c;
    if (DAT_0074b89c == (int *)0x0) {
      local_34 = operator_new(0x18);
      local_4._0_1_ = 2;
      if (local_34 == (void *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_004d6120(local_34,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      this_00 = (int *)FUN_004d6580((int)puVar9);
      DAT_0074b89c = this_00;
    }
  }
  local_4 = 0xffffffff;
  if ((local_2c != (facet *)0x0) &&
     (pfVar10 = std::locale::facet::_Decref(local_2c), pfVar10 != (facet *)0x0)) {
    (*(code *)**(undefined4 **)pfVar10)(1);
  }
  FUN_004d6100(this_00,local_1c);
  local_4 = 3;
  uVar6 = (**(code **)(*this_00 + 8))();
  pbVar13 = param_6;
  local_2c = (facet *)CONCAT31(local_2c._1_3_,uVar6);
  pcVar14 = "";
  if (pcStack_18 != (char *)0x0) {
    pcVar14 = pcStack_18;
  }
  bVar4 = false;
  if ('\0' < *pcVar14) {
    pcVar14 = pcStack_18;
    if (pcStack_18 == (char *)0x0) {
      pcVar14 = "";
    }
    bVar4 = false;
    cVar3 = *pcVar14;
    uVar7 = param_7;
    while (((cVar3 != '\x7f' && ('\0' < cVar3)) && ((uint)(int)cVar3 < uVar7 - local_3c))) {
      uVar7 = uVar7 - (int)cVar3;
      pbVar1 = pbVar13 + uVar7;
      FUN_005580e0((undefined4 *)(pbVar13 + uVar7 + 1),(undefined4 *)pbVar1,(param_7 - uVar7) + 1);
      *pbVar1 = 0x2c;
      param_7 = param_7 + 1;
      if ('\0' < pcVar14[1]) {
        pcVar14 = pcVar14 + 1;
      }
      bVar4 = true;
      cVar3 = *pcVar14;
    }
  }
  iVar8 = local_3c;
  uVar5 = param_5;
  pvVar12 = param_3;
  uVar7 = *(uint *)((int)param_4 + 0x14);
  if (((int)uVar7 < 1) || (uVar7 <= param_7)) {
    iVar11 = 0;
  }
  else {
    iVar11 = uVar7 - param_7;
  }
  uVar7 = *(uint *)((int)param_4 + 0xc) & 0x1c0;
  pvVar15 = (void *)param_2;
  local_34 = (void *)iVar11;
  if (uVar7 != 0x40) {
    if (uVar7 == 0x100) {
      local_28[0] = param_2;
      if (local_3c != 0) {
        param_2 = local_3c;
        pbVar13 = param_6;
        do {
          local_34 = (void *)CONCAT31(local_34._1_3_,*pbVar13);
          if ((pvVar12 == (void *)0x0) ||
             (uVar7 = FUN_004d5280(pvVar12,*pbVar13), uVar7 == 0xffffffff)) {
            local_28[0] = CONCAT31(local_28[0]._1_3_,1);
          }
          pbVar13 = pbVar13 + 1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      uVar5 = param_5;
      param_6 = param_6 + iVar8;
      param_7 = param_7 - iVar8;
      param_2 = local_28[0];
      for (; param_3 = pvVar12, iVar11 != 0; iVar11 = iVar11 + -1) {
        FUN_004d60a0(&param_2,(byte)uVar5);
        pvVar12 = param_3;
      }
      local_34 = (void *)0x0;
      pvVar15 = (void *)param_2;
    }
    else {
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        local_34 = pvVar15;
        if ((pvVar12 == (void *)0x0) ||
           (uVar7 = FUN_004d5280(pvVar12,(byte)uVar5), uVar7 == 0xffffffff)) {
          local_34 = (void *)CONCAT31(local_34._1_3_,1);
        }
        pvVar15 = local_34;
      }
      local_34 = (void *)0x0;
    }
  }
  pbVar13 = param_6;
  uVar7 = param_7;
  if (bVar4) {
    while( true ) {
      pbVar13 = param_6;
      iVar11 = FUN_0055a6c0(param_6,&DAT_005b2ec4);
      param_2 = (int)pvVar15;
      param_3 = pvVar12;
      for (iVar8 = iVar11; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_004d60a0(&param_2,*pbVar13);
        pbVar13 = pbVar13 + 1;
      }
      param_6 = param_6 + iVar11;
      param_7 = param_7 - iVar11;
      if (param_7 == 0) break;
      pvVar15 = (void *)param_2;
      pvVar12 = param_3;
      if ((byte)local_2c != 0) {
        local_3c = param_2;
        pvStack_38 = param_3;
        FUN_004d60a0(&local_3c,(byte)local_2c);
        pvVar15 = (void *)local_3c;
        pvVar12 = pvStack_38;
      }
      param_6 = param_6 + 1;
      param_7 = param_7 - 1;
    }
  }
  else {
    for (; param_3 = pvVar12, param_2 = (int)pvVar15, uVar7 != 0; uVar7 = uVar7 - 1) {
      FUN_004d60a0(&param_2,*pbVar13);
      pvVar15 = (void *)param_2;
      pvVar12 = param_3;
      pbVar13 = pbVar13 + 1;
    }
  }
  uVar5 = param_5;
  pvVar15 = param_3;
  *(undefined4 *)((int)param_4 + 0x14) = 0;
  for (pvVar12 = local_34; pvVar12 != (void *)0x0; pvVar12 = (void *)((int)pvVar12 + -1)) {
    if ((pvVar15 == (void *)0x0) || (uVar7 = FUN_004d5280(pvVar15,(byte)uVar5), uVar7 == 0xffffffff)
       ) {
      param_2 = CONCAT31(param_2._1_3_,1);
    }
  }
  *param_1 = param_2;
  param_1[1] = (int)pvVar15;
  if (pcStack_18 != (char *)0x0) {
    cVar3 = pcStack_18[-1];
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_0054b339(pcStack_18 + -1);
    }
    else {
      pcStack_18[-1] = cVar3 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


