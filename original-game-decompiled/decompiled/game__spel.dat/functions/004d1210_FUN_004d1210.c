
/* ==== FUN_004d1210 @ 004d1210 ==== 
 * signature: undefined4 * __thiscall FUN_004d1210(void * this, undefined4 param_1)
 * body: 004d1210-004d1279
 */

undefined4 * __thiscall FUN_004d1210(void *this,undefined4 param_1)

{
  undefined8 uVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056fa78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005790a4;
  FUN_0054d3cd();
  uVar1 = FUN_0054eb13();
  *(undefined8 *)((int)this + 8) = uVar1;
  FUN_0054d486();
  ExceptionList = local_c;
  return this;
}


