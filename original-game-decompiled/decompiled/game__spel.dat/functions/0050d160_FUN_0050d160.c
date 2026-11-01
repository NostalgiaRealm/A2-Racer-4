
/* ==== FUN_0050d160 @ 0050d160 ==== 
 * signature: undefined __thiscall FUN_0050d160(void * this, undefined4 param_1)
 * body: 0050d160-0050d196
 */

void __thiscall FUN_0050d160(void *this,undefined4 param_1)

{
  if (*(ushort *)((int)this + 0xc) <= *(ushort *)((int)this + 0xe)) {
    FUN_004f6060((ushort *)((int)this + 0xc));
  }
  *(undefined4 *)(*(int *)((int)this + 0x10) + (uint)*(ushort *)((int)this + 0xe) * 4) = param_1;
  *(short *)((int)this + 0xe) = *(short *)((int)this + 0xe) + 1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


