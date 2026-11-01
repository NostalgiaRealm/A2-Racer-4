
/* ==== FUN_00504690 @ 00504690 ==== 
 * signature: undefined __thiscall FUN_00504690(void * this, int param_1)
 * body: 00504690-005046e0
 */

void __thiscall FUN_00504690(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  iVar1 = *(int *)((int)this + 0x10);
  uVar2 = *(undefined4 *)((int)this + 0x24);
  FUN_005045f0(this,(undefined4 *)(param_1 + 0x50));
  iVar3 = *(int *)(iVar1 + 0x18);
  *(int *)(param_1 + 0x40) = iVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((int)this + 0x2c);
  piVar4 = *(int **)(iVar3 + 0xac);
  fVar5 = (float10)(**(code **)(*piVar4 + 8))(param_1);
  *(float *)(param_1 + 0x68) = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar4 + 4))(param_1);
  *(float *)((int)this + 0x44) = (float)fVar5;
  return;
}


