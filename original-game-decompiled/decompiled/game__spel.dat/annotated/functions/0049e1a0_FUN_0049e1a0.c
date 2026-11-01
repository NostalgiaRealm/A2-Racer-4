
/* ==== FUN_0049e1a0 @ 0049e1a0 ==== 
 * signature: undefined4 * __thiscall FUN_0049e1a0(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 0049e1a0-0049e1fa
 */

undefined4 * __thiscall FUN_0049e1a0(void *this,undefined4 param_1,int param_2,int param_3)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360(this);
  local_4 = 0;
  FUN_0049e150((int)this);
  FUN_0049e260(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


