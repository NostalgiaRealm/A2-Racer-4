
/* ==== FUN_004d4fc0 @ 004d4fc0 ==== 
 * signature: undefined4 * __stdcall FUN_004d4fc0(undefined4 * param_1, void * param_2, void * param_3, void * param_4, undefined4 param_5, char param_6)
 * body: 004d4fc0-004d5275
 */

undefined4 *
FUN_004d4fc0(undefined4 *param_1,void *param_2,void *param_3,void *param_4,undefined4 param_5,
            char param_6)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int *this;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  facet *pfVar9;
  undefined4 uVar10;
  byte *pbVar11;
  bool bVar12;
  byte bVar13;
  facet *local_30;
  void *local_2c;
  void *pvStack_28;
  char local_1c [4];
  byte *pbStack_18;
  uint uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvVar1 = param_4;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570023;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (int *)FUN_004d4370(param_4,(int *)&local_30);
  local_4 = 1;
  uVar5 = FUN_004d4350(&DAT_0074db10);
  pvVar6 = (void *)FUN_0054ca8b(this,uVar5,'\x01');
  if (pvVar6 == (void *)0x0) {
    iVar7 = FUN_0054caca(this);
    if ((char)iVar7 == '\0') {
      FUN_004d1030(&local_2c);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_2c,&DAT_00584188);
    }
    pvVar6 = DAT_0074b89c;
    if (DAT_0074b89c == (void *)0x0) {
      local_2c = operator_new(0x18);
      local_4._0_1_ = 2;
      if (local_2c == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = FUN_004d6120(local_2c,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      pvVar6 = (void *)FUN_004d6580((int)puVar8);
      DAT_0074b89c = pvVar6;
    }
  }
  local_4 = 0xffffffff;
  if ((local_30 != (facet *)0x0) &&
     (pfVar9 = std::locale::facet::_Decref(local_30), pfVar9 != (facet *)0x0)) {
    (*(code *)**(undefined4 **)pfVar9)(1);
  }
  local_1c[0] = param_6;
  FUN_004028f0(local_1c,'\0');
  local_4 = 3;
  if ((*(uint *)((int)pvVar1 + 0xc) & 0x4000) == 0) {
    bVar12 = param_6 != '\0';
    if (-uStack_14 - 1 < 2) {
      FUN_0054b1b4();
    }
    uVar5 = uStack_14 + 1;
    uVar10 = FUN_00402a00(local_1c,uVar5,'\0');
    if ((char)uVar10 != '\0') {
      pbStack_18[uStack_14] = bVar12 + 0x30;
      FUN_004029e0(local_1c,uVar5);
    }
  }
  else {
    if (param_6 == '\0') {
      pvVar6 = (void *)FUN_004d6060(pvVar6,&local_2c);
      local_4._0_1_ = 5;
      FUN_004093c0(local_1c,pvVar6,0,0xffffffff);
    }
    else {
      pvVar6 = (void *)FUN_004d6080(pvVar6,&local_2c);
      local_4._0_1_ = 4;
      FUN_004093c0(local_1c,pvVar6,0,0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004028f0(&local_2c,'\x01');
  }
  uVar5 = *(uint *)((int)pvVar1 + 0x14);
  if (((int)uVar5 < 1) || (uVar5 <= uStack_14)) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar5 - uStack_14;
  }
  bVar13 = (byte)param_5;
  pvVar3 = param_2;
  pvVar4 = param_3;
  pvVar6 = param_2;
  pvVar2 = param_3;
  if ((*(uint *)((int)pvVar1 + 0xc) & 0x1c0) != 0x40) {
    for (; param_3 = pvVar4, param_2 = pvVar3, local_2c = param_2, pvStack_28 = param_3, iVar7 != 0;
        iVar7 = iVar7 + -1) {
      param_2 = pvVar6;
      param_3 = pvVar2;
      FUN_004d60a0(&local_2c,bVar13);
      pvVar3 = local_2c;
      pvVar4 = pvStack_28;
      pvVar6 = param_2;
      pvVar2 = param_3;
    }
    iVar7 = 0;
  }
  pvVar1 = param_3;
  uVar5 = uStack_14;
  pbVar11 = pbStack_18;
  if (pbStack_18 == (byte *)0x0) {
    pbVar11 = &DAT_0057629c;
  }
  for (; param_3 = pvVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
    FUN_004d60a0(&param_2,*pbVar11);
    pvVar1 = param_3;
    pbVar11 = pbVar11 + 1;
  }
  *(undefined4 *)((int)param_4 + 0x14) = 0;
  local_2c = param_2;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    if ((pvVar1 == (void *)0x0) || (uVar5 = FUN_004d5280(pvVar1,bVar13), uVar5 == 0xffffffff)) {
      local_2c = (void *)CONCAT31(local_2c._1_3_,1);
    }
  }
  *param_1 = local_2c;
  param_1[1] = pvVar1;
  FUN_004028f0(local_1c,'\x01');
  ExceptionList = pvStack_c;
  return param_1;
}


