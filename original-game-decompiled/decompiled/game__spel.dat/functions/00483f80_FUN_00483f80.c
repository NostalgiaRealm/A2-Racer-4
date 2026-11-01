
/* ==== FUN_00483f80 @ 00483f80 ==== 
 * signature: undefined __fastcall FUN_00483f80(undefined4 * param_1)
 * body: 00483f80-004840b0
 */

void __fastcall FUN_00483f80(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056cc5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00576e14;
  local_4 = 1;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))(1);
  }
  param_1[1] = 0;
  iVar4 = (**(code **)param_1[2])();
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      pvVar2 = *(LPVOID *)(*(int *)(param_1[3] + 4) + iVar5 * 4);
      if (pvVar2 != (LPVOID)0x0) {
        iVar3 = *(int *)((int)pvVar2 + 0x80c);
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar3 + -1));
          }
          else {
            *(char *)(iVar3 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)pvVar2 + 0x80c) = 0;
        *(undefined4 *)((int)pvVar2 + 0x810) = 0;
        *(undefined4 *)((int)pvVar2 + 0x814) = 0;
        FUN_0054b339(pvVar2);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(param_1[3] + 4) + -4 + iVar5 * 4) = 0;
    } while (iVar5 < iVar4);
  }
  pvVar2 = (LPVOID)param_1[5];
  param_1[4] = &PTR_FUN_00576e18;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  param_1[5] = 0;
  pvVar2 = (LPVOID)param_1[3];
  param_1[2] = &PTR_FUN_00576e28;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


