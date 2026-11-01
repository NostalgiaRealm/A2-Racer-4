
/* ==== FUN_004f6f20 @ 004f6f20 ==== 
 * signature: undefined __thiscall FUN_004f6f20(void * this, uint * param_1)
 * body: 004f6f20-004f6f8b
 */

void __thiscall FUN_004f6f20(void *this,uint *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(ushort *)((int)this + 0x106) - 1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)((int)this + 0x108) + iVar1 * 4);
    while ((uint *)*piVar2 != param_1) {
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    if (-1 < iVar1) {
      if (iVar1 < (int)(*(ushort *)((int)this + 0x106) - 1)) {
        do {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(*(int *)((int)this + 0x108) + -4 + iVar1 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0x108) + iVar1 * 4);
        } while (iVar1 < (int)(*(ushort *)((int)this + 0x106) - 1));
      }
      *(short *)((int)this + 0x106) = *(short *)((int)this + 0x106) + -1;
      *param_1 = *param_1 & 0xffffffcf;
    }
  }
  return;
}


