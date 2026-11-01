
/* ==== FUN_0053bb40 @ 0053bb40 ==== 
 * signature: undefined __thiscall FUN_0053bb40(void * this, int param_1, int param_2)
 * body: 0053bb40-0053bb82
 */

void __thiscall FUN_0053bb40(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(iVar1 + param_1 * 4);
  iVar3 = *(int *)(iVar1 + param_2 * 4);
  *(int *)(iVar1 + param_1 * 4) = iVar3;
  *(int *)(*(int *)((int)this + 4) + param_2 * 4) = iVar2;
  if (*(int *)(iVar2 + 0xc) == param_1) {
    *(int *)(iVar2 + 0xc) = param_2;
  }
  else {
    *(int *)(iVar2 + 0x10) = param_2;
  }
  if (*(int *)(iVar3 + 0xc) == param_2) {
    *(int *)(iVar3 + 0xc) = param_1;
    return;
  }
  *(int *)(iVar3 + 0x10) = param_1;
  return;
}


