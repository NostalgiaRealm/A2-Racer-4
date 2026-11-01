
/* ==== FUN_004f61c0 @ 004f61c0 ==== 
 * signature: undefined __thiscall FUN_004f61c0(void * this, int param_1)
 * body: 004f61c0-004f6212
 */

void __thiscall FUN_004f61c0(void *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_004f70e0(*(void **)((int)this + 8),uVar1);
  if (uVar2 != 0) {
    uVar4 = (uint)*(ushort *)(uVar2 + 6);
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      (**(code **)**(undefined4 **)(*(int *)(uVar2 + 8) + uVar4 * 4))(param_1);
    } while (((int)uVar4 < 1) || (uVar3 = FUN_004f70e0(*(void **)((int)this + 8),uVar1), uVar3 != 0)
            );
  }
  return;
}


