
/* ==== FUN_00422c00 @ 00422c00 ==== 
 * signature: float10 __cdecl FUN_00422c00(int param_1, int param_2)
 * body: 00422c00-00422d8e
 */

float10 __cdecl FUN_00422c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float local_30;
  int local_28;
  undefined4 local_c [3];
  
  fVar10 = (float10)3.4028235e+38;
  local_30 = (float)fVar10;
  iVar9 = param_2 * 0x50;
  iVar6 = *(int *)(iVar9 + 0x24 + DAT_00715eb8);
  if ((0 < iVar6) && (local_28 = 0, 0 < iVar6)) {
    do {
      iVar6 = FUN_004ab0d0((void *)(iVar9 + DAT_00715eb8),local_28);
      if ((iVar6 != param_1) &&
         ((iVar6 = iVar6 * 0xf0, *(int *)(iVar6 + 0x5c + DAT_00715e50) == 1 &&
          (*(float *)(iVar6 + 0xc4 + DAT_00715e50) < local_30)))) {
        pfVar7 = (float *)FUN_004b4070(local_c,DAT_0073b0d0 +
                                               *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9
                                               + 0x10);
        iVar1 = *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
        iVar2 = *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
        iVar8 = DAT_0073b0d0 + iVar2;
        fVar3 = *(float *)(iVar8 + 0x50 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x50);
        fVar4 = *(float *)(iVar8 + 0x54 + iVar2 * 0xa8) - *(float *)(iVar1 + 0x54);
        fVar5 = *(float *)(iVar8 + iVar2 * 0xa8 + 0x58) - *(float *)(iVar1 + 0x58);
        fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
        if (0.0 < (fVar5 / fVar4) * *pfVar7 - (fVar3 / fVar4) * pfVar7[2]) {
          local_30 = *(float *)(iVar6 + 0xc4 + DAT_00715e50);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(iVar9 + 0x24 + DAT_00715eb8));
    fVar10 = (float10)local_30;
  }
  return fVar10;
}


