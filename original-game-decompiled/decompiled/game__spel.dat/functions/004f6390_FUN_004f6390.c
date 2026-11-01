
/* ==== FUN_004f6390 @ 004f6390 ==== 
 * signature: undefined __thiscall FUN_004f6390(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004f6390-004f63e6
 */

void __thiscall FUN_004f6390(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
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
      piVar1 = *(int **)(*(int *)(uVar2 + 8) + uVar4 * 4);
    } while ((((*(byte *)(piVar1 + 1) & 4) == 0) ||
             ((**(code **)(*piVar1 + 8))(param_2), (int)uVar4 < 1)) ||
            (uVar3 = FUN_004f71e0(*(void **)((int)this + 0xc),param_1), uVar3 != 0));
  }
  return;
}


