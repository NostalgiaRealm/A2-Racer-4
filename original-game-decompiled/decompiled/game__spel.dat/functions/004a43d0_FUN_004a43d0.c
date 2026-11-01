
/* ==== FUN_004a43d0 @ 004a43d0 ==== 
 * signature: undefined __thiscall FUN_004a43d0(void * this, int param_1)
 * body: 004a43d0-004a43fa
 */

void __thiscall FUN_004a43d0(void *this,int param_1)

{
  int iVar1;
  
  FUN_004a49d0((undefined4 *)((int)this + 0x18),param_1);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x18))();
  *(void **)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + (iVar1 + -1) * 4) + 0x2c) = this;
  return;
}


