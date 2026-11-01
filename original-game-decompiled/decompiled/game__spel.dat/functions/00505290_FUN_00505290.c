
/* ==== FUN_00505290 @ 00505290 ==== 
 * signature: undefined2 * __thiscall FUN_00505290(void * this, int param_1)
 * body: 00505290-005052c1
 */

undefined2 * __thiscall FUN_00505290(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(short *)this = (short)param_1;
  *(undefined2 *)((int)this + 2) = 0;
  if (param_1 != 0) {
    uVar1 = FUN_004f5a90(param_1 << 2);
    *(undefined4 *)((int)this + 4) = uVar1;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


