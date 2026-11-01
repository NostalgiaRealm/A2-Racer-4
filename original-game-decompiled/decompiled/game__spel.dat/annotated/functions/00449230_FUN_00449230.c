
/* ==== FUN_00449230 @ 00449230 ==== 
 * signature: undefined __stdcall FUN_00449230(void)
 * body: 00449230-004492bf
 */

void FUN_00449230(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f3c0);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb95c = read_ini_value_setting(s_Options_0059f3d8,s_Police_0059f3d0);
  DAT_006fb960 = read_ini_value_setting(s_Options_0059f3e8,s_traffic_0059f3e0);
  DAT_006fb968 = read_ini_value_setting(s_Options_0059f400,s_BonusCountDown_0059f3f0);
  DAT_006fb96c = read_ini_value_setting(s_Options_0059f418,s_Invulnerable_0059f408);
  DAT_006fb964 = read_ini_value_setting(s_Options_0059f42c,s_opponents_0059f420);
  DAT_006fb97c = 0;
  return;
}


