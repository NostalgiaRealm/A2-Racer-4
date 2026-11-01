
/* ==== FUN_0047bf40 @ 0047bf40 ==== 
 * signature: undefined __fastcall FUN_0047bf40(undefined4 * param_1)
 * body: 0047bf40-0047c024
 */

void __fastcall FUN_0047bf40(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056bab5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00576ac8;
  local_4 = 1;
  iVar4 = (**(code **)param_1[0x1d])();
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      piVar2 = *(int **)(*(int *)(param_1[0x1e] + 4) + iVar5 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(1);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(param_1[0x1e] + 4) + -4 + iVar5 * 4) = 0;
    } while (iVar5 < iVar4);
  }
  pvVar3 = (LPVOID)param_1[0x1e];
  param_1[0x1d] = &PTR_FUN_00576b04;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar3 + 4));
    *(undefined4 *)((int)pvVar3 + 4) = 0;
    *(undefined4 *)((int)pvVar3 + 8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xc) = 0;
    FUN_0054b339(pvVar3);
  }
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_00576a98;
  iVar4 = param_1[0xe];
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  ExceptionList = pvStack_c;
  return;
}


