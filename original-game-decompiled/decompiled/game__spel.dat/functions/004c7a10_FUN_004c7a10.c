
/* ==== FUN_004c7a10 @ 004c7a10 ==== 
 * signature: uint __cdecl FUN_004c7a10(char * param_1, int param_2, uint param_3)
 * body: 004c7a10-004c7b29;004c7b2d-004c7c30;004c7c34-004c7c4a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7b2a-004c7b2c 004c7c31-004c7c33
 */

uint __cdecl FUN_004c7a10(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined3 extraout_var_00;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (DAT_00740950 == 0) {
    return 0xffffffff;
  }
  uVar4 = FUN_004c6ee0(param_1,0,0,0);
  if (uVar4 == 0xffffffff) {
    uVar5 = FUN_004c6f50(0);
    if (uVar5 == 0xffffffff) {
      uVar5 = FUN_004c6fb0(0xffffffff);
    }
    FUN_004c3fa0((byte *)s_new_buffer_used__d_005b55bc);
    iVar6 = FUN_004c7880(param_1,uVar5);
    if (iVar6 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(uVar5 * 0x44 + 0x30 + DAT_00740934) = 1;
    uVar4 = 0xffffffff;
    do {
      pcVar10 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar10 + -uVar4;
    pcVar11 = (char *)(DAT_00740934 + uVar5 * 0x44);
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    bVar3 = FUN_004c6bd0(uVar4);
    uVar5 = uVar4;
    if ((CONCAT31(extraout_var,bVar3) != 0) &&
       (uVar5 = FUN_004c6ee0(param_1,0,uVar4 + 1,1), uVar5 == 0xffffffff)) {
      uVar5 = FUN_004c6f50(0);
      if (uVar5 == 0xffffffff) {
        uVar5 = FUN_004c6fb0(uVar4);
      }
      if (uVar5 == uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____duplicate_buffers_005b559c);
      }
      FUN_004c3fa0((byte *)s_duplicate_used__d_005b5588);
      iVar6 = uVar5 * 0x44;
      *(undefined4 *)(iVar6 + 0x30 + DAT_00740934) = 1;
      uVar8 = 0xffffffff;
      do {
        pcVar10 = param_1;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar10 + -uVar8;
      pcVar11 = (char *)(DAT_00740934 + iVar6);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar7 = FUN_004c6b90(*(undefined4 *)(DAT_00740934 + 0x28 + uVar4 * 0x44));
      *(undefined4 *)(iVar6 + 0x28 + DAT_00740934) = uVar7;
    }
  }
  if ((param_3 & 4) == 0) {
    *(undefined4 *)(uVar5 * 0x44 + 0x38 + DAT_00740934) = DAT_00740928;
  }
  else {
    param_3 = param_3 - 4;
    *(undefined4 *)(uVar5 * 0x44 + 0x38 + DAT_00740934) = 1000000;
  }
  bVar3 = FUN_004c6bd0(uVar5);
  if (CONCAT31(extraout_var_00,bVar3) == 0) {
    FUN_004c75b0(uVar5,param_2);
    piVar2 = *(int **)(uVar5 * 0x44 + 0x28 + DAT_00740934);
    iVar6 = (**(code **)(*piVar2 + 0x30))(piVar2,0,0,param_3);
    if (iVar6 != 0) {
      FUN_004c65b0(iVar6);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____error_playing_sound__d___005b5548);
    }
  }
  FUN_004c3fa0((byte *)s_playing__s_buffer__d_005b5570);
  return uVar5;
}


