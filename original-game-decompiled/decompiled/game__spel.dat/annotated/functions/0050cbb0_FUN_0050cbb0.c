
/* ==== FUN_0050cbb0 @ 0050cbb0 ==== 
 * signature: undefined __thiscall FUN_0050cbb0(void * this, int param_1)
 * body: 0050cbb0-0050cbfd
 */

void __thiscall FUN_0050cbb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(ushort *)((int)this + 0x1a) - 1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)((int)this + 0x1c) + iVar1 * 4);
    do {
      if (*piVar2 == param_1) break;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  if (iVar1 == -1) {
    if (*(ushort *)((int)this + 0x18) <= *(ushort *)((int)this + 0x1a)) {
      FUN_004f6060((ushort *)((int)this + 0x18));
    }
    *(int *)(*(int *)((int)this + 0x1c) + (uint)*(ushort *)((int)this + 0x1a) * 4) = param_1;
    *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) + 1;
  }
  return;
}


