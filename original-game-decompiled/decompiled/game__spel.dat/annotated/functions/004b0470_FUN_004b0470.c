
/* ==== FUN_004b0470 @ 004b0470 ==== 
 * signature: uint __cdecl FUN_004b0470(float * param_1, float * param_2)
 * body: 004b0470-004b05d1
 */

uint __cdecl FUN_004b0470(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined2 uVar5;
  float *pfVar6;
  int iVar7;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
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
  FUN_004afea0(&local_60,param_2);
  fVar1 = param_2[0xc] - param_1[0xc];
  fVar2 = param_2[0xd] - param_1[0xd];
  fVar3 = param_2[0xe] - param_1[0xe];
  local_60 = fVar1 + local_60;
  local_54 = fVar1 + local_54;
  local_48 = fVar1 + local_48;
  local_3c = fVar1 + local_3c;
  local_5c = fVar2 + local_5c;
  local_50 = fVar2 + local_50;
  local_44 = fVar2 + local_44;
  local_38 = fVar2 + local_38;
  local_58 = fVar3 + local_58;
  local_4c = fVar3 + local_4c;
  local_40 = fVar3 + local_40;
  local_34 = fVar3 + local_34;
  uVar4 = FUN_004aff40(&local_60,-(int)param_1[0x11]);
  iVar7 = 0;
  pfVar6 = &local_58;
  do {
    fVar1 = pfVar6[-2];
    uVar5 = (undefined2)(uVar4 >> 0x10);
    uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < local_30) << 8 |
                           (ushort)(NAN(fVar1) || NAN(local_30)) << 10 |
                           (ushort)(fVar1 == local_30) << 0xe);
    if (fVar1 >= local_30) {
      fVar1 = pfVar6[-2];
      uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < local_24) << 8 |
                             (ushort)(NAN(fVar1) || NAN(local_24)) << 10 |
                             (ushort)(fVar1 == local_24) << 0xe);
      if (fVar1 < local_24 || (fVar1 == local_24) != 0) {
        fVar1 = *pfVar6;
        uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < local_28) << 8 |
                               (ushort)(NAN(fVar1) || NAN(local_28)) << 10 |
                               (ushort)(fVar1 == local_28) << 0xe);
        if (fVar1 >= local_28) {
          fVar1 = *pfVar6;
          uVar4 = CONCAT22(uVar5,(ushort)(fVar1 < local_10) << 8 |
                                 (ushort)(NAN(fVar1) || NAN(local_10)) << 10 |
                                 (ushort)(fVar1 == local_10) << 0xe);
          if (fVar1 < local_10 || (fVar1 == local_10) != 0) {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 3;
  } while (iVar7 < 4);
  return uVar4;
}


