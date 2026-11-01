
/* ==== FUN_0044acb0 @ 0044acb0 ==== 
 * signature: undefined __stdcall FUN_0044acb0(void)
 * body: 0044acb0-0044ad15;0044ad19-0044ad30
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044ad16-0044ad18
 */

void FUN_0044acb0(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_game_etappe_005a08a0);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a08b4);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb898 = FUN_004c3cd0(s_ETAPPE_005a08cc,s_ETAPPE_005a08c4);
  if ((-1 < DAT_006fb898) && (DAT_006fb898 <= DAT_006fa588)) {
    DAT_006fb8e8 = FUN_004c3cd0(s_ETAPPE_005a0934,s_DIRECTION_005a0928);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__load_etappe_info___s__d____Inva_005a08f8);
}


