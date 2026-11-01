
/* ==== FUN_004f8540 @ 004f8540 ==== 
 * signature: undefined __thiscall FUN_004f8540(void * this, undefined4 param_1)
 * body: 004f8540-004f856c
 */

void __thiscall FUN_004f8540(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x152);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x154) + uVar1 * 4) + 4))(param_1);
  }
  return;
}


