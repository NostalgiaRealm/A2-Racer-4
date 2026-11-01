
/* ==== FUN_00500370 @ 00500370 ==== 
 * signature: undefined __thiscall FUN_00500370(void * this, int param_1, int param_2)
 * body: 00500370-0050041a
 */

void __thiscall FUN_00500370(void *this,int param_1,int param_2)

{
  ushort uVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = FUN_004ffe20(this,param_2);
  pvVar2 = *(LPVOID *)(*(int *)((int)this + 0x20) + iVar3 * 4);
  iVar4 = *(ushort *)((int)pvVar2 + 6) - 1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)((int)pvVar2 + 8) + iVar4 * 4);
    do {
      if (*piVar5 == param_1) break;
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -1;
    } while (-1 < iVar4);
  }
  uVar1 = *(ushort *)((int)pvVar2 + 6) - 1;
  *(ushort *)((int)pvVar2 + 6) = uVar1;
  if (iVar4 < (int)(uint)uVar1) {
    do {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)((int)pvVar2 + 8) + -4 + iVar4 * 4) =
           *(undefined4 *)(*(int *)((int)pvVar2 + 8) + iVar4 * 4);
    } while (iVar4 < (int)(uint)*(ushort *)((int)pvVar2 + 6));
  }
  if (*(short *)((int)pvVar2 + 6) == 0) {
    if (pvVar2 != (LPVOID)0x0) {
      FUN_004ffd80((int)pvVar2);
      FUN_0054b339(pvVar2);
    }
    if (iVar3 < (int)(*(ushort *)((int)this + 0x1e) - 1)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x20) + -4 + iVar3 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x20) + iVar3 * 4);
      } while (iVar3 < (int)(*(ushort *)((int)this + 0x1e) - 1));
    }
    *(short *)((int)this + 0x1e) = *(short *)((int)this + 0x1e) + -1;
  }
  return;
}


