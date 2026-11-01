
/* ==== FUN_005004b0 @ 005004b0 ==== 
 * signature: undefined __thiscall FUN_005004b0(void * this, int param_1, int param_2)
 * body: 005004b0-005004d2
 */

void __thiscall FUN_005004b0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  uVar2 = *(undefined4 *)(iVar1 + param_1 * 4);
  *(undefined4 *)(iVar1 + param_1 * 4) = *(undefined4 *)(iVar1 + param_2 * 4);
  *(undefined4 *)(*(int *)((int)this + 0x20) + param_2 * 4) = uVar2;
  return;
}


