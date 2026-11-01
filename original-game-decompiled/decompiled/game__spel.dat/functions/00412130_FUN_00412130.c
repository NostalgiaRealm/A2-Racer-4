
/* ==== FUN_00412130 @ 00412130 ==== 
 * signature: undefined8 __cdecl FUN_00412130(int param_1, float param_2, undefined4 param_3, float param_4)
 * body: 00412130-00412269
 */

undefined8 __cdecl FUN_00412130(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = DAT_00715e50 + param_1 * 0xf0;
  iVar6 = *(int *)(iVar7 + 0x3c) * 0x50 + DAT_00715eb8;
  if ((((*(int *)(iVar6 + 0x14) < 0) && (*(int *)(iVar6 + 0x1c) < 0)) &&
      (*(int *)(iVar6 + 0x18) < 0)) && (*(int *)(iVar6 + 0x20) < 0)) {
    uVar8 = FUN_00403ea0(param_1,param_2,param_3,param_4);
    if ((0x3ff < (int)uVar8) && ((int)uVar8 < 0xc00)) {
      return CONCAT44((int)(uVar8 >> 0x20),1);
    }
  }
  else {
    pfVar1 = (float *)(DAT_00715f00 + 0x58 + *(int *)(iVar7 + 0x34) * 0x994);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[2];
    iVar6 = *(int *)(iVar7 + 0x24);
    fVar4 = param_2 - *(float *)(DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8);
    fVar5 = param_4 - *(float *)(DAT_0073b0d0 + iVar6 + 0x58 + iVar6 * 0xa8);
    uVar8 = (ulonglong)(uint)(iVar6 * 0x15) << 0x20;
    if ((fVar2 * fVar4 + fVar3 * fVar5) /
        (SQRT(fVar2 * fVar2 + fVar3 * fVar3) + SQRT(fVar4 * fVar4 + fVar5 * fVar5)) < 0.0) {
      return CONCAT44(iVar6 * 0x15,1);
    }
  }
  return uVar8 & 0xffffffff00000000;
}


