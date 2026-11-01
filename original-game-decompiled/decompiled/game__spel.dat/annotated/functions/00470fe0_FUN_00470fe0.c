
/* ==== FUN_00470fe0 @ 00470fe0 ==== 
 * signature: undefined __fastcall FUN_00470fe0(int param_1)
 * body: 00470fe0-00471231
 */

void __fastcall FUN_00470fe0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  float *pfVar11;
  float local_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b267;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_Console_Activate_005a8c28;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_Console_Activate_005a8c28;
    pcVar8 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_28[uVar5] = '\0';
    local_24 = uVar5;
  }
  pfVar11 = &local_30;
  puVar10 = local_2c;
  local_4 = 0;
  pvVar3 = (void *)FUN_004ea0c0();
  FUN_004eadd0(pvVar3,(int)puVar10,pfVar11);
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  if (DAT_006fb950 != 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_004028f0(local_1c,'\0');
      uVar5 = 0xffffffff;
      pcVar7 = s_Console_Activate_005a8c50;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      uVar2 = FUN_00402a00(local_1c,uVar5,'\x01');
      if ((char)uVar2 != '\0') {
        pcVar7 = s_Console_Activate_005a8c50;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)local_18 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          local_18 = local_18 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *local_18 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          local_18 = local_18 + 1;
        }
        FUN_004029e0(local_1c,uVar5);
      }
      puVar10 = local_1c;
      local_4 = 2;
      pvVar3 = (void *)FUN_004ea0c0();
      iVar4 = FUN_004eaf80(pvVar3,(float)puVar10);
      local_4 = 0xffffffff;
      FUN_004028f0(local_1c,'\x01');
      if ((char)iVar4 != '\0') {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
    else {
      uVar5 = 0xffffffff;
      local_28 = (char *)0x0;
      pcVar7 = s_Console_DeActivate_005a8c3c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_00402940(local_2c,(undefined4 *)s_Console_DeActivate_005a8c3c,~uVar5 - 1);
      puVar10 = local_2c;
      local_4 = 1;
      pvVar3 = (void *)FUN_004ea0c0();
      iVar4 = FUN_004eaf80(pvVar3,(float)puVar10);
      local_4 = 0xffffffff;
      if (local_28 != (char *)0x0) {
        cVar1 = *(char *)((int)local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_28 + -1));
        }
        else {
          *(char *)((int)local_28 + -1) = cVar1 + -1;
        }
      }
      if ((char)iVar4 != '\0') {
        *(undefined1 *)(param_1 + 0x28) = 0;
        FUN_00402c30((void *)(param_1 + 0x14));
        iVar4 = *(int *)(param_1 + 0x1c);
        iVar9 = -1;
        if (iVar4 != -1) {
          iVar9 = iVar4;
        }
        if (iVar9 != 0) {
          FUN_005580e0(*(undefined4 **)(param_1 + 0x18),
                       (undefined4 *)((int)*(undefined4 **)(param_1 + 0x18) + iVar9),iVar4 - iVar9);
          uVar5 = *(int *)(param_1 + 0x1c) - iVar9;
          uVar2 = FUN_00402a00((void *)(param_1 + 0x14),uVar5,'\0');
          if ((char)uVar2 != '\0') {
            *(uint *)(param_1 + 0x1c) = uVar5;
            *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar5) = 0;
            ExceptionList = local_c;
            return;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


