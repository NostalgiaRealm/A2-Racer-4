
/* ==== FUN_005100d0 @ 005100d0 ==== 
 * signature: undefined4 * __thiscall FUN_005100d0(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 005100d0-00510195
 */

undefined4 * __thiscall FUN_005100d0(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  void *local_c;
  code *pcStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  pcStack_8 = FUN_00573cb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_00578ab4;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_005788a0;
  local_4 = 1;
  uStack_3 = 0;
  FUN_00558643((void *)((int)this + 0x18),0x10,2,FUN_005103a0);
  local_4 = 2;
  *(undefined2 *)((int)this + 0x38) = 8;
  *(undefined2 *)((int)this + 0x3a) = 0;
  uVar1 = FUN_004f5a90(0x20);
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  _local_4 = CONCAT31(uStack_3,3);
  *(undefined ***)this = &PTR_FUN_00578aa0;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_00578a98;
  FUN_00510080((void *)((int)this + 0x18),this,param_2);
  FUN_00510080((void *)((int)this + 0x28),this,param_3);
  FUN_0050ff30((int)this);
  ExceptionList = local_c;
  return this;
}


