
/* ==== FUN_0044a1f0 @ 0044a1f0 ==== 
 * signature: undefined __stdcall FUN_0044a1f0(void)
 * body: 0044a1f0-0044a228
 */

void FUN_0044a1f0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059ff58);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb8c8 = read_ini_value_setting(s_OPTIONS_0059ff74,s_texturecopy_0059ff68);
  return;
}


