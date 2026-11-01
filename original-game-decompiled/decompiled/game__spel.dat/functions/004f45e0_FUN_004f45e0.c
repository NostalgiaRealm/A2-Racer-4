
/* ==== FUN_004f45e0 @ 004f45e0 ==== 
 * signature: undefined __thiscall FUN_004f45e0(void * this, int param_1)
 * body: 004f45e0-004f4662
 */

void __thiscall FUN_004f45e0(void *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(ushort *)((int)this + 0x4e) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)((int)this + 0x50) + iVar2 * 4);
    do {
      if (*piVar3 == param_1) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)((int)this + 0x4e) - 1;
  *(ushort *)((int)this + 0x4e) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x50) + iVar2 * 4);
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x4e));
  }
  if (*(short *)((int)this + 0x4e) == 0) {
    if (*(int *)((int)this + 0x5c) * 0x1000000 < 0x8000000) {
      FUN_004f4710(this);
    }
    if (this != (void *)0x0) {
      FUN_004f4e40(this);
      FUN_0054b339(this);
    }
  }
  return;
}


