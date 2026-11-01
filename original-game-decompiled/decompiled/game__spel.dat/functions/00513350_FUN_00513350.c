
/* ==== FUN_00513350 @ 00513350 ==== 
 * signature: int __thiscall FUN_00513350(void * this, uint * param_1, int * param_2)
 * body: 00513350-005134d7
 */

int __thiscall FUN_00513350(void *this,uint *param_1,int *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_10;
  int local_c;
  
  puVar7 = param_1;
  if (*(int *)((int)this + 0x84) != 0) {
    uVar3 = (int)(short)param_1[3] + 1;
    puVar6 = param_1;
    puVar9 = (uint *)param_2;
    for (iVar5 = (uVar3 & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)puVar9 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    uVar1 = *param_1;
    local_c = (int)(short)param_2[3];
    if (-1 < local_c + -1) {
      param_1 = (uint *)(param_2 + 5);
      do {
        local_10 = 3;
        puVar6 = param_1;
        do {
          pbVar8 = (byte *)((int)puVar7 + (*puVar6 & 0xffff) * 0x10 + uVar1);
          pvVar2 = *(void **)((int)this + 0x84);
          uVar4 = FUN_0051f380(pbVar8);
          uVar4 = FUN_005013d0(pvVar2,pbVar8,uVar4);
          if (uVar4 == 0) {
            *puVar6 = *puVar6 ^ (*(uint *)((int)this + 0x80) ^ *puVar6) & 0xffff;
            pbVar10 = (byte *)(*(int *)((int)this + 0x80) * 0x10 + *(int *)((int)this + 0x7c));
            *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
            *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
            *(undefined4 *)(pbVar10 + 4) = *(undefined4 *)(pbVar8 + 4);
            *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(pbVar8 + 8);
            *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(pbVar8 + 0xc);
            pvVar2 = *(void **)((int)this + 0x84);
            uVar4 = FUN_0051f380(pbVar10);
            FUN_00501220(pvVar2,(uint)pbVar10,uVar4);
          }
          else {
            *puVar6 = (int)(uVar4 - *(int *)((int)this + 0x7c)) >> 4 & 0xffffU ^
                      *puVar6 & 0xffff0000;
          }
          puVar6 = puVar6 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        param_1 = param_1 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    *param_2 = *(int *)((int)this + 0x7c) - (int)param_2;
    return uVar3 * 0x10;
  }
  for (iVar5 = (param_1[2] >> 8) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)param_2 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    param_2 = (int *)((int)param_2 + 1);
  }
  return (param_1[2] >> 8) << 4;
}


