
/* ==== FUN_0049e3f0 @ 0049e3f0 ==== 
 * signature: undefined __thiscall FUN_0049e3f0(void * this, int param_1)
 * body: 0049e3f0-0049e459
 */

void __thiscall FUN_0049e3f0(void *this,int param_1)

{
  uint uVar1;
  void *local_4;
  
  local_4 = this;
  uVar1 = FUN_0049e630((int)this);
  if (uVar1 != 0) {
    local_4 = (void *)((*(int *)((int)this + 0x3c) * param_1) / 100 + *(int *)((int)this + 0x3c));
    FUN_004a01a0((int *)&local_4,100,100000);
    FUN_004c7460(*(int *)((int)this + 0x38),(int)local_4);
    *(int *)((int)this + 0x4c) = param_1;
    return;
  }
  *(int *)((int)this + 0x4c) = param_1;
  return;
}


