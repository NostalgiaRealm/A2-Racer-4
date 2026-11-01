
/* ==== FUN_0044a1b0 @ 0044a1b0 ==== 
 * signature: undefined __stdcall FUN_0044a1b0(void)
 * body: 0044a1b0-0044a1e8
 */

void FUN_0044a1b0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059ff30);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb8cc = read_ini_value_setting(s_OPTIONS_0059ff50,s_collisionoff_0059ff40);
  return;
}


