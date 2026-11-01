
/* ==== FUN_0051d8e0 @ 0051d8e0 ==== 
 * signature: undefined __cdecl FUN_0051d8e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0051d8e0-0051db5e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0051d8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  FUN_00559348();
  puVar6 = &DAT_0074be00;
  for (iVar2 = 0x254; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_005be288;
  do {
    pcVar8 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar5 = (char *)&DAT_0074c508;
  do {
    pcVar7 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar5 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_005243b0();
  DAT_0074c5ec = param_3;
  DAT_0074be48 = 0xffffffff;
  DAT_0074be04 = 1;
  _DAT_0074c5e4 = param_1;
  DAT_0074c5e8 = param_2;
  DAT_0074c660 = 0xffffffff;
  DAT_0074c668 = 0xffffffff;
  DAT_0074c66c = 0x7fefffff;
  DAT_0074be80 = 0xffffffff;
  DAT_0074be84 = 0x7fefffff;
  DAT_0074c718 = 0xffffffff;
  DAT_0074c71c = 0x7fefffff;
  DAT_0074c720 = 0xffffffff;
  DAT_0074c724 = 0x7fefffff;
  DAT_0074c728 = 0xffffffff;
  DAT_0074c72c = 0x7fefffff;
  DAT_0074c678 = 0;
  DAT_0074c67c = 0;
  DAT_0074c680 = 0;
  DAT_0074c684 = 0;
  DAT_0074c498 = 0;
  DAT_0074c49c = 0;
  DAT_0074c4a8 = 0;
  DAT_0074c4ac = 0;
  DAT_0074c4b0 = 0xffffffff;
  DAT_0074c4b4 = 0xffefffff;
  DAT_0074be94 = 1;
  DAT_0074c4b8 = 0;
  DAT_0074c4bc = 0;
  DAT_0074be10 = 0;
  DAT_0074be14 = 0;
  DAT_0074beb8 = 0xffffffff;
  DAT_0074bebc = 0x7fefffff;
  DAT_0074be88 = 0xffffffff;
  DAT_0074be8c = 0x7fefffff;
  _DAT_0074c4f8 = 0xffffffff;
  _DAT_0074c4fc = 0x7fefffff;
  DAT_0074bea0 = 0;
  DAT_0074bea4 = 0;
  DAT_0074be30 = 0xffffffff;
  DAT_0074be34 = 0x7fefffff;
  DAT_0074bf04 = 1;
  DAT_0074c6a8 = 0;
  DAT_0074c6ac = 0;
  DAT_0074be38 = 0xffffffff;
  DAT_0074be3c = 0x7fefffff;
  DAT_0074bea8 = 0;
  DAT_0074beac = 0;
  DAT_0074bfc8 = 0x80000000;
  DAT_0074beb0 = 1;
  DAT_0074c6c0 = 0;
  DAT_0074c6c4 = 0;
  DAT_0074c6c8 = 0;
  DAT_0074c6cc = 0;
  _DAT_0074c000 = 0xffffffff;
  _DAT_0074c004 = 0x7fefffff;
  DAT_0074bff8 = 0xffffffff;
  DAT_0074c618 = 0xffffffff;
  DAT_0074c620 = 0xffffffff;
  FUN_0052bd70(1);
  return;
}


