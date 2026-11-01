
/* ==== FUN_00544c90 @ 00544c90 ==== 
 * signature: undefined __thiscall FUN_00544c90(void * this, int param_1, int param_2)
 * body: 00544c90-00544cbe
 */

void __thiscall FUN_00544c90(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x44);
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  iVar3 = *(int *)(iVar1 + param_1 * 4);
  *(int *)(iVar1 + param_1 * 4) = iVar2;
  *(int *)(*(int *)((int)this + 0x44) + param_2 * 4) = iVar3;
  *(int *)(*(int *)((int)this + 0x48) + iVar2 * 4) = param_1;
  *(int *)(*(int *)((int)this + 0x48) + iVar3 * 4) = param_2;
  return;
}


