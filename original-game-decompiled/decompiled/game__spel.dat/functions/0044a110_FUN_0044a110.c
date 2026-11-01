
/* ==== FUN_0044a110 @ 0044a110 ==== 
 * signature: undefined __stdcall FUN_0044a110(void)
 * body: 0044a110-0044a1ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a110(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059feb8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fbb40 = FUN_004c3cd0(s_PLAYER_0059fed0,s_motor_0059fec8);
  DAT_006fbb44 = FUN_004c3cd0(s_PLAYER_0059fee0,s_banden_0059fed8);
  DAT_006fbb48 = FUN_004c3cd0(s_PLAYER_0059fef0,s_turbo_0059fee8);
  DAT_006fbb4c = FUN_004c3cd0(s_PLAYER_0059fefc,(LPCSTR)&PTR_DAT_0059fef8);
  DAT_006fbb50 = FUN_004c3cd0(s_PLAYER_0059ff14,s_versnellingsbak_0059ff04);
  _DAT_006fbb54 = FUN_004c3cd0(s_PLAYER_0059ff28,s_injectie_0059ff1c);
  return;
}


