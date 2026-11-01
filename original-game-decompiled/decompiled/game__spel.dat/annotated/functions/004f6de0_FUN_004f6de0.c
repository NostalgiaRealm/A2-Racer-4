
/* ==== FUN_004f6de0 @ 004f6de0 ==== 
 * signature: undefined __thiscall FUN_004f6de0(void * this, byte * param_1)
 * body: 004f6de0-004f6e5b
 */

void __thiscall FUN_004f6de0(void *this,byte *param_1)

{
  if (*(ushort *)((int)this + 0x24) <= *(ushort *)((int)this + 0x26)) {
    FUN_004f6060((ushort *)((int)this + 0x24));
  }
  *(byte **)(*(int *)((int)this + 0x28) + (uint)*(ushort *)((int)this + 0x26) * 4) = param_1;
  *(short *)((int)this + 0x26) = *(short *)((int)this + 0x26) + 1;
  if ((*param_1 & 0xc) == 0) {
    if (*(ushort *)((int)this + 0x2c) <= *(ushort *)((int)this + 0x2e)) {
      FUN_004f6060((ushort *)((int)this + 0x2c));
    }
    *(byte **)(*(int *)((int)this + 0x30) + (uint)*(ushort *)((int)this + 0x2e) * 4) = param_1;
    *(short *)((int)this + 0x2e) = *(short *)((int)this + 0x2e) + 1;
    FUN_005002e0(param_1,(int)this + 8);
    FUN_005002e0(param_1,(int)this);
    FUN_005002e0(param_1,(int)this + 0x10);
  }
  *(short *)((int)this + 0x3c) = *(short *)((int)this + 0x3c) + 1;
  return;
}


