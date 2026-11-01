
/* ==== FUN_004b9670 @ 004b9670 ==== 
 * signature: undefined __fastcall FUN_004b9670(int param_1)
 * body: 004b9670-004b96b9
 */

void __fastcall FUN_004b9670(int param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056f64b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ba460(param_1);
  local_4 = 0xffffffff;
  FUN_004c1ac0((undefined4 *)(param_1 + 0x14));
  ExceptionList = local_c;
  return;
}


