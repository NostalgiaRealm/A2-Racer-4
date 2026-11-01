
/* ==== FUN_0050c110 @ 0050c110 ==== 
 * signature: undefined __thiscall FUN_0050c110(void * this, int param_1)
 * body: 0050c110-0050c13c
 */

void __thiscall FUN_0050c110(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x2a);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x2c) + uVar2 * 4) + 0xc))(this);
  }
  return;
}


