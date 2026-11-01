
/* ==== FUN_00472360 @ 00472360 ==== 
 * signature: undefined4 * __thiscall FUN_00472360(void * this, undefined4 * param_1, undefined4 param_2)
 * body: 00472360-004723b4
 */

undefined4 * __thiscall FUN_00472360(void *this,undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00472740(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00576a10;
  FUN_004723d0(this,param_2);
  ExceptionList = local_c;
  return this;
}


