
/* ==== FUN_0050aba0 @ 0050aba0 ==== 
 * signature: undefined __thiscall FUN_0050aba0(void * this, int param_1)
 * body: 0050aba0-0050abea
 */

void __thiscall FUN_0050aba0(void *this,int param_1)

{
  if (*(ushort *)((int)this + 0x28) <= *(ushort *)((int)this + 0x2a)) {
    FUN_004f6060((ushort *)((int)this + 0x28));
  }
  *(int *)(*(int *)((int)this + 0x2c) + (uint)*(ushort *)((int)this + 0x2a) * 4) = param_1;
  if (*(int *)(param_1 + 0xc) == -1) {
    *(uint *)(param_1 + 0xc) = (uint)*(ushort *)((int)this + 0x2a);
    *(short *)((int)this + 0x2a) = *(short *)((int)this + 0x2a) + 1;
    return;
  }
  *(uint *)(param_1 + 0x10) = (uint)*(ushort *)((int)this + 0x2a);
  *(short *)((int)this + 0x2a) = *(short *)((int)this + 0x2a) + 1;
  return;
}


