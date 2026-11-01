
/* ==== FUN_0051edb0 @ 0051edb0 ==== 
 * signature: undefined __thiscall FUN_0051edb0(void * this, undefined4 param_1)
 * body: 0051edb0-0051edd8
 */

void __thiscall FUN_0051edb0(void *this,undefined4 param_1)

{
  if (*(ushort *)this <= *(ushort *)((int)this + 2)) {
    FUN_004f6060(this);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + (uint)*(ushort *)((int)this + 2) * 4) = param_1;
  *(short *)((int)this + 2) = *(short *)((int)this + 2) + 1;
  return;
}


