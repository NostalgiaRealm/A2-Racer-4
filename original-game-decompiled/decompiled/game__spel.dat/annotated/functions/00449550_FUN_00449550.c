
/* ==== FUN_00449550 @ 00449550 ==== 
 * signature: undefined __stdcall FUN_00449550(void)
 * body: 00449550-00449588
 */

void FUN_00449550(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f544);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb954 = read_ini_value_setting(s_ETAPPE_0059f55c,s_british_0059f554);
  return;
}


