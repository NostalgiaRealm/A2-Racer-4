
/* ==== FUN_004f8640 @ 004f8640 ==== 
 * signature: undefined __thiscall FUN_004f8640(void * this, undefined4 param_1)
 * body: 004f8640-004f8672
 */

void __thiscall FUN_004f8640(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0xf6);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)((int)this + 0xf8) + uVar2 * 4);
    if ((*(byte *)(piVar1 + 1) & 4) != 0) {
      (**(code **)(*piVar1 + 8))(param_1);
    }
  }
  return;
}


