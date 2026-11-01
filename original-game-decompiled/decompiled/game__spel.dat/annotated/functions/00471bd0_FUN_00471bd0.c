
/* ==== FUN_00471bd0 @ 00471bd0 ==== 
 * signature: undefined __fastcall FUN_00471bd0(void * param_1)
 * body: 00471bd0-00471c27
 */

void __fastcall FUN_00471bd0(void *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056b2ec;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00470fe0((int)param_1);
  if (*(char *)((int)param_1 + 0x28) != '\0') {
    FUN_00471240((int)param_1);
    FUN_004717d0(param_1);
    FUN_00471c90((int)param_1);
  }
  ExceptionList = local_10;
  return;
}


