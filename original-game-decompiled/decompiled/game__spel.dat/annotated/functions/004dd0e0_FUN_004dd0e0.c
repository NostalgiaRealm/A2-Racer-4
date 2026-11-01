
/* ==== FUN_004dd0e0 @ 004dd0e0 ==== 
 * signature: undefined __thiscall FUN_004dd0e0(void * this, undefined4 param_1)
 * body: 004dd0e0-004dd10b
 */

void __thiscall FUN_004dd0e0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x4c);
  if (iVar1 != *(int *)((int)this + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar1 + -4) + 0x5c))(param_1);
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)((int)this + 0x48));
  }
  return;
}


