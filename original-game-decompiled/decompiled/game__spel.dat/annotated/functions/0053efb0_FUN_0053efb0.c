
/* ==== FUN_0053efb0 @ 0053efb0 ==== 
 * signature: undefined __thiscall FUN_0053efb0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0053efb0-0053f007
 */

void __thiscall FUN_0053efb0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(ushort *)((int)this + 0x36);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar1 = *(int *)(*(int *)((int)this + 0x38) + uVar2 * 4);
    uVar3 = (uint)*(ushort *)(iVar1 + 2);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      FUN_00505cb0(*(void **)(*(int *)(iVar1 + 4) + uVar3 * 4),(double)CONCAT44(param_2,param_1));
    }
  }
  return;
}


