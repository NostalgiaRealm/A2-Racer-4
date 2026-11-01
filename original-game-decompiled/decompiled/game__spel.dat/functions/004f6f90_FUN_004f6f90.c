
/* ==== FUN_004f6f90 @ 004f6f90 ==== 
 * signature: undefined __thiscall FUN_004f6f90(void * this, uint * param_1)
 * body: 004f6f90-004f6fd6
 */

void __thiscall FUN_004f6f90(void *this,uint *param_1)

{
  if (((byte)*param_1 & 0x30) != 0x10) {
    if (*(ushort *)((int)this + 0x104) <= *(ushort *)((int)this + 0x106)) {
      FUN_004f6060((ushort *)((int)this + 0x104));
    }
    *(uint **)(*(int *)((int)this + 0x108) + (uint)*(ushort *)((int)this + 0x106) * 4) = param_1;
    *(short *)((int)this + 0x106) = *(short *)((int)this + 0x106) + 1;
    *param_1 = *param_1 & 0xffffffdf | 0x10;
  }
  return;
}


