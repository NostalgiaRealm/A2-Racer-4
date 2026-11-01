
/* ==== FUN_00412cb0 @ 00412cb0 ==== 
 * signature: undefined __stdcall FUN_00412cb0(void)
 * body: 00412cb0-00412e1d
 */

void FUN_00412cb0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_18;
  int local_14;
  int *local_10;
  undefined4 local_8;
  
  local_14 = 0;
  if (0 < DAT_005d2ab0) {
    local_10 = &DAT_005973c8;
    piVar4 = &DAT_005cea38;
    iVar1 = DAT_005d2ab0;
    do {
      iVar2 = 0;
      if (local_10[2] == 0) {
        local_18 = 0;
        if (*piVar4 < DAT_006fbab4) {
LAB_00412d57:
          local_18 = 1;
        }
        else if (DAT_006fbab4 == *piVar4) {
          iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
          uVar5 = FUN_00412130(piVar4[-0x14],*(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8),
                               local_8,*(float *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 0x58));
          if ((int)uVar5 == 0) goto LAB_00412d57;
        }
        if (0 < DAT_005d2ab0) {
          piVar3 = &DAT_005ce9e8;
          do {
            if (iVar2 != local_14) {
              if (*piVar4 < piVar3[0x14]) {
LAB_00412dda:
                local_18 = local_18 + 1;
              }
              else if (piVar3[0x14] == *piVar4) {
                iVar1 = *(int *)(*piVar3 * 0xf0 + 0x24 + DAT_00715e50);
                uVar5 = FUN_00412130(piVar4[-0x14],
                                     *(float *)(DAT_0073b0d0 + iVar1 + 0x50 + iVar1 * 0xa8),local_8,
                                     *(float *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 0x58));
                if ((int)uVar5 == 0) goto LAB_00412dda;
              }
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0xa5;
          } while (iVar2 < DAT_005d2ab0);
        }
        iVar1 = DAT_005d2ab0;
        *local_10 = local_18;
      }
      piVar4 = piVar4 + 0xa5;
      local_14 = local_14 + 1;
      local_10 = local_10 + 0x16;
    } while (local_14 < iVar1);
  }
  return;
}


