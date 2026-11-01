
/* ==== FUN_004509b0 @ 004509b0 ==== 
 * signature: undefined __stdcall FUN_004509b0(void)
 * body: 004509b0-00450afe
 */

void FUN_004509b0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  float local_4c [3];
  undefined4 local_40 [8];
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  iVar3 = FUN_00447540();
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
    puVar5 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_20 = -local_20;
    local_1c = -local_1c;
    local_18 = -local_18;
    iVar3 = DAT_006fba58 * 0xf0 + DAT_00715e50;
    fVar1 = *(float *)(iVar3 + 0xbc);
    fVar2 = *(float *)(iVar3 + 0xc4);
    lVar6 = __ftol();
    iVar3 = (DAT_005b23bc & (uint)lVar6) * 4;
    local_4c[0] = *(float *)(iVar3 + DAT_0073b578) * fVar1 -
                  *(float *)(iVar3 + DAT_0073b530) * fVar2;
    local_4c[1] = 0.0;
    local_4c[2] = *(float *)(iVar3 + DAT_0073b578) * fVar2 +
                  *(float *)(iVar3 + DAT_0073b530) * fVar1;
    local_10 = local_10 * 0.1;
    local_c = local_c * 0.1;
    local_8 = local_8 * 0.1;
    FUN_004a0040(&DAT_006fbb58,local_40,local_4c);
  }
  return;
}


