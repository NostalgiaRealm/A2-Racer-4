
/* ==== FUN_0053e970 @ 0053e970 ==== 
 * signature: undefined __thiscall FUN_0053e970(void * this, int * param_1)
 * body: 0053e970-0053ea73
 */

void __thiscall FUN_0053e970(void *this,int *param_1)

{
  int *piVar1;
  byte *this_00;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *this_01;
  undefined2 *this_02;
  
  piVar3 = (int *)param_1[8];
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)*piVar3;
    FUN_004f6ce0(param_1,piVar3);
    FUN_004f6c60(param_1,(int)piVar3);
    FUN_004f6db0(this,piVar3);
    FUN_004f6d10(this,(int)piVar3);
    piVar3 = piVar1;
  }
  uVar4 = (uint)*(ushort *)((int)param_1 + 0x26);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    this_00 = *(byte **)(param_1[10] + uVar4 * 4);
    uVar5 = FUN_004f5240(this_00,(uint)param_1);
    this_01 = (void *)FUN_004f5240(this_00,(uint)this);
    if (this_01 == (void *)0x0) {
      FUN_004f5330(this_00,uVar5);
      *(void **)(uVar5 + 8) = this;
      FUN_004f5290(this_00,uVar5);
      FUN_004f6e60(param_1,this_00);
      FUN_004f6de0(this,this_00);
    }
    else {
      this_02 = (undefined2 *)FUN_004f5240(this_00,(uint)param_1);
      uVar5 = (uint)(ushort)this_02[1];
      while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
        iVar2 = *(int *)(*(int *)(this_02 + 2) + uVar5 * 4);
        FUN_0051edb0(this_01,iVar2);
        FUN_0053ea80(this_02,iVar2);
      }
      FUN_004f5360(this_00,this_02);
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x18))(1);
  }
  return;
}


