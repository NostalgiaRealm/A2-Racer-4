
/* ==== FUN_0040ea90 @ 0040ea90 ==== 
 * signature: undefined __fastcall FUN_0040ea90(int param_1)
 * body: 0040ea90-0040ebdf
 */

void __fastcall FUN_0040ea90(int param_1)

{
  char cVar1;
  LPVOID pvVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_c = ExceptionList;
  pcStack_8 = FUN_005698fc;
  pvVar2 = *(LPVOID *)(param_1 + 0x28);
  local_4 = 2;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x24) = &PTR_FUN_005763c8;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar3 = *(void **)((int)pvVar2 + 8);
    for (pvVar5 = *(void **)((int)pvVar2 + 4); pvVar5 != pvVar3;
        pvVar5 = (void *)((int)pvVar5 + 0x54)) {
      FUN_00411300(pvVar5,0);
    }
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  pvVar2 = *(LPVOID *)(param_1 + 0x20);
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x1c) = &PTR_FUN_005763d8;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar3 = *(void **)((int)pvVar2 + 8);
    for (pvVar5 = *(void **)((int)pvVar2 + 4); pvVar5 != pvVar3;
        pvVar5 = (void *)((int)pvVar5 + 0x14)) {
      FUN_004112e0(pvVar5,0);
    }
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  pvVar2 = *(LPVOID *)(param_1 + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0x14) = &PTR_FUN_005763e8;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar3 = *(void **)((int)pvVar2 + 8);
    for (pvVar5 = *(void **)((int)pvVar2 + 4); pvVar5 != pvVar3;
        pvVar5 = (void *)((int)pvVar5 + 0x30)) {
      FUN_004112c0(pvVar5,0);
    }
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


