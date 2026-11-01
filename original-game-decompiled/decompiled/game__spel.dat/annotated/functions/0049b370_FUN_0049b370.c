
/* ==== FUN_0049b370 @ 0049b370 ==== 
 * signature: undefined4 * __thiscall FUN_0049b370(void * this, void * param_1, void * param_2, void * param_3, void * param_4, undefined1 param_5, undefined4 param_6)
 * body: 0049b370-0049b3e6
 */

undefined4 * __thiscall
FUN_0049b370(void *this,void *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5,
            undefined4 param_6)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e8aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498b70(this,param_1,param_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0057714c;
  *(undefined1 *)((int)this + 0x3c) = param_5;
  param_5 = 1;
  FUN_00499390(this,&param_5);
  ExceptionList = local_c;
  return this;
}


