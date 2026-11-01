
/* ==== FUN_004c3b60 @ 004c3b60 ==== 
 * signature: undefined __cdecl FUN_004c3b60(char * param_1)
 * body: 004c3b60-004c3b94;004c3b98-004c3c26
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3b95-004c3b97
 */

void __cdecl FUN_004c3b60(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    uVar3 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x10) {
      FUN_0056914e(&DAT_007406f0,0x118);
      uVar3 = 0xffffffff;
      pcVar5 = (char *)&DAT_007406f0;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if ((&DAT_007406ee)[~uVar3] != '\\') {
        uVar3 = 0xffffffff;
        pcVar5 = &DAT_005b3494;
        do {
          pcVar7 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar2 = -1;
        pcVar5 = (char *)&DAT_007406f0;
        do {
          pcVar6 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar1 != '\0');
        pcVar5 = pcVar7 + -uVar3;
        pcVar7 = pcVar6 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar2 = -1;
      pcVar7 = (char *)&DAT_007406f0;
      do {
        pcVar6 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      DAT_0074081c = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__set_ini_filename___s__d____file_005b3498);
}


