
/* ==== FUN_00493640 @ 00493640 ==== 
 * signature: undefined __fastcall FUN_00493640(void * param_1)
 * body: 00493640-004936dd;004936e1-004937db;004937df-004938ab
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004936de-004936e0 004937dc-004937de
 */

void __fastcall FUN_00493640(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e0bc;
  pvStack_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_2c,'\0');
  local_4 = 0;
  puVar3 = FUN_004932a0(local_1c,DAT_006fba5c);
  local_4._0_1_ = 1;
  FUN_004093c0(local_2c,puVar3,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_1c,'\x01');
  pvVar4 = operator_new(0x6c);
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004926e0(pvVar4,*(undefined4 *)((int)param_1 + 4));
  }
  *(int *)((int)param_1 + 0x18) = iVar5;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Not_enough_memory_for_pl_005ad344);
  }
  FUN_00492730(*(void **)((int)param_1 + 0x18),local_2c,DAT_006fbaa4);
  iVar5 = *(int *)((int)param_1 + 0x18);
  if (DAT_006fba5c < DAT_005d2ab0 + 1) {
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar9 = *(undefined4 *)(iVar5 + 0x10);
    uVar10 = *(undefined4 *)(iVar5 + 0x14);
    iVar5 = DAT_006fba5c;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar9 = *(undefined4 *)(iVar5 + 0x10);
    uVar10 = *(undefined4 *)(iVar5 + 0x14);
    iVar5 = DAT_005d2ab0;
  }
  FUN_004934b0(param_1,iVar5,uVar8,uVar9,uVar10);
  uStack_34 = 0xffffffff;
  FUN_004930f0(*(void **)((int)param_1 + 0x18),&uStack_34);
  if (0 < DAT_005d2ab0) {
    puVar6 = &DAT_005973c8;
    do {
      iVar5 = puVar6[-2];
      puVar3 = FUN_004932a0(local_1c,iVar5);
      local_4._0_1_ = 2;
      FUN_004093c0(local_2c,puVar3,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,'\x01');
      pvVar4 = operator_new(0x6c);
      if (pvVar4 == (void *)0x0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = FUN_004926e0(pvVar4,*(undefined4 *)((int)param_1 + 4));
      }
      if (iStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__Not_enough_memory_for_ra_005ad3a8);
      }
      FUN_004a5620(*(void **)((int)param_1 + 0x20),
                   *(undefined4 **)((int)*(void **)((int)param_1 + 0x20) + 8),1,&iStack_30);
      FUN_00492730(*(void **)(*(int *)(*(int *)((int)param_1 + 0x20) + 4) + iVar7 * 4),local_2c,
                   *puVar6);
      uStack_34 = 0xb4ffffff;
      FUN_004930f0(*(void **)(*(int *)(*(int *)((int)param_1 + 0x20) + 4) + iVar7 * 4),&uStack_34);
      iVar2 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x20) + 4) + iVar7 * 4);
      FUN_004934b0(param_1,iVar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                   *(undefined4 *)(iVar2 + 0x14));
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x16;
    } while (iVar7 < DAT_005d2ab0);
  }
  FUN_004935b0(param_1);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((LPVOID)(iStack_28 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


