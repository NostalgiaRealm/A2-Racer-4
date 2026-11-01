
/* ==== FUN_0042f3e0 @ 0042f3e0 ==== 
 * signature: undefined __thiscall FUN_0042f3e0(void * this, undefined4 param_1, undefined4 param_2, int param_3)
 * body: 0042f3e0-0042f476
 */

void __thiscall FUN_0042f3e0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    iVar1 = FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)this + 8));
    uVar2 = FUN_0049e630(iVar1);
    if (uVar2 == 0) {
      if (*(int *)((int)this + 0x10) == -1) {
        FUN_0042f3b0((int)this);
      }
      for (iVar1 = 0;
          (iVar1 < *(int *)this &&
          (*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4) + iVar1 * 4) < param_3));
          iVar1 = iVar1 + 1) {
      }
      if (iVar1 == *(int *)this) {
        iVar1 = iVar1 + -1;
      }
      FUN_0042f120(*(int *)((int)this + 0x24),(int)this + 0x28,param_3,iVar1);
      FUN_0042f120(*(int *)((int)this + 0x30),(int)this + 0x34,param_3,iVar1);
      FUN_0042f120(*(int *)((int)this + 0x3c),(int)this + 0x40,param_3,iVar1);
      FUN_0042f220(this,param_3,iVar1);
    }
  }
  return;
}


