
/* ==== FUN_004f8570 @ 004f8570 ==== 
 * signature: undefined __thiscall FUN_004f8570(void * this, undefined4 param_1)
 * body: 004f8570-004f859b
 */

void __thiscall FUN_004f8570(void *this,undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x152);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)((int)this + 0x154) + uVar1 * 4))(param_1);
  }
  return;
}


