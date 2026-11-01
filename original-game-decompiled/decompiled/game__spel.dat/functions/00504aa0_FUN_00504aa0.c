
/* ==== FUN_00504aa0 @ 00504aa0 ==== 
 * signature: undefined __thiscall FUN_00504aa0(void * this, undefined4 param_1)
 * body: 00504aa0-00504acc
 */

void __thiscall FUN_00504aa0(void *this,undefined4 param_1)

{
  if (*(ushort *)((int)this + 0x18) <= *(ushort *)((int)this + 0x1a)) {
    FUN_004f6060((ushort *)((int)this + 0x18));
  }
  *(undefined4 *)(*(int *)((int)this + 0x1c) + (uint)*(ushort *)((int)this + 0x1a) * 4) = param_1;
  *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) + 1;
  return;
}


