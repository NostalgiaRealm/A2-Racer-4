
/* ==== FUN_004459b0 @ 004459b0 ==== 
 * signature: undefined __cdecl FUN_004459b0(int param_1)
 * body: 004459b0-00445b0a
 */

void __cdecl FUN_004459b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = FUN_00445950(param_1);
  puVar7 = (undefined4 *)(&DAT_006ed700 + iVar4 * 0x134);
  puVar8 = local_40;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = FUN_00445950(param_1);
  fVar1 = *(float *)(&DAT_006ed800 + iVar4 * 0x134);
  fVar2 = *(float *)(&DAT_006ed804 + iVar4 * 0x134);
  fVar3 = *(float *)(&DAT_006ed808 + iVar4 * 0x134);
  FUN_00445950(param_1);
  puVar7 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar8 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_c = fVar2 + local_c;
  local_8 = fVar3 + local_8;
  local_10 = fVar1 + local_10;
  iVar4 = FUN_00445950(param_1);
  iVar4 = *(int *)(&DAT_006ed82c + iVar4 * 0x134);
  iVar6 = FUN_00445950(param_1);
  iVar6 = *(int *)(&DAT_006ed824 + iVar6 * 0x134);
  iVar5 = FUN_00445950(param_1);
  local_c = *(float *)(&DAT_006ed828 + iVar5 * 0x134) *
            *(float *)(DAT_0073b578 +
                      ((int)(0x800 / (longlong)iVar4) * iVar6 + 300U & DAT_005b23bc) * 4) + local_c;
  iVar4 = FUN_00445950(param_1);
  puVar7 = local_40;
  puVar8 = (undefined4 *)(&DAT_006ed700 + iVar4 * 0x134);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}


