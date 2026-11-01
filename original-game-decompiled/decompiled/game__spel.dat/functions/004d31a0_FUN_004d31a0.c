
/* ==== FUN_004d31a0 @ 004d31a0 ==== 
 * signature: undefined __fastcall FUN_004d31a0(int param_1)
 * body: 004d31a0-004d320f
 */

void __fastcall FUN_004d31a0(int param_1)

{
  void **ppvVar1;
  int *piVar2;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056fce8;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      piVar2 = piVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  ExceptionList = ppvVar1;
  FUN_0054b339(*(LPVOID *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}


