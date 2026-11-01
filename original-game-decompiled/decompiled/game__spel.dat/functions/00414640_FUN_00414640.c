
/* ==== FUN_00414640 @ 00414640 ==== 
 * signature: undefined __cdecl FUN_00414640(int param_1)
 * body: 00414640-00414905
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00414640(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [3];
  
  iVar8 = param_1 * 0x38;
  iVar2 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar9 = iVar2 * 0xf0;
  iVar3 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar1 = *(float *)(DAT_0073b0d0 + 0x50 + iVar3 * 0xa9) -
          *(float *)(&DAT_00709f24 + (*(int *)(&DAT_005d1bbc + iVar8) + iVar6 * 0x34) * 0x10);
  iVar3 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar4 = *(float *)(DAT_0073b0d0 + 0x58 + iVar3 * 0xa9) -
          *(float *)(&DAT_00709f2c + (*(int *)(&DAT_005d1bbc + iVar8) + iVar6 * 0x34) * 0x10);
  fVar5 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  FUN_004066c0(&local_18,fVar1 / fVar5,0.0 / fVar5,fVar4 / fVar5);
  puVar7 = (undefined4 *)
           FUN_004b4070(local_c,DAT_0073b0d0 + *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  local_18 = *puVar7;
  local_14 = puVar7[1];
  local_10 = puVar7[2];
  fVar10 = (float10)FUN_00558550();
  fVar1 = (float)((float10)_DAT_005b23b8 * (float10)0.25 *
                 (fVar10 - (float10)1.5707964) * (float10)0.63661975);
  FUN_00414450(iVar2,(float *)(&DAT_005d1bd0 + iVar8),fVar1);
  fVar1 = ABS(fVar1) * 0.18;
  fVar1 = 10.0 - (fVar1 + fVar1);
  if (fVar1 < 5.0) {
    fVar1 = 5.0;
  }
  if (fVar1 <= *(float *)(iVar9 + 0xc4 + DAT_00715e50)) {
    *(undefined4 *)(&DAT_005d1bd4 + iVar8) = 0;
    *(undefined4 *)(&DAT_005d1bd8 + iVar8) = 0x42c80000;
  }
  else {
    *(undefined4 *)(&DAT_005d1bd4 + iVar8) = 0x42c80000;
    *(undefined4 *)(&DAT_005d1bd8 + iVar8) = 0;
  }
  FUN_00428950(iVar2,(float *)(&DAT_005d1bd0 + iVar8));
  iVar2 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  iVar3 = *(int *)(&DAT_005d1bbc + iVar8);
  fVar1 = *(float *)(iVar2 * 0xa9 + 0x50 + DAT_0073b0d0) -
          *(float *)(&DAT_00709f24 + (iVar3 + iVar6 * 0x34) * 0x10);
  iVar2 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar6 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  fVar4 = *(float *)(iVar2 * 0xa9 + 0x58 + DAT_0073b0d0) -
          *(float *)(&DAT_00709f2c + (iVar3 + iVar6 * 0x34) * 0x10);
  if (ABS(fVar1 * fVar1 + fVar4 * fVar4) < 900.0) {
    *(int *)(&DAT_005d1bbc + iVar8) = iVar3 + 1;
  }
  return;
}


