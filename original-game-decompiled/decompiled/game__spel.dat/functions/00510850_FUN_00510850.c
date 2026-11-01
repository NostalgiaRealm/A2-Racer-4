
/* ==== FUN_00510850 @ 00510850 ==== 
 * signature: undefined __thiscall FUN_00510850(void * this, int param_1)
 * body: 00510850-005108bd
 */

void __thiscall FUN_00510850(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (((iVar2 < 0) || ((int)(uint)*(ushort *)((int)this + 10) <= iVar2)) ||
     (*(int *)(*(int *)((int)this + 0xc) + iVar2 * 4) != param_1)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(short *)((int)this + 10) = *(short *)((int)this + 10) + -1;
  if (iVar2 < (int)(uint)*(ushort *)((int)this + 10)) {
    iVar1 = *(int *)(*(int *)((int)this + 0xc) + (uint)*(ushort *)((int)this + 10) * 4);
    *(int *)(*(int *)((int)this + 0xc) + iVar2 * 4) = iVar1;
    if (*(uint *)(iVar1 + 0xc) == (uint)*(ushort *)((int)this + 10)) {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0x10) = iVar2;
    }
  }
  if (*(int *)(param_1 + 0xc) == iVar2) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


