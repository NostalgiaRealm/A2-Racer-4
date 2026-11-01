
/* ==== FUN_00545d80 @ 00545d80 ==== 
 * signature: undefined __thiscall FUN_00545d80(void * this, int param_1)
 * body: 00545d80-00545df8
 */

void __thiscall FUN_00545d80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int local_14;
  double local_10;
  
  iVar1 = *(int *)((int)this + 0x28);
  local_14 = param_1;
  iVar2 = *(int *)((int)this + 0x2c) + -1;
  local_10 = ABS(*(double *)(*(int *)((int)this + 0xc) + (iVar1 + 1) * param_1 * 8));
  if (param_1 < iVar2) {
    pdVar3 = (double *)(*(int *)((int)this + 0xc) + (iVar1 * iVar2 + param_1) * 8);
    do {
      if (local_10 < ABS(*pdVar3)) {
        local_14 = iVar2;
        local_10 = ABS(*pdVar3);
      }
      iVar2 = iVar2 + -1;
      pdVar3 = pdVar3 + -iVar1;
    } while (param_1 < iVar2);
    if (local_14 != param_1) {
      FUN_00545c80(this,param_1,local_14);
    }
  }
  return;
}


