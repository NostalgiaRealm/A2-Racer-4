
/* ==== FUN_0053eae0 @ 0053eae0 ==== 
 * signature: undefined __thiscall FUN_0053eae0(void * this, undefined4 param_1)
 * body: 0053eae0-0053eb0c
 */

void __thiscall FUN_0053eae0(void *this,undefined4 param_1)

{
  if (*(ushort *)((int)this + 0x34) <= *(ushort *)((int)this + 0x36)) {
    FUN_004f6060((ushort *)((int)this + 0x34));
  }
  *(undefined4 *)(*(int *)((int)this + 0x38) + (uint)*(ushort *)((int)this + 0x36) * 4) = param_1;
  *(short *)((int)this + 0x36) = *(short *)((int)this + 0x36) + 1;
  return;
}


