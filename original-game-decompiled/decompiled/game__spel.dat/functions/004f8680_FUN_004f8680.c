
/* ==== FUN_004f8680 @ 004f8680 ==== 
 * signature: undefined __thiscall FUN_004f8680(void * this, undefined4 param_1)
 * body: 004f8680-004f86b2
 */

void __thiscall FUN_004f8680(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0xf6);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)((int)this + 0xf8) + uVar2 * 4);
    if ((*(byte *)(piVar1 + 1) & 4) != 0) {
      (**(code **)(*piVar1 + 0xc))(param_1);
    }
  }
  return;
}


