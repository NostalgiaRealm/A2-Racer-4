
/* ==== FUN_0050b350 @ 0050b350 ==== 
 * signature: undefined __thiscall FUN_0050b350(void * this, byte * param_1, int * param_2)
 * body: 0050b350-0050b54b
 */

void __thiscall FUN_0050b350(void *this,byte *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057392b;
  iVar5 = *(int *)(param_1 + 0x10) - param_2[4];
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (iVar5 != 1) {
    pvVar2 = operator_new(0x28);
    pbVar6 = (byte *)0x0;
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      pbVar6 = (byte *)FUN_0050ac60((int)pvVar2);
    }
    local_4 = 0xffffffff;
    iVar1 = *(int *)param_1 + 1;
    bVar4 = (byte)iVar5;
    if (*param_2 < iVar1 << (bVar4 & 0x1f)) {
      iVar1 = *(int *)param_1 * 2;
      iVar5 = iVar1 + 1;
      if (*param_2 < iVar5 << (bVar4 - 1 & 0x1f)) {
        *(int *)pbVar6 = iVar1;
      }
      else {
        *(int *)pbVar6 = iVar5;
      }
    }
    else {
      *(int *)pbVar6 = iVar1 * 2;
    }
    iVar5 = *(int *)(param_1 + 4) + 1;
    if (param_2[1] < iVar5 << (bVar4 & 0x1f)) {
      iVar1 = *(int *)(param_1 + 4) * 2;
      iVar5 = iVar1 + 1;
      if (param_2[1] < iVar5 << (bVar4 - 1 & 0x1f)) {
        *(int *)(pbVar6 + 4) = iVar1;
      }
      else {
        *(int *)(pbVar6 + 4) = iVar5;
      }
    }
    else {
      *(int *)(pbVar6 + 4) = iVar5 * 2;
    }
    iVar5 = *(int *)(param_1 + 8) + 1;
    if (param_2[2] < iVar5 << (bVar4 & 0x1f)) {
      iVar1 = *(int *)(param_1 + 8) * 2;
      iVar5 = iVar1 + 1;
      if (param_2[2] < iVar5 << (bVar4 - 1 & 0x1f)) {
        *(int *)(pbVar6 + 8) = iVar1;
      }
      else {
        *(int *)(pbVar6 + 8) = iVar5;
      }
    }
    else {
      *(int *)(pbVar6 + 8) = iVar5 * 2;
    }
    *(int *)(pbVar6 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar5 = *(int *)(param_1 + 0x10);
    *(byte **)(pbVar6 + 0x14) = param_1;
    *(int *)(pbVar6 + 0x10) = iVar5 + -1;
    if (*(ushort *)(param_1 + 0x18) <= *(ushort *)(param_1 + 0x1a)) {
      FUN_004f6060((ushort *)(param_1 + 0x18));
    }
    *(byte **)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x1a) * 4) = pbVar6;
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 1;
    pvVar2 = *(void **)((int)this + 0x2b4);
    uVar3 = FUN_0050fe90(pbVar6);
    FUN_00501220(pvVar2,(uint)pbVar6,uVar3);
    if (0x1b < *(ushort *)(param_1 + 0x1a)) {
      FUN_0055ab10((byte *)s_____ERROR_____Excessive_amount_o_005b979c);
    }
    param_1 = pbVar6;
    iVar5 = *(int *)(pbVar6 + 0x10) - param_2[4];
  }
  param_2[5] = (int)param_1;
  if (*(ushort *)(param_1 + 0x18) <= *(ushort *)(param_1 + 0x1a)) {
    FUN_004f6060((ushort *)(param_1 + 0x18));
  }
  *(int **)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x1a) * 4) = param_2;
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 1;
  if (0x1b < *(ushort *)(param_1 + 0x1a)) {
    FUN_0055ab10((byte *)s_____ERROR_____Excessive_amount_o_005b979c);
  }
  ExceptionList = local_c;
  return;
}


