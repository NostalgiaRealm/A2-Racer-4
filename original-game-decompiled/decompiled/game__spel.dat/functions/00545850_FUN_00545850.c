
/* ==== FUN_00545850 @ 00545850 ==== 
 * signature: undefined4 __thiscall FUN_00545850(void * this, int param_1, int * param_2)
 * body: 00545850-005458ff
 */

undefined4 __thiscall FUN_00545850(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar4 = *(int *)((int)this + 8);
  local_c = 0;
  if (0 < iVar4) {
    do {
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          iVar4 = *(int *)((int)this + 0x14);
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + -8 + iVar3 * 8) = 0;
          *(undefined4 *)(iVar4 + -4 + iVar3 * 8) = 0;
        } while (iVar3 < *(int *)((int)this + 8));
      }
      iVar4 = *(int *)((int)this + 0x14);
      *(undefined4 *)(iVar4 + local_c * 8) = 0;
      *(undefined4 *)(iVar4 + 4 + local_c * 8) = 0x3ff00000;
      iVar4 = FUN_00545900(this,param_2);
      if (iVar4 != 1) {
        return 0;
      }
      iVar4 = *(int *)((int)this + 8);
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = *(int *)((int)this + 0x18);
          iVar5 = iVar4 * iVar3 + local_c;
          iVar4 = iVar3 * 8;
          iVar3 = iVar3 + 1;
          iVar2 = *(int *)(param_1 + 0x10);
          *(undefined4 *)(iVar2 + iVar5 * 8) = *(undefined4 *)(iVar1 + iVar4);
          *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = *(undefined4 *)(iVar1 + -4 + iVar3 * 8);
          iVar4 = *(int *)((int)this + 8);
        } while (iVar3 < iVar4);
      }
      iVar4 = *(int *)((int)this + 8);
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  return 1;
}


