
/* ==== FUN_0053eb70 @ 0053eb70 ==== 
 * signature: int __thiscall FUN_0053eb70(void * this, int param_1, int param_2)
 * body: 0053eb70-0053ebb0
 */

int __thiscall FUN_0053eb70(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(ushort *)((int)this + 0x36) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)((int)this + 0x38) + iVar2 * 4);
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x2c) == param_1) || (*(int *)(iVar1 + 0x30) == param_1)) {
        if (*(int *)(iVar1 + 0x2c) == param_2) {
          return iVar1;
        }
        if (*(int *)(iVar1 + 0x30) == param_2) {
          return iVar1;
        }
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}


