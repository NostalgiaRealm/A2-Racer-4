
/* ==== FUN_004978a0 @ 004978a0 ==== 
 * signature: undefined __fastcall FUN_004978a0(int param_1)
 * body: 004978a0-00497954
 */

void __fastcall FUN_004978a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e480;
  piVar1 = *(int **)(param_1 + 0x20);
  local_4 = 0;
  ppvVar4 = &local_c;
  piVar3 = (int *)*piVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    FUN_00448f90((void *)(param_1 + 0x1c),&local_10,piVar3);
    ppvVar4 = ExceptionList;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


