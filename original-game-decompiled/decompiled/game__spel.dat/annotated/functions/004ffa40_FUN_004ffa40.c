
/* ==== FUN_004ffa40 @ 004ffa40 ==== 
 * signature: undefined __thiscall FUN_004ffa40(void * this, int param_1, undefined4 param_2)
 * body: 004ffa40-004ffa94
 */

void __thiscall FUN_004ffa40(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(ushort *)((int)this + 0x1e) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 0x20) + iVar1 * 4);
    do {
      if (*(int *)*puVar2 == param_1) break;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x20) + iVar1 * 4);
  if (*(ushort *)(iVar1 + 4) <= *(ushort *)(iVar1 + 6)) {
    FUN_004f6060((ushort *)(iVar1 + 4));
  }
  *(undefined4 *)(*(int *)(iVar1 + 8) + (uint)*(ushort *)(iVar1 + 6) * 4) = param_2;
  *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
  return;
}


