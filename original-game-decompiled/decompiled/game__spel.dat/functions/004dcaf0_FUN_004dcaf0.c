
/* ==== FUN_004dcaf0 @ 004dcaf0 ==== 
 * signature: undefined __thiscall FUN_004dcaf0(void * this, int param_1)
 * body: 004dcaf0-004dcb24
 */

void __thiscall FUN_004dcaf0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 8);
  if (piVar3 != *(int **)((int)this + 0xc)) {
    do {
      iVar1 = *piVar3;
      iVar2 = FUN_004e25d0((void *)(iVar1 + 4),param_1);
      piVar3 = piVar3 + 1;
      **(int **)(iVar1 + 0x28) = iVar2;
    } while (piVar3 != *(int **)((int)this + 0xc));
  }
  return;
}


