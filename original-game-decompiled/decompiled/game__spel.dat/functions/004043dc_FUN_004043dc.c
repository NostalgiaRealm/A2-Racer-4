
/* ==== FUN_004043dc @ 004043dc ==== 
 * signature: undefined4 __cdecl FUN_004043dc(int param_1)
 * body: 004043dc-0040452e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004043dc(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f0d4);
  }
  iVar1 = *(int *)(&DAT_005cea34 + param_1 * 0x294);
  if (iVar1 == DAT_006fba58) {
    if (DAT_006fb8a0 == 3) {
      return 0;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_005d2ab0) {
      piVar5 = &DAT_005ce9e8;
      do {
        if (*piVar5 == iVar1) break;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0xa5;
      } while (iVar4 < DAT_005d2ab0);
    }
    if (iVar4 == DAT_005d2ab0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s_Racer_not_found__File__s_Line__d_0058f144);
    }
    if ((&DAT_005ce9ec)[iVar4 * 0xa5] == 9) {
      return 0;
    }
  }
  if ((ABS(*(float *)(iVar1 * 0xf0 + DAT_00715e50 + 0xbc)) +
       ABS(*(float *)(iVar1 * 0xf0 + 0xc4 + DAT_00715e50)) < _DAT_005d1b20) &&
     (iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
              DAT_0073b0d0,
     iVar1 = *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x24 + DAT_00715e50),
     fVar2 = *(float *)(iVar4 + 0x50) - *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8),
     fVar3 = *(float *)(iVar4 + 0x58) - *(float *)(DAT_0073b0d0 + iVar1 + 0x58 + iVar1 * 0xa8),
     fVar2 * fVar2 + fVar3 * fVar3 < 5000.0)) {
    return 1;
  }
  return 0;
}


