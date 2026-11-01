
/* ==== FUN_004ff590 @ 004ff590 ==== 
 * signature: undefined __thiscall FUN_004ff590(void * this, int param_1)
 * body: 004ff590-004ff616
 */

void __thiscall FUN_004ff590(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == 0) ||
     ((((uVar1 = *(uint *)(**(int **)((int)this + 0x18) + 0x6c), (uVar1 & 1) == 0 ||
        (*(int *)(param_1 + 0x1c) == 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_1 + 0x80) & 0x10) != 0)))) &&
      (((uVar1 & 4) == 0 || ((*(byte *)(param_1 + 0x80) & 0x10) == 0)))))) {
    if (*(int *)(param_1 + 4) == 2) {
      iVar3 = *(int *)((int)this + 0x14);
      piVar2 = *(int **)(param_1 + 0x8c);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        (**(code **)(*piVar2 + 0x18))
                  (*(undefined4 *)(*(int *)((int)this + 0x18) + iVar3 * 4),param_1);
      }
    }
    else if ((*(int *)(param_1 + 4) == 3) && (iVar3 = *(int *)((int)this + 0x14) + -1, -1 < iVar3))
    {
      do {
        FUN_004ff3a0(*(void **)(*(int *)((int)this + 0x18) + iVar3 * 4),param_1);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      return;
    }
  }
  return;
}


