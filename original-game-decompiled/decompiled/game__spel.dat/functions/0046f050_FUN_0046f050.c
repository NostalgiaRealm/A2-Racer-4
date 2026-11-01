
/* ==== FUN_0046f050 @ 0046f050 ==== 
 * signature: undefined __stdcall FUN_0046f050(undefined4 param_1)
 * body: 0046f050-0046f290
 */

void FUN_0046f050(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float *pfVar11;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b00b;
  local_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  uVar4 = 0xffffffff;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  pcVar7 = PTR_s_CarHandbrake_005a7dcc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_2c,(undefined4 *)PTR_s_CarHandbrake_005a7dcc,~uVar4 - 1);
  puVar10 = local_2c;
  pfVar11 = (float *)0x0;
  local_4 = 0;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar9 = FUN_004eadd0(pvVar2,(int)puVar10,pfVar11);
  local_4 = 0xffffffff;
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_28 + -1));
    }
    else {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
    }
  }
  FUN_00403040(&DAT_006fbabc,(float10)0.0 < fVar9);
  puVar6 = (undefined4 *)PTR_DAT_005a7dc4;
  local_2c[0] = (undefined1)param_1;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar4) = 0;
    local_24 = uVar4;
  }
  puVar10 = local_2c;
  pfVar11 = (float *)0x0;
  local_4 = 1;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar9 = FUN_004eadd0(pvVar2,(int)puVar10,pfVar11);
  local_4 = 0xffffffff;
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_28 + -1));
    }
    else {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
    }
  }
  FUN_0044e970(param_1,(uint)((float10)0.0 < fVar9));
  puVar6 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
  local_1c[0] = (undefined1)param_1;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar4) = 0;
    local_14 = uVar4;
  }
  puVar10 = local_1c;
  pfVar11 = (float *)0x0;
  local_4 = 2;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar9 = FUN_004eadd0(pvVar2,(int)puVar10,pfVar11);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if ((float10)0.0 < fVar9) {
    FUN_00450950(s_HORN2_005a89a8,0);
  }
  ExceptionList = local_c;
  return;
}


