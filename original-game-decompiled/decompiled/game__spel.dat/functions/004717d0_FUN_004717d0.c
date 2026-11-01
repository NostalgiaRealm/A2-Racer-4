
/* ==== FUN_004717d0 @ 004717d0 ==== 
 * signature: undefined __fastcall FUN_004717d0(void * param_1)
 * body: 004717d0-00471bcf
 */

void __fastcall FUN_004717d0(void *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  char *local_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b2da;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_1c,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Console_Back_005a8cc4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)s_Console_Back_005a8cc4,~uVar6 - 1);
  puVar10 = local_1c;
  local_4 = 0;
  pvVar2 = (void *)FUN_004ea0c0();
  iVar3 = FUN_004eaf50(pvVar2,(float)puVar10);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if (((char)iVar3 != '\0') && (*(int *)((int)param_1 + 0x1c) != 0)) {
    pvVar2 = (void *)((int)param_1 + 0x14);
    FUN_00471de0(pvVar2);
    if (*(int *)((int)param_1 + 0x18) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18);
    }
    uVar6 = iVar3 - 1;
    FUN_00471de0(pvVar2);
    if (uVar6 != 0) {
      uVar6 = uVar6 - *(int *)((int)param_1 + 0x18);
    }
    FUN_0040f800(pvVar2,uVar6,1);
  }
  FUN_004028f0(local_1c,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Console_Tab_005a8cd4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar4 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar8 = s_Console_Tab_005a8cd4;
    pcVar9 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004029e0(local_1c,uVar6);
  }
  puVar10 = local_1c;
  local_4 = 1;
  pvVar2 = (void *)FUN_004ea0c0();
  iVar3 = FUN_004eaf50(pvVar2,(float)puVar10);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if ((char)iVar3 != '\0') {
    uVar6 = FUN_00473430((void *)((int)param_1 + 0x30),(int)param_1 + 0x14,&local_30);
    if ((char)uVar6 != '\0') {
      pvVar2 = (void *)FUN_00472920(local_30);
      FUN_004093c0((void *)((int)param_1 + 0x14),pvVar2,0,0xffffffff);
    }
  }
  FUN_004028f0(local_1c,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Console_Return_005a8ce0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar4 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar8 = s_Console_Return_005a8ce0;
    pcVar9 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004029e0(local_1c,uVar6);
  }
  puVar10 = local_1c;
  local_4 = 2;
  pvVar2 = (void *)FUN_004ea0c0();
  iVar3 = FUN_004eaf50(pvVar2,(float)puVar10);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if ((char)iVar3 != '\0') {
    FUN_004713c0(param_1);
  }
  FUN_004028f0(local_1c,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Console_Up_005a8cf0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar4 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar8 = s_Console_Up_005a8cf0;
    pcVar9 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004029e0(local_1c,uVar6);
  }
  puVar10 = local_1c;
  local_4 = 3;
  pvVar2 = (void *)FUN_004ea0c0();
  iVar3 = FUN_004eaf50(pvVar2,(float)puVar10);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if ((char)iVar3 != '\0') {
    iVar3 = *(int *)((int)param_1 + 0x24) + -1;
    *(int *)((int)param_1 + 0x24) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
    iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 4))();
    if (iVar3 <= *(int *)((int)param_1 + 0x24)) {
      iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 4))();
      *(int *)((int)param_1 + 0x24) = iVar3 + -1;
    }
    iVar3 = *(int *)((int)param_1 + 0x24);
    piVar5 = (int *)FUN_00468530((void *)((int)param_1 + 8),&uStack_28);
    local_30 = *piVar5;
    if (0 < iVar3) {
      do {
        FUN_00448fd0(&local_30,&uStack_24);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004093c0((void *)((int)param_1 + 0x14),(void *)(local_30 + 8),0,0xffffffff);
  }
  FUN_004028f0(local_1c,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = s_Console_Down_005a8cfc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar4 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar8 = s_Console_Down_005a8cfc;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_18 = local_18 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(local_1c,uVar6);
  }
  puVar10 = local_1c;
  local_4 = 4;
  pvVar2 = (void *)FUN_004ea0c0();
  iVar3 = FUN_004eaf50(pvVar2,(float)puVar10);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if ((char)iVar3 != '\0') {
    iVar3 = *(int *)((int)param_1 + 0x24) + 1;
    *(int *)((int)param_1 + 0x24) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)((int)param_1 + 0x24) = 0;
    }
    iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 4))();
    if (iVar3 <= *(int *)((int)param_1 + 0x24)) {
      iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 4))();
      *(int *)((int)param_1 + 0x24) = iVar3 + -1;
    }
    iVar3 = *(int *)((int)param_1 + 0x24);
    iStack_2c = **(int **)((int)param_1 + 0xc);
    if (0 < iVar3) {
      do {
        FUN_00448fd0(&iStack_2c,&uStack_20);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004093c0((void *)((int)param_1 + 0x14),(void *)(iStack_2c + 8),0,0xffffffff);
  }
  ExceptionList = pvStack_c;
  return;
}


