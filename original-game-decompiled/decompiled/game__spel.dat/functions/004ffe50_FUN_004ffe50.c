
/* ==== FUN_004ffe50 @ 004ffe50 ==== 
 * signature: undefined __thiscall FUN_004ffe50(void * this, int param_1)
 * body: 004ffe50-004fff12
 */

void __thiscall FUN_004ffe50(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  FUN_00500090(this,param_1);
  uVar2 = (uint)*(ushort *)(param_1 + 0x1ca);
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      if ((*(short *)((int)this + 0xe) == 0) &&
         (FUN_005005c0(*(void **)(*(int *)(param_1 + 0xc) + 8),this), this != (void *)0x0)) {
        FUN_004fff20((int)this);
        FUN_0054b339(this);
      }
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1cc) + uVar2 * 4);
    iVar3 = FUN_004ffe20(this,iVar1);
    iVar3 = *(int *)(*(int *)((int)this + 0x20) + iVar3 * 4);
    iVar4 = *(ushort *)(iVar3 + 6) - 1;
    if (-1 < iVar4) {
      piVar6 = (int *)(*(int *)(iVar3 + 8) + iVar4 * 4);
      do {
        if (*piVar6 == param_1) break;
        iVar4 = iVar4 + -1;
        piVar6 = piVar6 + -1;
      } while (-1 < iVar4);
    }
    uVar5 = *(ushort *)(iVar3 + 6) - 1;
    *(short *)(iVar3 + 6) = (short)uVar5;
    if (iVar4 < (int)(uVar5 & 0xffff)) {
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)(iVar3 + 8) + -4 + iVar4 * 4) =
             *(undefined4 *)(*(int *)(iVar3 + 8) + iVar4 * 4);
      } while (iVar4 < (int)(uint)*(ushort *)(iVar3 + 6));
    }
    if (*(short *)(iVar3 + 6) == 0) {
      FUN_00500000(this,iVar1);
    }
  } while( true );
}


