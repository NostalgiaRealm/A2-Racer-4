
/* ==== FUN_004f3340 @ 004f3340 ==== 
 * signature: undefined __fastcall FUN_004f3340(undefined4 * param_1)
 * body: 004f3340-004f338b
 */

void __fastcall FUN_004f3340(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00572e88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0053cce0((int)(param_1 + 0x12));
  local_4 = 0xffffffff;
  FUN_004f2a70(param_1);
  ExceptionList = local_c;
  return;
}


