
/* ==== FUN_00469740 @ 00469740 ==== 
 * signature: undefined4 __thiscall FUN_00469740(void * this, int param_1)
 * body: 00469740-004697bb
 */

uint __thiscall FUN_00469740(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = *(int *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4);
  uVar4 = *(uint *)((int)this + 4);
  if (0 < (int)uVar4) {
    do {
      uVar2 = FUN_004b76e0(&DAT_00712130,*(char **)(*(int *)this + iVar5 * 4));
      if ((char)uVar2 != '\0') {
        iVar3 = FUN_004b75a0(&DAT_00712130,*(char **)(*(int *)this + iVar5 * 4));
        if (iVar1 == iVar3) {
          return CONCAT31((int3)((uint)iVar3 >> 8),1);
        }
      }
      uVar4 = *(uint *)((int)this + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  return uVar4 & 0xffffff00;
}


