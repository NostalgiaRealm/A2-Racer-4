
/* ==== FUN_0050fa00 @ 0050fa00 ==== 
 * signature: undefined __thiscall FUN_0050fa00(void * this, int param_1, int param_2)
 * body: 0050fa00-0050fa44
 */

void __thiscall FUN_0050fa00(void *this,int param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  dVar1 = *(double *)(param_1 + 8);
  iVar4 = param_2 + *(int *)this;
  *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = param_1;
  uVar2 = *(uint *)this;
  while( true ) {
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) {
      return;
    }
    iVar4 = iVar4 >> 1;
    iVar3 = *(int *)(*(int *)((int)this + 4) + iVar4 * 4);
    if ((iVar3 != 0) && (*(double *)(iVar3 + 8) <= dVar1)) break;
    *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = param_1;
  }
  return;
}


