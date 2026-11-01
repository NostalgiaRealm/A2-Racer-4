
/* ==== FUN_0046fd10 @ 0046fd10 ==== 
 * signature: undefined __thiscall FUN_0046fd10(void * this, undefined4 param_1)
 * body: 0046fd10-0046fd53
 */

void __thiscall FUN_0046fd10(void *this,undefined4 param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056b081;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0046fcb0(this,param_1);
  ExceptionList = local_10;
  return;
}


