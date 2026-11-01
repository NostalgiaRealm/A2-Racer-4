
/* ==== FUN_00431320 @ 00431320 ==== 
 * signature: uint __cdecl FUN_00431320(int param_1, undefined4 param_2, char * param_3)
 * body: 00431320-004316c9
 */

uint __cdecl FUN_00431320(int param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int local_34;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056a380;
  local_c = ExceptionList;
  local_4 = 0;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  local_4._0_1_ = 1;
  pcVar10 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar10 = "";
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(local_2c,'\0');
  uVar6 = 0xffffffff;
  pcVar12 = pcVar10;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_2c,(undefined4 *)pcVar10,~uVar6 - 1);
  local_4._0_1_ = 2;
  FUN_00424660(&DAT_005d3458,(int)local_2c);
  local_4._0_1_ = 1;
  FUN_004028f0(local_2c,'\x01');
  iVar7 = 0;
  local_34 = 0;
  if (DAT_006c32f0 != -1) {
    puVar4 = &DAT_006c32f0;
    do {
      local_34 = iVar7;
      if (0x6c34f7 < (int)puVar4) break;
      piVar1 = puVar4 + 0xd;
      puVar4 = puVar4 + 0xd;
      iVar7 = iVar7 + 1;
      local_34 = iVar7;
    } while (*piVar1 != -1);
  }
  iVar7 = FUN_00424660(&DAT_005d3458,(int)&param_2);
  pcVar10 = *(char **)(iVar7 + 0x14);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  iVar7 = FUN_004b75a0(&DAT_00712130,pcVar10);
  iVar11 = DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  uVar6 = FUN_004a7790(*(undefined4 *)(iVar11 + 0x50),*(undefined4 *)(iVar11 + 0x54),
                       *(undefined4 *)(iVar11 + 0x58),*(undefined4 *)(iVar11 + 0x74),
                       *(undefined4 *)(iVar11 + 0x78),*(undefined4 *)(iVar11 + 0x7c),iVar7,0,
                       FUN_004319a0,0,0);
  if (0x7fffffff < uVar6) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(&param_2,'\x01');
    ExceptionList = local_c;
    return 0xffffffff;
  }
  iVar7 = uVar6 * 0xf0;
  *(undefined4 *)(DAT_00715e50 + 0x1c + iVar7) = 0x1f;
  *(undefined4 *)(DAT_00715e50 + 0x34 + iVar7) =
       *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
  *(code **)(DAT_00715e50 + 0x70 + iVar7) = FUN_0042d820;
  *(code **)(DAT_00715e50 + 0x78 + iVar7) = FUN_00431810;
  FUN_00429320(uVar6);
  FUN_004292e0(uVar6);
  FUN_004a7190(uVar6);
  FUN_0042a7f0(uVar6);
  pcVar10 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar10 = "";
  }
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(local_2c,'\0');
  uVar8 = 0xffffffff;
  pcVar12 = pcVar10;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8 - 1;
  uVar5 = FUN_00402a00(local_2c,uVar8,'\x01');
  if ((char)uVar5 != '\0') {
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *local_28 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(local_2c,uVar8);
  }
  local_4._0_1_ = 3;
  iVar11 = FUN_00424660(&DAT_005d3458,(int)local_2c);
  fVar3 = *(float *)(iVar11 + 0x44);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(local_2c,'\x01');
  FUN_004353e0(fVar3,uVar6);
  iVar11 = FUN_004a8600((void *)(DAT_00715e50 + iVar7),0);
  *(undefined1 *)(DAT_0073b0d0 + iVar11 * 0xa9 + 0x90) = 0;
  iVar11 = FUN_004a8600((void *)(DAT_00715e50 + iVar7),1);
  *(undefined1 *)(DAT_0073b0d0 + iVar11 * 0xa9 + 0x90) = 0;
  if ((DAT_006fb940 != 0) && (DAT_006fb8d0 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar7) * 0xa9 + 0xa5) = 3;
  }
  FUN_0042faa0(&DAT_006c32f0 + local_34 * 0xd,uVar6,param_1);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((LPVOID)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = param_3[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(param_3 + -1);
    }
    else {
      param_3[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar6;
}


