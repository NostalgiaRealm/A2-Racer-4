
/* ==== FUN_004ccea0 @ 004ccea0 ==== 
 * signature: undefined __cdecl FUN_004ccea0(undefined4 * param_1, char * param_2, char * param_3)
 * body: 004ccea0-004ccec3;004ccec7-004ccf5d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ccec4-004ccec6
 */

void __cdecl FUN_004ccea0(undefined4 *param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = FUN_004cce80();
  if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Unable_to_allocate_new_D_005b6390);
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(DAT_00740db0 + iVar3 * 0xd8);
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar6;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = (char *)(iVar3 * 0xd8 + 0x10 + DAT_00740db0);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar6;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = (char *)(iVar3 * 0xd8 + 0x74 + DAT_00740db0);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DAT_005b60c0 = iVar3;
  return;
}


