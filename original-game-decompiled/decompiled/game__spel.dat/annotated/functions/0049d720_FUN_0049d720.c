
/* ==== FUN_0049d720 @ 0049d720 ==== 
 * signature: int __thiscall FUN_0049d720(void * this, int param_1)
 * body: 0049d720-0049d7c7
 */

int __thiscall FUN_0049d720(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = FUN_0049dd50(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_0049dd50(param_1);
      iVar1 = FUN_0049d200(iVar1);
      iVar2 = FUN_0049d200(*(int *)((int)this + 0x18));
      if (iVar2 < iVar1) {
        return -1;
      }
      iVar1 = FUN_0049dd50(param_1);
      iVar1 = FUN_0049d200(iVar1);
      iVar2 = FUN_0049d200(*(int *)((int)this + 0x18));
      if (iVar1 < iVar2) {
        return 1;
      }
    }
  }
  if (*(int *)((int)this + 4) != *(int *)(param_1 + 4)) {
    return ((*(int *)(param_1 + 4) <= *(int *)((int)this + 4)) - 1 & 0xfffffffe) + 1;
  }
  if (*(int *)((int)this + 8) == *(int *)(param_1 + 8)) {
    return 0;
  }
  return ((*(int *)(param_1 + 8) <= *(int *)((int)this + 8)) - 1 & 0xfffffffe) + 1;
}


