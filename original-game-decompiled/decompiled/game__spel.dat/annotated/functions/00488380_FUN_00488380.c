
/* ==== FUN_00488380 @ 00488380 ==== 
 * signature: undefined __fastcall FUN_00488380(int param_1)
 * body: 00488380-004883db
 */

void __fastcall FUN_00488380(int param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056d4e8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488770(param_1);
  FUN_004888f0(param_1);
  FUN_00488be0(param_1);
  FUN_00488ec0(param_1);
  FUN_00488d50(param_1);
  ExceptionList = local_10;
  return;
}


