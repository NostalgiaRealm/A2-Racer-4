
/* ==== FUN_0050cb60 @ 0050cb60 ==== 
 * signature: undefined __thiscall FUN_0050cb60(void * this, int param_1)
 * body: 0050cb60-0050cbad
 */

void __thiscall FUN_0050cb60(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(ushort *)((int)this + 0x12) - 1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)((int)this + 0x14) + iVar1 * 4);
    do {
      if (*piVar2 == param_1) break;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  if (iVar1 == -1) {
    if (*(ushort *)((int)this + 0x10) <= *(ushort *)((int)this + 0x12)) {
      FUN_004f6060((ushort *)((int)this + 0x10));
    }
    *(int *)(*(int *)((int)this + 0x14) + (uint)*(ushort *)((int)this + 0x12) * 4) = param_1;
    *(short *)((int)this + 0x12) = *(short *)((int)this + 0x12) + 1;
  }
  return;
}


