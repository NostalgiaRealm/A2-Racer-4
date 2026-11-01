
/* ==== FUN_00498b70 @ 00498b70 ==== 
 * signature: undefined4 * __thiscall FUN_00498b70(void * this, void * param_1, void * param_2, void * param_3, void * param_4, undefined1 param_5)
 * body: 00498b70-00498c01
 */

undefined4 * __thiscall
FUN_00498b70(void *this,void *param_1,void *param_2,void *param_3,void *param_4,undefined1 param_5)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e4ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 2;
  *(undefined ***)this = &PTR_FUN_00577134;
  FUN_00498d00(this,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return this;
}


