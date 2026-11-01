
/* ==== FUN_0041cae0 @ 0041cae0 ==== 
 * signature: uint __cdecl FUN_0041cae0(int param_1, uint param_2)
 * body: 0041cae0-0041ce13
 */

uint __cdecl FUN_0041cae0(int param_1,uint param_2)

{
  uint uVar1;
  undefined2 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int iVar6;
  undefined4 unaff_EBP;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [3];
  float afStack_48 [17];
  int iStack_4;
  
  iVar7 = 0;
  local_58 = 0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_64 = 0;
  local_60 = 0.0;
  local_5c = 0;
  uVar1 = FUN_00558625();
  if ((int)uVar1 % 10 < 8) {
    return (int)uVar1 / 10;
  }
  fVar9 = FUN_004a6800(0x7128b0);
  fVar9 = (float10)1.0 / fVar9;
  fVar10 = (float10)15.0;
  if (fVar9 < fVar10) {
    return CONCAT22(extraout_var,
                    (ushort)(fVar9 < fVar10) << 8 | (ushort)(NAN(fVar9) || NAN(fVar10)) << 10 |
                    (ushort)(fVar9 == fVar10) << 0xe);
  }
  iVar2 = FUN_00414070(param_1);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_004a71e0(param_2);
  iVar6 = param_1 * 0xf0;
  iVar2 = *(int *)(iVar6 + 0x50 + DAT_00715e50);
  if (iVar2 == 0) {
    if (DAT_006fb8e8 == 0) {
      param_2 = (uint)(DAT_006fb954 == 1);
    }
    else {
      param_2 = (uint)(DAT_006fb954 != 1);
    }
LAB_0041cbf1:
    iVar7 = *(int *)(DAT_00715f00 + 0xf4 + uVar1 * 0x994);
  }
  else {
    if (iVar2 == 1) {
      if (DAT_006fb8e8 == 0) {
        param_2 = (uint)(DAT_006fb954 != 1);
      }
      else {
        param_2 = (uint)(DAT_006fb954 == 1);
      }
    }
    else {
      if (iVar2 == 0) goto LAB_0041cbf1;
      if (iVar2 != 1) goto LAB_0041cc4a;
    }
    iVar7 = *(int *)(DAT_00715f00 + 0xf8 + uVar1 * 0x994);
  }
  if (iVar7 < 2) {
    return uVar1 * 0x265;
  }
  uVar3 = FUN_00558625();
  iVar7 = (int)uVar3 % iVar7;
LAB_0041cc4a:
  iVar4 = FUN_004a6d70(uVar1,iVar7,iVar2);
  uVar3 = DAT_00715eb8;
  if ((*(byte *)(iVar4 * 0x50 + DAT_00715eb8) & 4) != 0) {
    *(undefined4 *)(iVar6 + 0x5c + DAT_00715e50) = 0;
    return uVar3;
  }
  iVar4 = FUN_0041cfb0(param_1,uVar1);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x5c + DAT_00715e50) = 0;
    return 0;
  }
  FUN_004a7020(param_1);
  puVar5 = (undefined4 *)FUN_004a6d00(local_54 + 2,uVar1,iVar7,iVar2);
  local_64 = *puVar5;
  local_60 = (float)puVar5[1] + 2.0;
  local_5c = puVar5[2];
  fVar10 = FUN_004a6e80(uVar1,param_2);
  local_54[0] = (float)fVar10;
  (**(code **)(**(int **)(iVar6 + 0x10 + DAT_00715e50) + 0x10))(&local_64,&local_58);
  iVar7 = DAT_0073b0d0 + *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
  puVar5 = (undefined4 *)FUN_004a1dd0(*(void **)(iVar6 + 0x10 + DAT_00715e50),local_54);
  *(undefined4 *)(iVar7 + 0x50) = *puVar5;
  *(undefined4 *)(iVar7 + 0x54) = puVar5[1];
  *(undefined4 *)(iVar7 + 0x58) = puVar5[2];
  iVar2 = DAT_0073b0d0 + *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
  puVar5 = (undefined4 *)FUN_004a1e20(*(void **)(iVar6 + 0x10 + DAT_00715e50),afStack_48);
  puVar8 = (undefined4 *)(iVar2 + 0x10);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  *(uint *)(iVar6 + 0x38 + DAT_00715e50) = uVar1;
  *(uint *)(iVar6 + 0x34 + DAT_00715e50) = uVar1;
  *(undefined4 *)(iVar6 + 0x3c + DAT_00715e50) = unaff_EBP;
  FUN_004a6fa0(iStack_4);
  *(undefined4 *)(iVar6 + 0x5c + DAT_00715e50) = 1;
  FUN_004f21f0(*(void **)(*(int *)(iVar6 + 0x10 + DAT_00715e50) + 8),1);
  (&DAT_005d1bac)[unaff_EBX * 0xe] = 0;
  *(undefined4 *)(&DAT_005d1bc8 + unaff_EBX * 0x38) = 0;
  return unaff_EBX * 0x38;
}


