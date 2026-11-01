
/* ==== FUN_00500270 @ 00500270 ==== 
 * signature: undefined __thiscall FUN_00500270(void * this, int param_1)
 * body: 00500270-005002dc
 */

void __thiscall FUN_00500270(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(ushort *)((int)this + 0x1ca) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)((int)this + 0x1cc) + iVar2 * 4);
    do {
      if (*piVar3 == param_1) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)((int)this + 0x1ca) - 1;
  *(ushort *)((int)this + 0x1ca) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x1cc) + -4 + iVar2 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x1cc) + iVar2 * 4);
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x1ca));
  }
  FUN_00500370(*(void **)((int)this + 0x1d4),(int)this,param_1);
  return;
}


