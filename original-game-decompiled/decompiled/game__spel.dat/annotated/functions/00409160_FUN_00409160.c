
/* ==== FUN_00409160 @ 00409160 ==== 
 * signature: undefined __cdecl FUN_00409160(int param_1)
 * body: 00409160-004091ef;004091f3-0040922f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004091f0-004091f2
 */

void __cdecl FUN_00409160(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_006fba58;
  iVar6 = -1;
  iVar2 = 0;
  iVar5 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea50 + iVar5) = 0;
  if (*(int *)(&DAT_005cea34 + iVar5) == iVar1) {
    if (DAT_006fb8a0 == 0) {
      FUN_0044cda0(8);
      FUN_0041be70(&DAT_005d3118,3,DAT_006fba58,-1);
    }
LAB_00409209:
    puVar3 = &DAT_005cf964;
    do {
      if (puVar3[0x12] == *(int *)(&DAT_005cea34 + iVar5)) {
        *puVar3 = 6;
      }
      puVar3 = puVar3 + 0xa5;
    } while ((int)puVar3 < 0x5d15c0);
    return;
  }
  if (0 < DAT_005d2ab0) {
    piVar4 = &DAT_005ce9e8;
    do {
      if (*piVar4 == *(int *)(&DAT_005cea34 + iVar5)) {
        iVar6 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0xa5;
    } while (iVar2 < DAT_005d2ab0);
    if (iVar6 != -1) {
      (&DAT_005ce9ec)[iVar6 * 0xa5] = 7;
      goto LAB_00409209;
    }
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_An_illegal_racer_was_arrested_in_005907e8);
}


