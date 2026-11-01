
/* ==== FUN_0050e460 @ 0050e460 ==== 
 * signature: undefined4 * __thiscall FUN_0050e460(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0050e460-0050e518
 */

undefined4 * __thiscall
FUN_0050e460(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573bf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_005786ec;
  local_4 = 0;
  FUN_00543d90((undefined4 *)((int)this + 8));
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(undefined2 *)((int)this + 0x9e) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined ***)this = &PTR_FUN_005789f0;
  *(undefined4 *)((int)this + 0x84) = param_2;
  *(undefined4 *)((int)this + 0x88) = param_3;
  if (param_4 == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = 0xbf800000;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x8c) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0x43700000;
  ExceptionList = local_c;
  return this;
}


