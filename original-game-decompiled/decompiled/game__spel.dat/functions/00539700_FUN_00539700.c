
/* ==== FUN_00539700 @ 00539700 ==== 
 * signature: undefined4 * __thiscall FUN_00539700(void * this, undefined4 param_1)
 * body: 00539700-00539792
 */

undefined4 * __thiscall FUN_00539700(void *this,undefined4 param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00574138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_00578ab4;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  local_4 = 0;
  FUN_00558643((int)this + 0x18,0x1c,2,FUN_0053bca0);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined ***)this = &PTR_FUN_00578c40;
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) & 0xcfc00000 | 0xfc00000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 4) = 0xffff;
  ExceptionList = local_c;
  return this;
}


