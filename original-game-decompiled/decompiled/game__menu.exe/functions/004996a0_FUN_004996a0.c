
/* ==== FUN_004996a0 @ 004996a0 ==== 
 * signature: undefined FUN_004996a0(void)
 * body: 004996a0-004998c6
 */

void FUN_004996a0(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  iVar3 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar4 = FUN_004993b8();
  cVar2 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x34c)));
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x34c) != '\x04')) {
    FUN_004995e0(param_1);
    FUN_004993b8();
    uVar5 = FUN_0048d8c8();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x20))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x338));
    FUN_004995e0(param_1);
    FUN_004993b8();
    uVar5 = FUN_0048d90c();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x24))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x33c));
    FUN_004995e0(param_1);
    FUN_004993b8();
    uVar5 = FUN_0048d950();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x28))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x344));
    FUN_004995e0(param_1);
    FUN_004993b8();
    uVar5 = FUN_0048d994();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x2c))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x340));
  }
  else {
    FUN_004993b8();
    uVar5 = FUN_0048d8c8();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x20))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x338));
    FUN_004993b8();
    uVar5 = FUN_0048d90c();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x24))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x33c));
    FUN_004993b8();
    uVar5 = FUN_0048d950();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x28))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x344));
    FUN_004993b8();
    uVar5 = FUN_0048d994();
    if (SCARRY4(uVar5,*(int *)(iVar3 + 0x2c))) {
      thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x340));
  }
  if (*(char *)(param_1 + 0x34c) == '\x04') {
    iVar3 = FUN_004993b8();
    lVar1 = (longlong)*(int *)(iVar3 + 0x10) * 9;
    uVar5 = (uint)lVar1;
    if ((int)uVar5 != lVar1) {
      thunk_FUN_00402808(uVar5);
    }
    uVar5 = FUN_00402ad4();
    if ((int)uVar5 >> 0x1f != extraout_EDX_00) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x348),uVar5,1);
  }
  else {
    iVar3 = FUN_004993b8();
    lVar1 = (longlong)*(int *)(iVar3 + 0x10) * 9;
    uVar5 = (uint)lVar1;
    if ((int)uVar5 != lVar1) {
      thunk_FUN_00402808(uVar5);
    }
    uVar5 = FUN_00402ad4();
    if ((int)uVar5 >> 0x1f != extraout_EDX_01) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    FUN_0049180c(*(undefined4 *)(param_1 + 0x348),uVar5,0);
  }
  return;
}


