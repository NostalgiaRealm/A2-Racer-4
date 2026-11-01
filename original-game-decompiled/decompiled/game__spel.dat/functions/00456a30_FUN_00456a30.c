
/* ==== FUN_00456a30 @ 00456a30 ==== 
 * signature: undefined __stdcall FUN_00456a30(void)
 * body: 00456a30-00456aac;00456ab5-00456af9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00456aad-00456ab4
 */

void FUN_00456a30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00448470(0);
  DAT_006fb8f4 = iVar1;
  if ((-1 < DAT_006fb8f8) && (DAT_006fb8f8 < 999)) {
    (&DAT_006fbe40)[DAT_006fb8f8] = iVar1;
  }
  DAT_006fb8f8 = DAT_006fb8f8 + 1;
  if (DAT_006fb8fc < DAT_006fb8f8) {
    DAT_006fb8f8 = DAT_006fb8fc;
  }
  if (DAT_006fb8f8 < 0) {
    DAT_006fb8f8 = 0;
  }
  if (iVar1 < DAT_006fb8ec) {
    DAT_006fb8ec = iVar1;
    if ((DAT_006fcf84 < 0) || (9 < DAT_006fcf84)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Incorrect_nr_of_time_che_005a3998);
    }
    if (0 < DAT_006fcf84) {
      puVar2 = &DAT_006fce28;
      puVar3 = &DAT_006fce50;
      for (iVar1 = DAT_006fcf84; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  else if (DAT_006fb8f8 == DAT_006fb8fc + -1) {
    DAT_0059becc = 0x2d;
  }
  DAT_005a3ee8 = DAT_006fcf84;
  DAT_006fcf84 = 0;
  FUN_004482c0(0);
  return;
}


