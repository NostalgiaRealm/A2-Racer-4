
/* ==== FUN_004494d0 @ 004494d0 ==== 
 * signature: undefined __stdcall FUN_004494d0(void)
 * body: 004494d0-00449508
 */

void FUN_004494d0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f4fc);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb958 = read_ini_value_setting(s_league_0059f514,s_league_0059f50c);
  return;
}


