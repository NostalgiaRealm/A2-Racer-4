
/* ==== FUN_00468390 @ 00468390 ==== 
 * signature: undefined __stdcall FUN_00468390(void)
 * body: 00468390-004683ea
 */

void FUN_00468390(void)

{
  undefined4 in_stack_ffffffa4;
  int in_stack_ffffffa8;
  int in_stack_ffffffac;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aca2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00467370((undefined4 *)&stack0xffffffa4);
  local_4 = 0;
  FUN_00468030(&stack0xffffffa4);
  FUN_00468050(in_stack_ffffffa4,in_stack_ffffffa8,in_stack_ffffffac);
  local_4 = 0xffffffff;
  FUN_00467470((int)&stack0xffffffa4);
  ExceptionList = local_c;
  return;
}


