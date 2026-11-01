
/* ==== FUN_00500ea0 @ 00500ea0 ==== 
 * signature: undefined __thiscall FUN_00500ea0(void * this, int param_1)
 * body: 00500ea0-00501024
 */

void __thiscall FUN_00500ea0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_005012d0((void *)((int)this + 0x10),param_1,
               (param_1 * 0x3e9 >> 0x10) + param_1 * 0x4b | 0x80000000);
  uVar4 = (uint)*(ushort *)((int)this + 0x22);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x24) + uVar4 * 4) + 4))
              ((void *)((int)this + 0x10),param_1);
  }
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 == *(uint *)this) {
      uVar4 = *(uint *)(param_1 + 0x44);
    }
    iVar2 = FUN_00501770(*(void **)((int)this + 0x2c),uVar4);
    if (iVar2 < 2) {
      FUN_00501630(*(void **)((int)this + 0x2c),uVar4);
      pvVar1 = *(void **)((int)this + 0x28);
      FUN_005012d0(pvVar1,uVar4,((int)(uVar4 * 0x3e9) >> 0x10) + uVar4 * 0x4b | 0x80000000);
      uVar3 = (uint)*(ushort *)((int)pvVar1 + 0x12);
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        (**(code **)(**(int **)(*(int *)((int)pvVar1 + 0x14) + uVar3 * 4) + 4))(pvVar1,uVar4);
      }
    }
    else {
      FUN_00501820(*(void **)((int)this + 0x2c),uVar4,iVar2 - 1);
    }
  }
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == *(int *)this) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    uVar4 = *(uint *)(iVar2 + 0xa4);
    iVar2 = FUN_00501770(*(void **)((int)this + 0x30),uVar4);
    if (iVar2 < 2) {
      FUN_00501630(*(void **)((int)this + 0x30),uVar4);
      pvVar1 = *(void **)((int)this + 0x34);
      FUN_005012d0(pvVar1,uVar4,((int)(uVar4 * 0x3e9) >> 0x10) + uVar4 * 0x4b | 0x80000000);
      uVar3 = (uint)*(ushort *)((int)pvVar1 + 0x12);
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        (**(code **)(**(int **)(*(int *)((int)pvVar1 + 0x14) + uVar3 * 4) + 4))(pvVar1,uVar4);
      }
    }
    else {
      FUN_00501820(*(void **)((int)this + 0x30),uVar4,iVar2 - 1);
    }
  }
  uVar4 = (uint)*(ushort *)((int)this + 10);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)(**(int **)(*(int *)((int)this + 0xc) + uVar4 * 4) + 4))(this,param_1);
  }
  return;
}


