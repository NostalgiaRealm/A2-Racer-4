
/* ==== FUN_00510700 @ 00510700 ==== 
 * signature: undefined4 * __thiscall FUN_00510700(void * this, int param_1, undefined4 param_2)
 * body: 00510700-00510776
 */

undefined4 * __thiscall FUN_00510700(void *this,int param_1,undefined4 param_2)

{
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00573d36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005397a0(this,param_1,param_2);
  *(undefined ***)((int)this + 0x88) = &PTR_FUN_005788a0;
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)this = &PTR_FUN_00578ad0;
  *(undefined ***)((int)this + 0x88) = &PTR_FUN_00578ac8;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}


