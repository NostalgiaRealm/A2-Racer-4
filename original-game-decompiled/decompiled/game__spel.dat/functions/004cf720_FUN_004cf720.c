
/* ==== FUN_004cf720 @ 004cf720 ==== 
 * signature: undefined __thiscall FUN_004cf720(void * this, undefined1 * param_1)
 * body: 004cf720-004cfa2a
 */

void __thiscall FUN_004cf720(void *this,undefined1 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *this_00;
  uint uVar4;
  uint uVar5;
  LPCSTR pCVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *in_stack_00000018;
  undefined4 in_stack_ffffff38;
  undefined1 uVar10;
  undefined1 local_c0 [4];
  undefined4 *local_bc;
  uint local_b8;
  undefined ***pppuStack_b4;
  undefined4 local_b0;
  int local_ac;
  char *local_a8;
  undefined4 uStack_a4;
  undefined *local_9c;
  int iStack_98;
  undefined1 local_94 [8];
  int aiStack_8c [19];
  undefined **local_40 [4];
  undefined **appuStack_30 [9];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar10 = (undefined1)((uint)in_stack_ffffff38 >> 0x18);
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f93d;
  pvStack_c = ExceptionList;
  local_b0 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 4) = 0;
  pCVar6 = "";
  if (*(LPCSTR *)(param_1 + 4) != (LPCSTR)0x0) {
    pCVar6 = *(LPCSTR *)(param_1 + 4);
  }
  local_9c = &DAT_005777a8;
  FUN_004cfa30(local_40);
  local_40[0] = &PTR_FUN_00578ebc;
  local_b0 = 1;
  local_4 = 0;
  FUN_004cfb80(&local_9c,local_94,'\0',0);
  local_4 = 1;
  FUN_004d0ac0(local_94,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_FUN_005777a4;
  pvVar2 = FUN_004d0c50(local_94,pCVar6,0x21);
  if (pvVar2 == (void *)0x0) {
    FUN_004d0a40();
  }
  local_4 = 3;
  if (*(int *)((int)&iStack_98 + *(int *)(local_9c + 4)) != 0) {
    local_c0[0] = uVar10;
    FUN_004028f0(local_c0,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_00712694;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_c0,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_00712694;
      puVar9 = local_bc;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_bc + uVar4) = 0;
      local_b8 = uVar4;
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    local_ac = CONCAT31(local_ac._1_3_,uVar10);
    FUN_004028f0(&local_ac,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = s_Cannot_open_objectfile_005b6efc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(&local_ac,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar8 = s_Cannot_open_objectfile_005b6efc;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_a8 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        local_a8 = local_a8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_a8 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        local_a8 = local_a8 + 1;
      }
      FUN_004029e0(&local_ac,uVar4);
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004d6900(0xbbe,(undefined1 *)&local_ac,param_1,local_c0);
    FUN_004028f0(&local_9c,'\x01');
    if (local_ac != 0) {
      cVar1 = *(char *)(local_ac + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_ac + -1));
      }
      else {
        *(char *)(local_ac + -1) = cVar1 + -1;
      }
    }
    local_ac = 0;
    local_a8 = (char *)0x0;
    uStack_a4 = 0;
    this = pppuStack_b4;
  }
  pppuStack_b4 = operator_new(0xcc);
  if (pppuStack_b4 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_004d3570(pppuStack_b4,aiStack_8c,in_stack_00000018);
  }
  *(int **)((int)this + 4) = this_00;
  if (DAT_0074b8ac != 0) {
    FUN_004d4120(DAT_0074b8ac,this_00);
  }
  FUN_004d38c0(this_00,s__init_005b6ef4);
  FUN_004d38c0(this_00,s_OnLoad_005b6eec);
  pppuStack_b4 = appuStack_30;
  *(undefined ***)((int)aiStack_8c + *(int *)(aiStack_8c[0] + 4)) = &PTR_FUN_005777a4;
  FUN_004d0010(aiStack_8c + 2);
  *(undefined ***)((int)aiStack_8c + *(int *)(aiStack_8c[0] + 4)) = &PTR_FUN_00578eac;
  appuStack_30[0] = &PTR_FUN_00578ebc;
  FUN_0054c949();
  ExceptionList = param_1;
  return;
}


