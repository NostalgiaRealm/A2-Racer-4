
/* ==== FUN_004f7f00 @ 004f7f00 ==== 
 * signature: undefined __thiscall FUN_004f7f00(void * this, undefined4 param_1)
 * body: 004f7f00-004f7f2c
 */

void __thiscall FUN_004f7f00(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x15a);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x15c) + uVar1 * 4) + 8))(param_1);
  }
  return;
}


