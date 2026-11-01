
/* ==== FUN_004d80c0 @ 004d80c0 ==== 
 * signature: undefined __stdcall FUN_004d80c0(void)
 * body: 004d80c0-004d88b7
 */

/* WARNING: Removing unreachable block (ram,0x004d8674) */
/* WARNING: Removing unreachable block (ram,0x004d8692) */
/* WARNING: Removing unreachable block (ram,0x004d869e) */
/* WARNING: Removing unreachable block (ram,0x004d86a5) */
/* WARNING: Removing unreachable block (ram,0x004d8862) */
/* WARNING: Removing unreachable block (ram,0x004d8880) */
/* WARNING: Removing unreachable block (ram,0x004d888c) */
/* WARNING: Removing unreachable block (ram,0x004d8893) */

void FUN_004d80c0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 in_stack_ffffffc0;
  undefined4 *in_stack_ffffffc4;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint in_stack_ffffffc8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005703d4;
  local_c = ExceptionList;
  if ((DAT_0074b8c4 == (undefined4 *)0x0) ||
     (((int)DAT_0074b8c8 - (int)DAT_0074b8c4 & 0xfffffffcU) == 0)) {
    uVar9 = 0x4d8100;
    ExceptionList = &local_c;
    puVar1 = operator_new(0x1c);
    local_4 = 0;
    local_14 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7a20;
      local_10 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,&DAT_005b7154,&local_1a);
      local_18 = FUN_004d18d0(puVar1,in_stack_ffffffc0,in_stack_ffffffc4,in_stack_ffffffc8,uVar9,
                              pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d815f;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d8166;
    pvVar2 = operator_new(0x1c);
    local_4 = 1;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7a60;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_randperc_005b7148,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d81c2;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d81c9;
    pvVar2 = operator_new(0x1c);
    local_4 = 2;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7930;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_srand_005b7140,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d8225;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d822c;
    pvVar2 = operator_new(0x1c);
    local_4 = 3;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7960;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_clock_005b7138,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d8288;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d828f;
    pvVar2 = operator_new(0x1c);
    local_4 = 4;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7990;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_kbhit_005b7130,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d82ec;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d82f3;
    pvVar2 = operator_new(0x1c);
    local_4 = 5;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d79c0;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_getch_005b7128,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d834f;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d8356;
    pvVar2 = operator_new(0x1c);
    local_4 = 6;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d79f0;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,&DAT_005b7120,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d83b2;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d83b9;
    pvVar2 = operator_new(0x1c);
    local_4 = 7;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7ac0;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_strleft_005b7118,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d8415;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d841c;
    pvVar2 = operator_new(0x1c);
    local_4 = 8;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7d20;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_strright_005b710c,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d8478;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d847f;
    pvVar2 = operator_new(0x1c);
    local_4 = 9;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7e50;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_strmid_005b7104,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined4 *)0x4d84db;
    puVar1 = DAT_0074b8c8;
    FUN_004a5620(&DAT_0074b8c0,DAT_0074b8c8,1,&local_18);
    uVar9 = 0x4d84e2;
    pvVar2 = operator_new(0x1c);
    local_4 = 10;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7bb0;
      local_14 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,s_strfind_005b70fc,&local_1a);
      local_18 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar7,(uint)puVar1,uVar9,pcVar10);
    }
    puVar1 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    if ((int)DAT_0074b8cc - (int)DAT_0074b8c8 >> 2 == 0) {
      uVar3 = FUN_00492480(0x74b8c0);
      if (uVar3 < 2) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_00492480(0x74b8c0);
      }
      iVar5 = FUN_00492480(0x74b8c0);
      iVar5 = iVar5 + iVar4;
      iVar4 = iVar5;
      if (iVar5 < 0) {
        iVar4 = 0;
      }
      puVar7 = operator_new(iVar4 * 4);
      puVar6 = FUN_004de170(DAT_0074b8c4,puVar1,puVar7);
      FUN_004de280(puVar6,1,&local_18);
      puVar8 = (undefined4 *)0x4d85c5;
      FUN_004de170(puVar1,DAT_0074b8c8,puVar6 + 1);
      puVar6 = (undefined4 *)0x4d85dc;
      FUN_0042f530();
      FUN_0054b339(DAT_0074b8c4);
      DAT_0074b8cc = puVar7 + iVar5;
      iVar4 = FUN_00492480(0x74b8c0);
      DAT_0074b8c8 = puVar7 + iVar4 + 1;
      DAT_0074b8c4 = puVar7;
    }
    else {
      FUN_004de170(DAT_0074b8c8,DAT_0074b8c8,DAT_0074b8c8 + 1);
      puVar8 = (undefined4 *)0x4d865a;
      puVar6 = DAT_0074b8c8;
      FUN_004de280(DAT_0074b8c8,1 - ((int)DAT_0074b8c8 - (int)puVar1 >> 2),&local_18);
      puVar7 = DAT_0074b8c8;
      for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
        *puVar1 = local_18;
      }
      DAT_0074b8c8 = DAT_0074b8c8 + 1;
    }
    uVar9 = 0x4d86be;
    pvVar2 = operator_new(0x1c);
    local_4 = 0xb;
    local_10 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = FUN_004d7fc0;
      local_18 = (undefined4 *)&stack0xffffffc0;
      FUN_004900f0(&stack0xffffffc0,&DAT_005b70f4,&local_19);
      local_14 = FUN_004d18d0(pvVar2,in_stack_ffffffc0,puVar8,(uint)puVar6,uVar9,pcVar10);
    }
    puVar1 = DAT_0074b8c8;
    local_4 = 0xffffffff;
    if ((int)DAT_0074b8cc - (int)DAT_0074b8c8 >> 2 == 0) {
      if ((DAT_0074b8c4 == (undefined4 *)0x0) ||
         ((uint)((int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2) < 2)) {
        iVar4 = 1;
      }
      else {
        iVar4 = (int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2;
      }
      if (DAT_0074b8c4 == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)DAT_0074b8c8 - (int)DAT_0074b8c4 >> 2;
      }
      local_18 = (undefined4 *)(iVar5 + iVar4);
      puVar7 = local_18;
      if ((int)local_18 < 0) {
        puVar7 = (undefined4 *)0x0;
      }
      puVar8 = operator_new((int)puVar7 * 4);
      puVar7 = puVar8;
      for (puVar6 = DAT_0074b8c4; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        FUN_004d2770(puVar7,puVar6);
        puVar7 = puVar7 + 1;
      }
      FUN_004d2770(puVar7,&local_14);
      puVar6 = DAT_0074b8c8;
      for (; puVar1 != puVar6; puVar1 = puVar1 + 1) {
        puVar7 = puVar7 + 1;
        FUN_004d2770(puVar7,puVar1);
      }
      local_10 = DAT_0074b8c4;
      FUN_0054b339(DAT_0074b8c4);
      DAT_0074b8cc = puVar8 + (int)local_18;
      iVar4 = FUN_00492480(0x74b8c0);
      DAT_0074b8c4 = puVar8;
      DAT_0074b8c8 = puVar8 + iVar4 + 1;
      ExceptionList = local_c;
      return;
    }
    FUN_004de170(DAT_0074b8c8,DAT_0074b8c8,DAT_0074b8c8 + 1);
    FUN_004de280(DAT_0074b8c8,1 - ((int)DAT_0074b8c8 - (int)puVar1 >> 2),&local_14);
    puVar7 = DAT_0074b8c8;
    for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
      *puVar1 = local_14;
    }
    DAT_0074b8c8 = DAT_0074b8c8 + 1;
  }
  ExceptionList = local_c;
  return;
}


