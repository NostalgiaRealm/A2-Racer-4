
/* ==== FUN_00500d10 @ 00500d10 ==== 
 * signature: undefined __thiscall FUN_00500d10(void * this, uint param_1)
 * body: 00500d10-00500e92
 */

void __thiscall FUN_00500d10(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_00501220((void *)((int)this + 0x10),param_1,
               ((int)(param_1 * 0x3e9) >> 0x10) + param_1 * 0x4b | 0x80000000);
  uVar4 = (uint)*(ushort *)((int)this + 0x22);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)**(undefined4 **)(*(int *)((int)this + 0x24) + uVar4 * 4))
              ((void *)((int)this + 0x10),param_1);
  }
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 == *(uint *)this) {
      uVar4 = *(uint *)(param_1 + 0x44);
    }
    iVar2 = FUN_00501770(*(void **)((int)this + 0x2c),uVar4);
    if (iVar2 == 0) {
      FUN_00501520(*(void **)((int)this + 0x2c),uVar4,1);
      pvVar1 = *(void **)((int)this + 0x28);
      FUN_00501220(pvVar1,uVar4,((int)(uVar4 * 0x3e9) >> 0x10) + uVar4 * 0x4b | 0x80000000);
      uVar3 = (uint)*(ushort *)((int)pvVar1 + 0x12);
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        (**(code **)**(undefined4 **)(*(int *)((int)pvVar1 + 0x14) + uVar3 * 4))(pvVar1,uVar4);
      }
    }
    else {
      FUN_00501820(*(void **)((int)this + 0x2c),uVar4,iVar2 + 1);
    }
  }
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == *(int *)this) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    uVar4 = *(uint *)(iVar2 + 0xa4);
    iVar2 = FUN_00501770(*(void **)((int)this + 0x30),uVar4);
    if (iVar2 == 0) {
      FUN_00501520(*(void **)((int)this + 0x30),uVar4,1);
      pvVar1 = *(void **)((int)this + 0x34);
      FUN_00501220(pvVar1,uVar4,((int)(uVar4 * 0x3e9) >> 0x10) + uVar4 * 0x4b | 0x80000000);
      uVar3 = (uint)*(ushort *)((int)pvVar1 + 0x12);
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        (**(code **)**(undefined4 **)(*(int *)((int)pvVar1 + 0x14) + uVar3 * 4))(pvVar1,uVar4);
      }
    }
    else {
      FUN_00501820(*(void **)((int)this + 0x30),uVar4,iVar2 + 1);
    }
  }
  uVar4 = (uint)*(ushort *)((int)this + 10);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)**(undefined4 **)(*(int *)((int)this + 0xc) + uVar4 * 4))(this,param_1);
  }
  return;
}


