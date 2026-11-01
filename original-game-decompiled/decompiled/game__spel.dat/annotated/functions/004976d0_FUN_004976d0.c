
/* ==== FUN_004976d0 @ 004976d0 ==== 
 * signature: undefined __thiscall FUN_004976d0(void * this, int param_1)
 * body: 004976d0-00497738
 */

void __thiscall FUN_004976d0(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    (**(code **)(**(int **)((int)this + 0x18) + 0x20))(1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x18) + 0x20))(0);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + 0x44);
  if (iVar1 != -1) {
    iVar1 = DAT_0073b0d0 + iVar1 * 0xa9;
    lVar2 = __ftol();
    *(int *)(iVar1 + 8) = (int)lVar2;
  }
  return;
}


