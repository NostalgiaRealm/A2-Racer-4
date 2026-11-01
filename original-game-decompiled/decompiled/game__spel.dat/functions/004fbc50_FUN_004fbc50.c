
/* ==== FUN_004fbc50 @ 004fbc50 ==== 
 * signature: undefined __fastcall FUN_004fbc50(int * param_1)
 * body: 004fbc50-004fbcd7
 */

void __fastcall FUN_004fbc50(int *param_1)

{
  int *piVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005734e8;
  local_c = ExceptionList;
  piVar1 = param_1 + 0x26;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_0057851c;
  *piVar1 = (int)&PTR_FUN_00578518;
  local_4 = 0;
  if ((void *)param_1[0x27] != (void *)0x0) {
    FUN_0050d1a0((void *)param_1[0x27],-(uint)(param_1 != (int *)0x0) & (uint)piVar1);
  }
  if ((void *)param_1[0x28] != (void *)0x0) {
    FUN_0050d1a0((void *)param_1[0x28],-(uint)(param_1 != (int *)0x0) & (uint)piVar1);
  }
  local_4 = 0xffffffff;
  FUN_004fbce0(param_1);
  ExceptionList = local_c;
  return;
}


