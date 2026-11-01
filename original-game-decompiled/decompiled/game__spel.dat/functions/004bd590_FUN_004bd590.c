
/* ==== FUN_004bd590 @ 004bd590 ==== 
 * signature: undefined __fastcall FUN_004bd590(int param_1)
 * body: 004bd590-004bd5f0
 */

void __fastcall FUN_004bd590(int param_1)

{
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056f739;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004bd780(param_1);
  FUN_004bd800(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_004c1ac0((undefined4 *)(param_1 + 0x98));
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


