
/* ==== FUN_00499cc0 @ 00499cc0 ==== 
 * signature: undefined4 * __thiscall FUN_00499cc0(void * this, void * param_1, void * param_2, void * param_3, void * param_4, int param_5, undefined1 param_6)
 * body: 00499cc0-00499d2a
 */

undefined4 * __thiscall
FUN_00499cc0(void *this,void *param_1,void *param_2,void *param_3,void *param_4,int param_5,
            undefined1 param_6)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,param_1,param_2,param_3,param_4,param_6);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577140;
  FUN_00499da0(this,param_5);
  ExceptionList = local_c;
  return this;
}


