
/* ==== FUN_004633f0 @ 004633f0 ==== 
 * signature: uint __cdecl FUN_004633f0(float param_1)
 * body: 004633f0-0046359e
 */

uint __cdecl FUN_004633f0(float param_1)

{
  void *this;
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [16];
  
  iVar4 = DAT_006c3530;
  iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  pfVar5 = (float *)FUN_004b11c0((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),&local_4c);
  local_70 = *pfVar5;
  local_6c = pfVar5[1];
  local_68 = pfVar5[2];
  iVar1 = iVar1 * 0xa9;
  puVar8 = (undefined4 *)(iVar1 + 0x10 + DAT_0073b0d0);
  puVar9 = local_40;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  pfVar5 = (float *)FUN_004b42a0(&local_4c,&local_70,(int)local_40);
  local_70 = *pfVar5;
  local_6c = pfVar5[1];
  local_68 = pfVar5[2];
  this = (void *)(DAT_00719b50 + iVar4 * 0x178);
  local_64 = *(float *)((int)this + 8);
  local_60 = *(float *)((int)this + 0xc);
  local_5c = *(float *)((int)this + 0x10);
  fVar2 = (local_70 + *(float *)(iVar1 + 0x50 + DAT_0073b0d0)) - local_64;
  local_48 = (local_6c + *(float *)(iVar1 + 0x54 + DAT_0073b0d0)) - local_60;
  local_44 = (local_68 + *(float *)(iVar1 + 0x58 + DAT_0073b0d0)) - local_5c;
  fVar3 = SQRT(fVar2 * fVar2 + local_48 * local_48 + local_44 * local_44);
  if (fVar3 < 1.0 != 0 || (fVar3 == 1.0) != 0) {
    return CONCAT31((int3)(CONCAT22((short)((uint)DAT_0073b0d0 >> 0x10),
                                    (ushort)(fVar3 < 1.0) << 8 | (ushort)NAN(fVar3) << 10 |
                                    (ushort)(fVar3 == 1.0) << 0xe) >> 8),1);
  }
  local_48 = local_48 * param_1;
  local_44 = local_44 * param_1;
  local_58 = fVar2 * param_1 + local_64;
  local_54 = local_48 + local_60;
  local_50 = local_44 + local_5c;
  uVar6 = FUN_004b1060(this,local_58,local_54,local_50);
  return uVar6 & 0xffffff00;
}


