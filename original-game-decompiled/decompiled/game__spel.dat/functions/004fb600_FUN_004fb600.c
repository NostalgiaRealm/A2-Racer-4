
/* ==== FUN_004fb600 @ 004fb600 ==== 
 * signature: undefined __fastcall FUN_004fb600(int * param_1)
 * body: 004fb600-004fb663
 */

void __fastcall FUN_004fb600(int *param_1)

{
  void *local_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_005733ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00578470;
  local_4 = 1;
  FUN_005000f0(param_1,1);
  local_4 = local_4 & 0xffffff00;
  FUN_005586c5(param_1 + 3,0x30,2,FUN_004fbe20);
  FUN_004fb480(param_1);
  ExceptionList = local_c;
  return;
}


