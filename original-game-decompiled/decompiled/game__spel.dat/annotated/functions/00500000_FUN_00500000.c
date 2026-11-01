
/* ==== FUN_00500000 @ 00500000 ==== 
 * signature: undefined __thiscall FUN_00500000(void * this, int param_1)
 * body: 00500000-00500057
 */

void __thiscall FUN_00500000(void *this,int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  iVar2 = FUN_004ffe20(this,param_1);
  pvVar1 = *(LPVOID *)(*(int *)((int)this + 0x20) + iVar2 * 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_004ffd80((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  if (iVar2 < (int)(*(ushort *)((int)this + 0x1e) - 1)) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x20) + -4 + iVar2 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x20) + iVar2 * 4);
    } while (iVar2 < (int)(*(ushort *)((int)this + 0x1e) - 1));
  }
  *(short *)((int)this + 0x1e) = *(short *)((int)this + 0x1e) + -1;
  return;
}


