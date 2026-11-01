
/* ==== FUN_00491980 @ 00491980 ==== 
 * signature: undefined __thiscall FUN_00491980(void * this, undefined4 param_1)
 * body: 00491980-004919a7
 */

void __thiscall FUN_00491980(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 4) + 4) + iVar1) + 0x20))(param_1);
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x10);
  return;
}


