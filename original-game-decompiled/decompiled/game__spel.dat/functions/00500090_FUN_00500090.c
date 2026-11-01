
/* ==== FUN_00500090 @ 00500090 ==== 
 * signature: undefined __thiscall FUN_00500090(void * this, int param_1)
 * body: 00500090-005000e0
 */

void __thiscall FUN_00500090(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(ushort *)((int)this + 0xe) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)((int)this + 0x10) + iVar2 * 4);
    do {
      if (*piVar3 == param_1) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)((int)this + 0xe) - 1;
  *(ushort *)((int)this + 0xe) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x10) + -4 + iVar2 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x10) + iVar2 * 4);
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0xe));
  }
  return;
}


