
/* ==== FUN_0055d982 @ 0055d982 ==== 
 * signature: undefined __cdecl FUN_0055d982(int param_1)
 * body: 0055d982-0055d9d7
 */

void __cdecl FUN_0055d982(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00579818;
  pcStack_10 = FUN_0055e3b4;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_00557d3e(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}


