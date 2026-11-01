
/* ==== FUN_004f85d0 @ 004f85d0 ==== 
 * signature: undefined __thiscall FUN_004f85d0(void * this, undefined4 param_1)
 * body: 004f85d0-004f85fc
 */

void __thiscall FUN_004f85d0(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x152);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x154) + uVar1 * 4) + 8))(param_1);
  }
  return;
}


