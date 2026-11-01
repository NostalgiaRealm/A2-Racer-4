
/* ==== FUN_004138e0 @ 004138e0 ==== 
 * signature: uint __cdecl FUN_004138e0(char * param_1)
 * body: 004138e0-00413a05
 */

uint __cdecl FUN_004138e0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_TOO_SLOW_00592b6c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 4;
  }
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_TOO_FAST_00592b78;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 8;
  }
  iVar1 = 0xc;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_SPEED_FREAK_00592b84;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x10;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_GRANNY_00592b90;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x20;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_SLOPPY_00592b98;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x40;
  }
  iVar1 = 6;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_BLIND_00592ba0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x80;
  }
  iVar1 = 5;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = &DAT_00592ba8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x100;
  }
  iVar1 = 6;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_RIGHT_00592bb0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x200;
  }
  iVar1 = 6;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_DRUNK_00592bb8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x400;
  }
  iVar1 = 10;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_RED_LIGHT_00592bc0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x800;
  }
  iVar1 = 0xd;
  bVar4 = true;
  pcVar2 = s_VLUCHTSTROOK_00592bcc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *param_1 == *pcVar2;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar4);
  return !bVar4 - 1 & 0x1000;
}


