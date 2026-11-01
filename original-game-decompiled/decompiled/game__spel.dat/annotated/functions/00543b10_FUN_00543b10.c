
/* ==== FUN_00543b10 @ 00543b10 ==== 
 * signature: undefined __thiscall FUN_00543b10(void * this, int param_1)
 * body: 00543b10-00543b8c
 */

void __thiscall FUN_00543b10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int local_14;
  double local_10;
  
  iVar1 = *(int *)((int)this + 0xc);
  local_14 = -1;
  iVar2 = *(int *)((int)this + 8) + -1;
  local_10 = ABS(*(double *)(*(int *)((int)this + 0x10) + (iVar1 + 1) * param_1 * 8));
  if (param_1 < iVar2) {
    pdVar3 = (double *)(*(int *)((int)this + 0x10) + (iVar1 * iVar2 + param_1) * 8);
    do {
      if (local_10 < ABS(*pdVar3)) {
        local_14 = iVar2;
        local_10 = ABS(*pdVar3);
      }
      iVar2 = iVar2 + -1;
      pdVar3 = pdVar3 + -iVar1;
    } while (param_1 < iVar2);
    if (-1 < local_14) {
      FUN_00543b90(this,param_1,local_14);
    }
  }
  return;
}


