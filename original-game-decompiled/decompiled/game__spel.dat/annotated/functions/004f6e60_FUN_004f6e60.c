
/* ==== FUN_004f6e60 @ 004f6e60 ==== 
 * signature: undefined __thiscall FUN_004f6e60(void * this, byte * param_1)
 * body: 004f6e60-004f6f1f
 */

void __thiscall FUN_004f6e60(void *this,byte *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*param_1 & 0xc) == 0) {
    iVar2 = *(ushort *)((int)this + 0x2e) - 1;
    if (-1 < iVar2) {
      piVar3 = (int *)(*(int *)((int)this + 0x30) + iVar2 * 4);
      do {
        if ((byte *)*piVar3 == param_1) break;
        iVar2 = iVar2 + -1;
        piVar3 = piVar3 + -1;
      } while (-1 < iVar2);
    }
    uVar1 = *(ushort *)((int)this + 0x2e) - 1;
    *(ushort *)((int)this + 0x2e) = uVar1;
    if (iVar2 < (int)(uint)uVar1) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x30) + -4 + iVar2 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x30) + iVar2 * 4);
      } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x2e));
    }
    FUN_00500270(param_1,(int)this + 0x10);
    FUN_00500270(param_1,(int)this);
    FUN_00500270(param_1,(int)this + 8);
  }
  iVar2 = *(ushort *)((int)this + 0x26) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)((int)this + 0x28) + iVar2 * 4);
    do {
      if ((byte *)*piVar3 == param_1) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)((int)this + 0x26) - 1;
  *(ushort *)((int)this + 0x26) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this + 0x28) + -4 + iVar2 * 4) =
           *(undefined4 *)(*(int *)((int)this + 0x28) + iVar2 * 4);
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x26));
  }
  *(short *)((int)this + 0x3c) = *(short *)((int)this + 0x3c) + -1;
  return;
}


