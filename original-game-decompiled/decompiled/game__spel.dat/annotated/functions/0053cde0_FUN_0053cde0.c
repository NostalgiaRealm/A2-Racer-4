
/* ==== FUN_0053cde0 @ 0053cde0 ==== 
 * signature: int __thiscall FUN_0053cde0(void * this, int param_1)
 * body: 0053cde0-0053cf4e
 */

int __thiscall FUN_0053cde0(void *this,int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  float10 fVar9;
  double local_20 [4];
  
  uVar7 = *(uint *)(param_1 + 0x14) >> 8 & 3;
  uVar2 = *(undefined2 *)(param_1 + 0x32 + uVar7 * 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x2c + uVar7 * 0x1c);
  iVar4 = *(int *)(param_1 + 0x28 + uVar7 * 0x1c);
  piVar1 = (int *)((int)this + 8);
  *(int *)((int)this + 0x10) = iVar4;
  *(short *)((int)this + 0x14) = (short)this - (short)piVar1;
  iVar5 = *(int *)(iVar4 + 0x28);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = iVar5;
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar1;
  }
  *(int **)(iVar4 + 0x28) = piVar1;
  *(undefined4 *)((int)this + 0x18) = uVar3;
  *(ushort *)((int)this + 0x16) =
       (ushort)(byte)((byte)*(ushort *)((int)this + 0x16) ^ (byte)uVar2) ^
       *(ushort *)((int)this + 0x16);
  uVar7 = (*(uint *)(param_1 + 0x14) ^ 0x100) >> 8 & 3;
  uVar3 = *(undefined4 *)(param_1 + 0x2c + uVar7 * 0x1c);
  piVar1 = (int *)((int)this + 0x1c);
  iVar4 = param_1 + 0x18 + uVar7 * 0x1c;
  iVar5 = *(int *)(iVar4 + 0x10);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  *(int *)((int)this + 0x24) = iVar5;
  *(short *)((int)this + 0x28) = (short)this - (short)piVar1;
  iVar6 = *(int *)(iVar5 + 0x28);
  *(undefined4 *)((int)this + 0x20) = 0;
  *piVar1 = iVar6;
  if (iVar6 != 0) {
    *(int **)(iVar6 + 4) = piVar1;
  }
  *(int **)(iVar5 + 0x28) = piVar1;
  *(ushort *)((int)this + 0x2a) =
       (ushort)(byte)((byte)*(ushort *)((int)this + 0x2a) ^ (byte)uVar2) ^
       *(ushort *)((int)this + 0x2a);
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(iVar5 + 0x120);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(iVar5 + 0x124);
  if (*(short *)(iVar4 + 0x1a) == 2) {
    puVar8 = (uint *)((uint)*(uint **)(iVar4 + 0x14) & 0xfffffff0);
    FUN_00509c90(*(uint **)(iVar4 + 0x14),(int *)(puVar8 + ((*puVar8 & 0xfff) + 1) * -4),local_20);
    fVar9 = FUN_004f9470(local_20);
    *(float *)((int)this + 0x4c) = (float)((float10)1.0 / fVar9);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xffffff01 | 1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar3 = DAT_0074d62c;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffff00;
  *(undefined2 *)((int)this + 0x5c) = 0x14;
  return (int)this;
}


