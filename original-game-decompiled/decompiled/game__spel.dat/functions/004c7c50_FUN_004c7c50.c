
/* ==== FUN_004c7c50 @ 004c7c50 ==== 
 * signature: uint __cdecl FUN_004c7c50(char * param_1, byte param_2)
 * body: 004c7c50-004c7d5f;004c7d63-004c7e11
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7d60-004c7d62
 */

uint __cdecl FUN_004c7c50(char *param_1,byte param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (DAT_00740950 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_004c6ee0(param_1,0,0,0);
  if (uVar3 == 0xffffffff) {
    uVar4 = FUN_004c6f50(0);
    if (uVar4 == 0xffffffff) {
      uVar4 = FUN_004c6fb0(0xffffffff);
    }
    FUN_004c3fa0((byte *)s_new_buffer_used__d_005b55bc);
    iVar5 = FUN_004c7880(param_1,uVar4);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(uVar4 * 0x44 + 0x30 + DAT_00740934) = 1;
    uVar3 = 0xffffffff;
    do {
      pcVar9 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar9 + -uVar3;
    pcVar10 = (char *)(DAT_00740934 + uVar4 * 0x44);
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  else {
    bVar2 = FUN_004c6bd0(uVar3);
    uVar4 = uVar3;
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (uVar4 = FUN_004c6ee0(param_1,0,uVar3 + 1,1), uVar4 == 0xffffffff)) {
      uVar4 = FUN_004c6f50(0);
      if (uVar4 == 0xffffffff) {
        uVar4 = FUN_004c6fb0(uVar3);
      }
      if (uVar4 == uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____duplicate_buffers_005b559c);
      }
      FUN_004c3fa0((byte *)s_duplicate_used__d_005b5588);
      iVar5 = uVar4 * 0x44;
      *(undefined4 *)(DAT_00740934 + 0x30 + iVar5) = 1;
      uVar7 = 0xffffffff;
      do {
        pcVar9 = param_1;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar9 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar9;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar9 + -uVar7;
      pcVar10 = (char *)(DAT_00740934 + iVar5);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar6 = FUN_004c6b90(*(undefined4 *)(DAT_00740934 + 0x28 + uVar3 * 0x44));
      *(undefined4 *)(DAT_00740934 + 0x28 + iVar5) = uVar6;
    }
  }
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(DAT_00740934 + 0x38 + uVar4 * 0x44) = DAT_00740928;
    return uVar4;
  }
  *(undefined4 *)(DAT_00740934 + 0x38 + uVar4 * 0x44) = 1000000;
  return uVar4;
}


