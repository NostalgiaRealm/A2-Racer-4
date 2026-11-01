
/* ==== FUN_0050c740 @ 0050c740 ==== 
 * signature: int * __thiscall FUN_0050c740(void * this, int param_1)
 * body: 0050c740-0050c83f
 */

int * __thiscall FUN_0050c740(void *this,int param_1)

{
  undefined4 *puVar1;
  void *this_00;
  void *local_c;
  code *pcStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  pcStack_8 = FUN_00573a27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 1;
  uStack_3 = 0;
  *(undefined ***)this = &PTR_FUN_005788f0;
  *(int *)((int)this + 4) = param_1;
  puVar1 = operator_new(0x10);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(puVar1,0x10);
    *puVar1 = &PTR_FUN_005788e8;
  }
  local_4 = 1;
  *(undefined4 **)((int)this + 8) = puVar1;
  puVar1 = operator_new(0x10);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(puVar1,0x10);
    *puVar1 = &PTR_FUN_005788e8;
  }
  local_4 = 1;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  this_00 = operator_new(0xc);
  local_4 = 4;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0050cf40(this_00,(char *)0x0);
  }
  _local_4 = CONCAT31(uStack_3,1);
  *(undefined4 **)((int)this + 0x24) = puVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  FUN_0050c920(this);
  ExceptionList = local_c;
  return this;
}


