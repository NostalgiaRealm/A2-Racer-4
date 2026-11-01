
/* ==== FUN_004f21f0 @ 004f21f0 ==== 
 * signature: undefined __thiscall FUN_004f21f0(void * this, int param_1)
 * body: 004f21f0-004f2263
 */

void __thiscall FUN_004f21f0(void *this,int param_1)

{
  if (param_1 == 0) {
    if ((*(uint *)((int)this + 0x80) & 0x300) != 0) {
      if (*(int **)((int)this + 0x9c) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x9c) + 0x10))(1);
      }
      *(undefined4 *)((int)this + 0x9c) = 0;
      *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffcff;
      FUN_004f2910(this,1);
    }
  }
  else if ((*(uint *)((int)this + 0x80) & 0x300) == 0) {
    FUN_0053ab30(*(void **)(*(int *)((int)this + 0x18) + 0x10),(uint)this);
    *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffffdff | 0x100;
    return;
  }
  return;
}


