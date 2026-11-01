
/* ==== FUN_004f8600 @ 004f8600 ==== 
 * signature: undefined __thiscall FUN_004f8600(void * this, undefined4 param_1)
 * body: 004f8600-004f8631
 */

void __thiscall FUN_004f8600(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0xf6);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0xf8) + uVar2 * 4);
    if ((*(byte *)(puVar1 + 1) & 1) != 0) {
      (**(code **)*puVar1)(param_1);
    }
  }
  return;
}


