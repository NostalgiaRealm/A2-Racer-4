
/* ==== FUN_0050b750 @ 0050b750 ==== 
 * signature: undefined __thiscall FUN_0050b750(void * this, int param_1, int param_2)
 * body: 0050b750-0050b802
 */

void __thiscall FUN_0050b750(void *this,int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_2 + 0x22);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x24) + uVar7 * 4);
    fVar3 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(iVar1 + 0x14) - *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar1 + 0x18) - *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(iVar1 + 0x20) + *(float *)(param_1 + 0x20);
    if (fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5 <= fVar4 * fVar4) {
      puVar2 = *(ushort **)((int)this + 0x2b0);
      if (*puVar2 <= puVar2[1]) {
        FUN_004f6060(puVar2);
      }
      *(int *)(*(int *)(puVar2 + 2) + (uint)puVar2[1] * 4) = iVar1;
      puVar2[1] = puVar2[1] + 1;
    }
  }
  uVar7 = (uint)*(ushort *)(param_2 + 0x1a);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    FUN_0050b750(this,param_1,*(int *)(*(int *)(param_2 + 0x1c) + uVar7 * 4));
  }
  return;
}


