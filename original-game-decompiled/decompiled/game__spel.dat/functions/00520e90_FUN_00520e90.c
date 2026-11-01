
/* ==== FUN_00520e90 @ 00520e90 ==== 
 * signature: undefined4 * __thiscall FUN_00520e90(void * this, int * param_1)
 * body: 00520e90-00520fab
 */

undefined4 * __thiscall FUN_00520e90(void *this,int *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int local_18;
  int local_14;
  
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar4 = this;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(int **)this = param_1;
  iVar6 = *param_1;
  *(int *)((int)this + 0x3c) = iVar6;
  puVar4 = FUN_004f5aa0(0x28,iVar6);
  *(undefined4 **)((int)this + 0x38) = puVar4;
  local_14 = 0;
  if (0 < *(int *)((int)this + 0x3c)) {
    iVar6 = 0;
    local_18 = 0;
    do {
      puVar5 = (undefined8 *)(param_1[1] + local_18);
      puVar7 = (undefined8 *)(*(int *)((int)this + 0x38) + iVar6);
      iVar6 = iVar6 + 0x28;
      uVar1 = puVar5[1];
      uVar2 = *(undefined4 *)(puVar5 + 2);
      uVar3 = *(undefined4 *)((int)puVar5 + 0x14);
      *puVar7 = *puVar5;
      puVar7[1] = uVar1;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      *(undefined4 *)((int)puVar7 + 0x14) = uVar3;
      *(void **)(*(int *)((int)this + 0x38) + -8 + iVar6) = this;
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x20;
    } while (local_14 < *(int *)((int)this + 0x3c));
  }
  iVar8 = 0;
  iVar6 = param_1[4];
  *(int *)((int)this + 0x44) = iVar6;
  puVar4 = FUN_004f5aa0(0xc,iVar6);
  *(undefined4 **)((int)this + 0x40) = puVar4;
  if (*(int *)((int)this + 0x44) < 1) {
    *(undefined4 *)this = 0;
    return this;
  }
  local_14 = 0;
  local_18 = 0;
  do {
    FUN_00520fb0((void *)(local_14 + *(int *)((int)this + 0x40)),local_18 + param_1[5],this);
    iVar8 = iVar8 + 1;
    local_18 = local_18 + 0x30;
    local_14 = local_14 + 0xc;
  } while (iVar8 < *(int *)((int)this + 0x44));
  *(undefined4 *)this = 0;
  return this;
}


