
/* ==== FUN_004074c0 @ 004074c0 ==== 
 * signature: undefined4 __cdecl FUN_004074c0(byte * param_1)
 * body: 004074c0-0040771f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00407720-00407729
 */

undefined4 __cdecl FUN_004074c0(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar2 = s_BESIDE_005904f0;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004074f6:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004074fb;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004074f6;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004074fb:
  if (iVar3 == 0) {
    return 0;
  }
  pbVar4 = &DAT_005904f8;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00407532:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407537;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00407532;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407537:
  if (iVar3 == 0) {
    return 1;
  }
  pbVar4 = &DAT_00590500;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00407573:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00407578;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00407573;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00407578:
  if (iVar3 == 0) {
    return 2;
  }
  pcVar2 = s_ROAD_BLOCK_00590508;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004075b4:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004075b9;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004075b4;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004075b9:
  if (iVar3 == 0) {
    return 6;
  }
  pcVar2 = s_FRONT_00590514;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004075f5:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004075fa;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004075f5;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004075fa:
  if (iVar3 == 0) {
    return 5;
  }
  pcVar2 = s_MEGAPHONE_0059051c;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00407636:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0040763b;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00407636;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0040763b:
  if (iVar3 == 0) {
    return 3;
  }
  pcVar2 = s_HANDBRAKE_00590528;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00407677:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0040767c;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00407677;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0040767c:
  if (iVar3 == 0) {
    return 4;
  }
  pcVar2 = s_PUSHING_00590534;
  pbVar5 = param_1;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_004076b8:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004076bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_004076b8;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004076bd:
  if (iVar3 == 0) {
    return 7;
  }
  pcVar2 = s_STATUS_0059053c;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *param_1;
    if (bVar1 != *param_1) {
LAB_004076f9:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004076fe;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) goto LAB_004076f9;
    pcVar2 = pcVar2 + 2;
    param_1 = param_1 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004076fe:
  if (iVar3 == 0) {
    return 8;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_Unrecognized_state__s_00590568);
}


