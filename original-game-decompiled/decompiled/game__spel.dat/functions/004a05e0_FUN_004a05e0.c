
/* ==== FUN_004a05e0 @ 004a05e0 ==== 
 * signature: undefined __fastcall FUN_004a05e0(int param_1)
 * body: 004a05e0-004a0668
 */

void __fastcall FUN_004a05e0(int param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ec58;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004f5b00(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


