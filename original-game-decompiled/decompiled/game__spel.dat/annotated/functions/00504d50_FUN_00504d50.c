
/* ==== FUN_00504d50 @ 00504d50 ==== 
 * signature: undefined __thiscall FUN_00504d50(void * this, void * param_1)
 * body: 00504d50-00504d82
 */

void __thiscall FUN_00504d50(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004f5240(param_1,*(uint *)((int)this + 0x20));
  uVar3 = (uint)*(ushort *)(iVar2 + 2);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 4) + uVar3 * 4) + 0x40);
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar1 + 0x5c) & 0xffffff00;
  }
  return;
}


