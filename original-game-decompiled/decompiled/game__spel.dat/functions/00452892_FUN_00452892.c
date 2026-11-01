
/* ==== FUN_00452892 @ 00452892 ==== 
 * signature: undefined4 __cdecl FUN_00452892(int param_1, undefined4 param_2, float param_3)
 * body: 00452892-00452ba3
 */

undefined4 __cdecl FUN_00452892(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar7 = 0;
  iVar8 = param_1 * 0xf0;
  pfVar4 = (float *)FUN_004066c0(local_18,-*(float *)(iVar8 + 0xbc + DAT_00715e50),
                                 -*(float *)(iVar8 + 0xc0 + DAT_00715e50),
                                 -*(float *)(iVar8 + 0xc4 + DAT_00715e50));
  pfVar5 = (float *)FUN_004066c0(local_c,*pfVar4 * 0.6,pfVar4[1] * 0.6,pfVar4[2] * 0.6);
  fVar1 = *pfVar5;
  pfVar4 = (float *)(iVar8 + 0xbc + DAT_00715e50);
  fVar2 = pfVar5[2];
  fVar9 = FUN_004a6800(0x7128b0);
  *pfVar4 = (float)(fVar9 * (float10)fVar1 + (float10)*pfVar4);
  pfVar4 = (float *)(iVar8 + 0xc4 + DAT_00715e50);
  fVar9 = FUN_004a6800(0x7128b0);
  *pfVar4 = (float)(fVar9 * (float10)fVar2 + (float10)*pfVar4);
  pfVar4 = (float *)(iVar8 + 0xc0 + DAT_00715e50);
  fVar9 = FUN_004a6800(0x7128b0);
  *pfVar4 = (float)(fVar9 * (float10)*(float *)(iVar8 + 0x58 + DAT_00715e50) + (float10)*pfVar4);
  iVar6 = iVar8 + DAT_00715e50;
  iVar3 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  pfVar4 = (float *)(DAT_0073b0d0 + iVar3 + 0x50 + iVar3 * 0xa8);
  *pfVar4 = *(float *)(iVar6 + 0xbc) + *(float *)(DAT_0073b0d0 + iVar3 + 0x50 + iVar3 * 0xa8);
  pfVar4[1] = *(float *)(iVar6 + 0xc0) + pfVar4[1];
  pfVar4[2] = *(float *)(iVar6 + 0xc4) + pfVar4[2];
  FUN_004a6c90(param_1);
  iVar6 = *(int *)(iVar8 + 0x24 + DAT_00715e50);
  fVar9 = FUN_004ab880(DAT_00715f00 +
                       *(int *)(DAT_00715254 + *(int *)(iVar8 + 0x34 + DAT_00715e50) * 4) * 0x994,
                       *(float *)(DAT_0073b0d0 + iVar6 + iVar6 * 0xa8 + 0x50),
                       *(float *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8));
  iVar6 = FUN_004a8c50(DAT_00715e50 + iVar8);
  fVar2 = *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) -
          (float)fVar9;
  fVar1 = *(float *)(DAT_0073b5c8 + 0x74 + iVar6 * 0xac);
  if (fVar2 * fVar2 < fVar1 * fVar1) {
    *(float *)(iVar8 + 0xc0 + DAT_00715e50) = *(float *)(iVar8 + 0xc0 + DAT_00715e50) * -0.7;
    *(float *)(iVar8 + 200 + DAT_00715e50) = *(float *)(iVar8 + 200 + DAT_00715e50) * -1.0;
    *(float *)(iVar8 + 0xd0 + DAT_00715e50) = *(float *)(iVar8 + 0xd0 + DAT_00715e50) * -1.0;
    fVar1 = (float)fVar9 + param_3;
    *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) = fVar1;
    if (*(float *)(iVar8 + 0xc0 + DAT_00715e50) < param_3) {
      *(float *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) = fVar1;
      *(undefined4 *)(iVar8 + 0x2c + DAT_00715e50) = 3;
    }
    uVar7 = 1;
  }
  FUN_004b5770(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9);
  return uVar7;
}


