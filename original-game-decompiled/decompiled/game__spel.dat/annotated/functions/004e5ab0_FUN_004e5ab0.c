
/* ==== FUN_004e5ab0 @ 004e5ab0 ==== 
 * signature: int __thiscall FUN_004e5ab0(void * this, int param_1)
 * body: 004e5ab0-004e5af7
 */

int __thiscall FUN_004e5ab0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  iVar1 = 0;
  for (iVar3 = *(int *)((int)this + 8); iVar3 != *(int *)((int)this + 0xc); iVar3 = iVar3 + 0x10) {
    if (*(char *)(iVar3 + 0xc) == '\0') {
      iVar2 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) + 1;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = (iVar2 * iVar1 - *(int *)(iVar3 + 4)) + *piVar4;
    piVar4 = piVar4 + 1;
  }
  return iVar1;
}


