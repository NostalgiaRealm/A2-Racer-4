
/* ==== FUN_00416ad0 @ 00416ad0 ==== 
 * signature: undefined __fastcall FUN_00416ad0(int param_1)
 * body: 00416ad0-00416bd0
 */

void __fastcall FUN_00416ad0(int param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  local_c = ExceptionList;
  pcStack_8 = FUN_00569b41;
  pvVar2 = *(LPVOID *)(param_1 + 0x24);
  local_4 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_005763f8;
  if (pvVar2 != (LPVOID)0x0) {
    iVar3 = *(int *)((int)pvVar2 + 8);
    for (iVar4 = *(int *)((int)pvVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
      FUN_0041e410();
    }
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  pvVar2 = *(LPVOID *)(param_1 + 0x1c);
  local_4 = local_4 & 0xffffff00;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00576408;
  if (pvVar2 != (LPVOID)0x0) {
    iVar3 = *(int *)((int)pvVar2 + 8);
    for (iVar4 = *(int *)((int)pvVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x18) {
      FUN_0041e3a0(iVar4);
    }
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


