
/* ==== FUN_005399a0 @ 005399a0 ==== 
 * signature: undefined __thiscall FUN_005399a0(void * this, int param_1, int param_2, uint param_3, uint param_4)
 * body: 005399a0-00539af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005399a0(void *this,int param_1,int param_2,uint param_3,uint param_4)

{
  void *this_00;
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  short sVar4;
  
  pvVar3 = (void *)((int)this + 0x18);
  this_00 = (void *)((int)this + 0x34);
  sVar4 = (short)this;
  pvVar2 = this_00;
  if (*(int *)(param_2 + 4) == 2) {
    FUN_0053bbc0(this_00,sVar4,param_2);
    FUN_0053bc80(this_00,param_4,0);
    (**(code **)(**(int **)(param_2 + 0x8c) + 0x1c))
              ((uint *)(param_4 & 0xfffffff0) + ((*(uint *)(param_4 & 0xfffffff0) & 0xfff) + 1) * -4
              );
  }
  else if (*(int *)(param_2 + 4) == 3) {
    FUN_0053bbc0(pvVar3,sVar4,param_2);
    *(undefined2 *)((int)this + 0x32) = 3;
    *(uint *)((int)this + 0x2c) = param_4;
    pvVar2 = pvVar3;
    pvVar3 = this_00;
  }
  else {
    _DAT_00000000 = 0;
  }
  sVar1 = (short)pvVar3;
  if (*(int *)(param_1 + 4) == 2) {
    *(short *)((int)pvVar3 + 0x18) = sVar4 - sVar1;
    *(int *)((int)pvVar3 + 0x10) = param_1;
    FUN_0053bc80(pvVar3,param_3,0);
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x1c))
              ((uint *)(param_3 & 0xfffffff0) + ((*(uint *)(param_3 & 0xfffffff0) & 0xfff) + 1) * -4
              );
  }
  else if (*(int *)(param_1 + 4) == 3) {
    *(short *)((int)pvVar3 + 0x18) = sVar4 - sVar1;
    *(int *)((int)pvVar3 + 0x10) = param_1;
    FUN_0053bc80(pvVar3,param_3,3);
  }
  else {
    _DAT_00000000 = 0;
  }
  *(short *)((int)pvVar3 + 0x18) = sVar4 - sVar1;
  *(short *)((int)pvVar2 + 0x18) = sVar4 - (short)pvVar2;
  *(float *)((int)this + 0x50) = *(float *)(param_1 + 0xa0) + *(float *)(param_2 + 0xa0);
  pvVar3 = *(void **)(*(int *)(param_1 + 0x18) + 0x10);
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    FUN_0053a410(pvVar3,this);
    return;
  }
  *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) & 0xffffdfff | 0x1000;
  FUN_0053a4e0(pvVar3,this);
  return;
}


