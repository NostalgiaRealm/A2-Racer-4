
/* ==== FUN_0049b8c0 @ 0049b8c0 ==== 
 * signature: undefined4 * __thiscall FUN_0049b8c0(void * this, void * param_1, void * param_2, void * param_3, void * param_4, undefined4 param_5, uint param_6)
 * body: 0049b8c0-0049b933
 */

undefined4 * __thiscall
FUN_0049b8c0(void *this,void *param_1,void *param_2,void *param_3,void *param_4,undefined4 param_5,
            uint param_6)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00498ad0(this,param_1,param_2,param_3,param_4,(char)param_6);
  local_4 = 0;
  param_6 = param_6 & 0xffffff00;
  *(undefined ***)this = &PTR_FUN_00577164;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00499390(this,(undefined1 *)&param_6);
  ExceptionList = local_c;
  return this;
}


