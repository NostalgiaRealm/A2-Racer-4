
/* ==== FUN_004c2de0 @ 004c2de0 ==== 
 * signature: undefined __fastcall FUN_004c2de0(int param_1)
 * body: 004c2de0-004c2e3e
 */

void __fastcall FUN_004c2de0(int param_1)

{
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_0056f806;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004c1ac0((undefined4 *)(param_1 + 0x1bc));
  local_4 = local_4 & 0xffffff00;
  FUN_004c1ac0((undefined4 *)(param_1 + 0x1ac));
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


