
/* ==== FUN_004f62e0 @ 004f62e0 ==== 
 * signature: undefined __thiscall FUN_004f62e0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004f62e0-004f6335
 */

void __thiscall FUN_004f62e0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_004f71e0(*(void **)((int)this + 0xc),param_1);
  if (uVar2 != 0) {
    uVar4 = (uint)*(ushort *)(uVar2 + 6);
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      puVar1 = *(undefined4 **)(*(int *)(uVar2 + 8) + uVar4 * 4);
    } while ((((*(byte *)(puVar1 + 1) & 1) == 0) || ((**(code **)*puVar1)(param_2), (int)uVar4 < 1))
            || (uVar3 = FUN_004f71e0(*(void **)((int)this + 0xc),param_1), uVar3 != 0));
  }
  return;
}


