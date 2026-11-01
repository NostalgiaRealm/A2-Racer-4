
/* ==== FUN_004488e0 @ 004488e0 ==== 
 * signature: undefined __fastcall FUN_004488e0(int param_1)
 * body: 004488e0-00448994
 */

void __fastcall FUN_004488e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056a47a;
  piVar1 = *(int **)(param_1 + 0x18);
  local_4 = 0;
  ppvVar4 = &local_c;
  piVar3 = (int *)*piVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    FUN_00448f90((void *)(param_1 + 0x14),&local_10,piVar3);
    ppvVar4 = ExceptionList;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


