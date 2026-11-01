
/* ==== FUN_004b05e0 @ 004b05e0 ==== 
 * signature: int __cdecl FUN_004b05e0(float * param_1, float * param_2)
 * body: 004b05e0-004b07d4
 */

int __cdecl FUN_004b05e0(float *param_1,float *param_2)

{
  bool bVar1;
  float10 fVar2;
  float fVar3;
  int iVar4;
  undefined2 extraout_var;
  uint3 uVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_30 = *param_1;
  local_2c = param_1[1];
  local_24 = param_1[3];
  local_28 = param_1[2];
  local_20 = param_1[4];
  local_1c = param_1[5];
  local_18 = param_1[6];
  local_14 = param_1[7];
  local_10 = param_1[8];
  FUN_004afea0(local_60,param_2);
  fVar3 = param_2[0xc] - param_1[0xc];
  local_74 = param_2[0xd] - param_1[0xd];
  local_70 = param_2[0xe] - param_1[0xe];
  local_60[0] = fVar3 + local_60[0];
  local_60[3] = fVar3 + local_60[3];
  local_48 = fVar3 + local_48;
  local_3c = fVar3 + local_3c;
  local_60[1] = local_74 + local_60[1];
  local_50 = local_74 + local_50;
  local_44 = local_74 + local_44;
  local_38 = local_74 + local_38;
  local_60[2] = local_70 + local_60[2];
  local_4c = local_70 + local_4c;
  local_40 = local_70 + local_40;
  local_34 = local_70 + local_34;
  FUN_004aff40(local_60,-(int)param_1[0x11]);
  fVar3 = local_28;
  local_6c = local_30;
  local_64 = local_28;
  local_78 = local_24;
  local_70 = local_10;
  pfVar6 = local_60;
  iVar7 = 1;
  while( true ) {
    iVar4 = iVar7;
    if (3 < iVar7) {
      iVar4 = 0;
    }
    fVar8 = FUN_004b00c0(*pfVar6,pfVar6[1],pfVar6[2],local_60[iVar4 * 3],local_60[iVar4 * 3 + 1],
                         local_60[iVar4 * 3 + 2],local_6c,local_68,fVar3,local_78,local_74,local_70,
                         &local_7c);
    fVar2 = (float10)1.0;
    uVar5 = (uint3)(CONCAT22(extraout_var,
                             (ushort)(fVar8 < fVar2) << 8 | (ushort)(NAN(fVar8) || NAN(fVar2)) << 10
                             | (ushort)(fVar8 == fVar2) << 0xe) >> 8);
    if (fVar8 < fVar2) break;
    pfVar6 = pfVar6 + 3;
    bVar1 = 3 < iVar7;
    iVar7 = iVar7 + 1;
    if (bVar1) {
      return (uint)uVar5 << 8;
    }
  }
  return CONCAT31(uVar5,1);
}


