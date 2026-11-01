
/* ==== FUN_0050b550 @ 0050b550 ==== 
 * signature: undefined __thiscall FUN_0050b550(void * this, int * param_1)
 * body: 0050b550-0050b746
 */

void __thiscall FUN_0050b550(void *this,int *param_1)

{
  double dVar1;
  double dVar2;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057394b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x28 < *(int *)(*(int *)((int)this + 700) + 0x10)) {
    ExceptionList = &local_c;
    FUN_0055ab10((byte *)s_____ERROR_____Excessive_sizeleve_005b9814);
  }
  puVar3 = *(uint **)((int)this + 700);
  pvVar5 = operator_new(0x28);
  pbVar9 = (byte *)0x0;
  local_4 = 0;
  if (pvVar5 != (void *)0x0) {
    pbVar9 = (byte *)FUN_0050ac60((int)pvVar5);
  }
  local_4 = 0xffffffff;
  uVar6 = *puVar3 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  uVar7 = puVar3[1] & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  uVar8 = puVar3[2] & 0x80000001;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
  }
  *(int *)pbVar9 = (int)*puVar3 / 2;
  *(int *)(pbVar9 + 4) = (int)puVar3[1] / 2;
  *(int *)(pbVar9 + 8) = (int)puVar3[2] / 2;
  uVar4 = puVar3[3];
  *(uint *)(pbVar9 + 0xc) = uVar4 + 1;
  *(uint *)(pbVar9 + 0x10) = puVar3[4] + 1;
  dVar1 = *(double *)((int)this + (uVar4 + 1) * 8 + 0x140);
  dVar2 = *(double *)((int)this + param_1[3] * 8 + 0x140);
  if (uVar6 == 0xffffffff) {
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
  }
  else if ((uVar6 == 0) && ((double)*param_1 * dVar2 < (double)*(int *)pbVar9 * dVar1)) {
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
  }
  if (uVar7 == 0xffffffff) {
    *(int *)(pbVar9 + 4) = *(int *)(pbVar9 + 4) + -1;
  }
  else if ((uVar7 == 0) && ((double)param_1[1] * dVar2 < (double)*(int *)(pbVar9 + 4) * dVar1)) {
    *(int *)(pbVar9 + 4) = *(int *)(pbVar9 + 4) + -1;
  }
  if (uVar8 == 0xffffffff) {
    *(int *)(pbVar9 + 8) = *(int *)(pbVar9 + 8) + -1;
  }
  else if ((uVar8 == 0) && ((double)param_1[2] * dVar2 < (double)*(int *)(pbVar9 + 8) * dVar1)) {
    *(int *)(pbVar9 + 8) = *(int *)(pbVar9 + 8) + -1;
  }
  if (0x1a < *(ushort *)(pbVar9 + 0x1a)) {
    FUN_0055ab10((byte *)s_____ERROR_______Mehr_als_27_Kind_005b97cc);
  }
  if (*(ushort *)(pbVar9 + 0x18) <= *(ushort *)(pbVar9 + 0x1a)) {
    FUN_004f6060((ushort *)(pbVar9 + 0x18));
  }
  *(uint **)(*(int *)(pbVar9 + 0x1c) + (uint)*(ushort *)(pbVar9 + 0x1a) * 4) = puVar3;
  *(short *)(pbVar9 + 0x1a) = *(short *)(pbVar9 + 0x1a) + 1;
  puVar3[5] = (uint)pbVar9;
  pvVar5 = *(void **)((int)this + 0x2b4);
  uVar6 = FUN_0050fe90(pbVar9);
  FUN_00501220(pvVar5,(uint)pbVar9,uVar6);
  *(byte **)((int)this + 700) = pbVar9;
  ExceptionList = local_c;
  return;
}


