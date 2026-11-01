
/* ==== FUN_004d4f60 @ 004d4f60 ==== 
 * signature: undefined4 * __thiscall FUN_004d4f60(void * this, undefined4 param_1)
 * body: 004d4f60-004d4fbe
 */

undefined4 * __thiscall FUN_004d4f60(void *this,undefined4 param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790e0;
  FUN_0054d3cd();
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


