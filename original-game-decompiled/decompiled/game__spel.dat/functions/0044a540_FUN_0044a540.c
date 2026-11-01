
/* ==== FUN_0044a540 @ 0044a540 ==== 
 * signature: undefined __stdcall FUN_0044a540(void)
 * body: 0044a540-0044a585
 */

void FUN_0044a540(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_game_background_onoff_005a02f8);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0314);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb8a4 = FUN_004c3cd0(s_OPTIONS_005a0330,s_BACKGROUND_005a0324);
  return;
}


