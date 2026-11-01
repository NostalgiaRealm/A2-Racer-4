
/* ==== FUN_004151f0 @ 004151f0 ==== 
 * signature: undefined4 __cdecl FUN_004151f0(int param_1)
 * body: 004151f0-00415352
 */

undefined4 __cdecl FUN_004151f0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_14;
  
  local_14 = 3.4028235e+38;
  iVar4 = FUN_004641a0(param_1);
  iVar6 = 0;
  iVar4 = (&DAT_00709f08)[iVar4 * 0xd0];
  iVar1 = *(int *)(DAT_00715f00 + 0xf4 + iVar4 * 0x994);
  if (0 < iVar1) {
    do {
      iVar5 = FUN_004a6d70(iVar4,iVar6,0);
      fVar2 = *(float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
      fVar3 = *(float *)(iVar5 * 0x50 + DAT_00715eb8 + 0x10);
      iVar5 = FUN_004641a0(param_1);
      fVar2 = fVar2 - *(float *)(&DAT_00709f24 + iVar5 * 0x340);
      iVar5 = FUN_004641a0(param_1);
      fVar3 = fVar3 - *(float *)(&DAT_00709f2c + iVar5 * 0x340);
      fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
      if (fVar2 < local_14) {
        local_14 = fVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  iVar6 = 0;
  iVar1 = *(int *)(DAT_00715f00 + 0xf8 + iVar4 * 0x994);
  if (0 < iVar1) {
    do {
      iVar5 = FUN_004a6d70(iVar4,iVar6,1);
      fVar2 = *(float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
      fVar3 = *(float *)(iVar5 * 0x50 + DAT_00715eb8 + 0x10);
      iVar5 = FUN_004641a0(param_1);
      fVar2 = fVar2 - *(float *)(&DAT_00709f24 + iVar5 * 0x340);
      iVar5 = FUN_004641a0(param_1);
      fVar3 = fVar3 - *(float *)(&DAT_00709f2c + iVar5 * 0x340);
      if (fVar2 * fVar2 + fVar3 * fVar3 < local_14) {
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return 0;
}


