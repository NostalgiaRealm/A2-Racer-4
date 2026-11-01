
/* ==== FUN_00441370 @ 00441370 ==== 
 * signature: undefined __stdcall FUN_00441370(void)
 * body: 00441370-004413db;004413df-00441422
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004413dc-004413de
 */

void FUN_00441370(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  CHAR local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_0059ccdc);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006cdfec = FUN_004c3cd0(s_PROGRESS_0059ccf8,s_CALCULATE_0059ccec);
  iVar1 = FUN_004c3cd0(s_PROGRESS_0059cd0c,s_COUNT_0059cd04);
  if ((-1 < iVar1) && (iVar1 < 0x3e9)) {
    iVar4 = 0;
    if (0 < iVar1) {
      puVar5 = &DAT_006cd048;
      do {
        wsprintfA(local_40,s_percent_d_0059cd64,iVar4);
        uVar3 = FUN_004c3cd0(s_PROGRESS_0059cd70,local_40);
        *puVar5 = uVar3;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__nr_percents_read_incorre_0059cd3c);
}


