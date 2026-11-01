
/* ==== FUN_00462730 @ 00462730 ==== 
 * signature: undefined4 __cdecl FUN_00462730(char * param_1)
 * body: 00462730-00462856
 */

undefined4 __cdecl FUN_00462730(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  uVar2 = 0xffffffff;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  pcVar7 = s_Emitter_005a5fec;
  do {
    pcVar5 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar5 + -uVar2;
  pcVar7 = param_1;
  for (uVar3 = uVar2 >> 2; pcVar7 = pcVar7 + 4, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  puVar6 = &DAT_0073b538;
  pcVar7 = param_1 + 0xd4;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pcVar7 = pcVar7 + 4;
  }
  param_1[0x84] = '\x0f';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x90] = '\x0f';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = -0x80;
  param_1[0x97] = '?';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = -0x80;
  param_1[0x9b] = '?';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = -0x80;
  param_1[0x9f] = '?';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = -0x80;
  param_1[0xaf] = '?';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = -0x80;
  param_1[0xb3] = '?';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = -0x80;
  param_1[0xb7] = '?';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[100] = -0x25;
  param_1[0x65] = '\x0f';
  param_1[0x66] = -0x37;
  param_1[0x67] = '@';
  param_1[0x68] = -0x25;
  param_1[0x69] = '\x0f';
  param_1[0x6a] = -0x37;
  param_1[0x6b] = '?';
  param_1[0x6c] = -0x3e;
  param_1[0x6d] = -0x48;
  param_1[0x6e] = '2';
  param_1[0x6f] = '?';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '?';
  param_1[0x74] = -0x33;
  param_1[0x75] = -0x34;
  param_1[0x76] = 'L';
  param_1[0x77] = '=';
  param_1[0x7c] = -0xc;
  param_1[0x7d] = '\x01';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x88] = '\x05';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = 'P';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[200] = 'B';
  param_1[0xc9] = '`';
  param_1[0xca] = -0x1b;
  param_1[0xcb] = -0x45;
  *(code **)(param_1 + 0x114) = FUN_00462cf0;
  return 1;
}


