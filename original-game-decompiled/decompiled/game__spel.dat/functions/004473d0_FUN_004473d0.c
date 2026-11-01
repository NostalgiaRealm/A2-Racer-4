
/* ==== FUN_004473d0 @ 004473d0 ==== 
 * signature: undefined __cdecl FUN_004473d0(char * param_1)
 * body: 004473d0-004473ee;004473f2-00447475
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004473ef-004473f1
 */

void __cdecl FUN_004473d0(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s___Unable_t_0059de4c);
  }
  _strncpy((char *)&DAT_0059db6d,param_1,8);
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_0059db6d;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = (char *)&DAT_0059db5d;
  for (uVar5 = uVar4 >> 2; uVar3 = DAT_0059dea8, uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; cVar1 = DAT_0059dea4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  PTR_DAT_0059db76._0_1_ = 0;
  PTR_DAT_0059db66._0_1_ = 0;
  iVar6 = -1;
  pcVar7 = (char *)&DAT_0059db6d;
  do {
    pcVar8 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar8 + -1) = DAT_0059dea0;
  pcVar8[3] = cVar1;
  cVar1 = DAT_0059deac;
  iVar6 = -1;
  pcVar7 = (char *)&DAT_0059db5d;
  do {
    pcVar8 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar2 != '\0');
  *(undefined4 *)(pcVar8 + -1) = uVar3;
  pcVar8[3] = cVar1;
  return;
}


