
/* ==== FUN_00452320 @ 00452320 ==== 
 * signature: undefined4 __cdecl FUN_00452320(int param_1, undefined4 param_2, float param_3)
 * body: 00452320-0045255a
 */

undefined4 __cdecl FUN_00452320(int param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  
  uVar7 = 0;
  iVar8 = param_1 * 0xf0;
  *(float *)(iVar8 + 0xbc + DAT_00715e50) = *(float *)(iVar8 + 0xbc + DAT_00715e50) * 0.98;
  *(float *)(iVar8 + 0xc4 + DAT_00715e50) = *(float *)(iVar8 + 0xc4 + DAT_00715e50) * 0.98;
  pfVar1 = (float *)(iVar8 + 0xc0 + DAT_00715e50);
  *pfVar1 = *pfVar1 - *(float *)(iVar8 + 0x58 + DAT_00715e50);
  iVar4 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  iVar6 = iVar8 + DAT_00715e50;
  pfVar1 = (float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  *pfVar1 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) + *(float *)(iVar6 + 0xbc);
  pfVar1[1] = *(float *)(iVar6 + 0xc0) + pfVar1[1];
  pfVar1[2] = *(float *)(iVar6 + 0xc4) + pfVar1[2];
  FUN_004a6c90(param_1);
  iVar6 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  fVar9 = FUN_004ab880(DAT_00715f00 +
                       *(int *)(DAT_00715254 + *(int *)(iVar8 + 0x34 + DAT_00715e50) * 4) * 0x994,
                       *(float *)(DAT_0073b0d0 + iVar6 + iVar6 * 0xa8 + 0x50),
                       *(float *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8));
  fVar2 = (float)fVar9;
  iVar6 = FUN_004a8c50(DAT_00715e50 + iVar8);
  fVar5 = *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) - fVar2;
  fVar3 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac);
  if (fVar5 * fVar5 < fVar3 * fVar3) {
    *(float *)(iVar8 + 0xc0 + DAT_00715e50) = *(float *)(iVar8 + 0xc0 + DAT_00715e50) * -0.6;
    *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) = fVar2 + 1.0;
    if (*(float *)(iVar8 + 0xc0 + DAT_00715e50) < 2.0) {
      *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
           fVar2 + param_3;
      *(undefined4 *)(iVar8 + 0x2c + DAT_00715e50) = 2;
    }
    uVar7 = 1;
    *(float *)(iVar8 + 0x58 + DAT_00715e50) = *(float *)(iVar8 + 0x58 + DAT_00715e50) * 0.5;
  }
  FUN_004b5770(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9);
  return uVar7;
}


