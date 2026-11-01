
/* ==== FUN_0041d9b0 @ 0041d9b0 ==== 
 * signature: undefined __stdcall FUN_0041d9b0(void)
 * body: 0041d9b0-0041db67
 */

void FUN_0041d9b0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c [3];
  undefined4 local_40 [16];
  
  puVar7 = (undefined4 *)
           (*(int *)(DAT_005d2b40 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
  puVar8 = local_40;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar1 = *(int *)(DAT_005d2b40 * 0xf0 + 0x24 + DAT_00715e50);
  iVar6 = DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8;
  fVar2 = *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8);
  fVar3 = *(float *)(iVar6 + 4);
  fVar4 = *(float *)(iVar6 + 8);
  pfVar5 = (float *)FUN_004b42a0(&local_64,(float *)&stack0x00000004,(int)local_40);
  local_58 = fVar2 + *pfVar5;
  local_54 = pfVar5[1] + fVar3;
  local_50 = pfVar5[2] + fVar4;
  pfVar5 = (float *)FUN_004b42a0(&local_70,(float *)&stack0x00000010,(int)local_40);
  local_64 = *pfVar5 + fVar2;
  local_60 = pfVar5[1] + fVar3;
  local_5c = pfVar5[2] + fVar4;
  pfVar5 = (float *)FUN_004b42a0(local_4c,(float *)&stack0x0000001c,(int)local_40);
  local_70 = *pfVar5 + fVar2;
  local_6c = pfVar5[1] + fVar3;
  local_68 = pfVar5[2] + fVar4;
  FUN_0040a1c0(local_58,local_54,local_50,local_64,local_60,local_5c,local_70,local_6c,local_68);
  return;
}


