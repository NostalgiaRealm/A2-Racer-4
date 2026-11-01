
/* ==== FUN_0044a090 @ 0044a090 ==== 
 * signature: undefined __stdcall FUN_0044a090(void)
 * body: 0044a090-0044a0c8
 */

void FUN_0044a090(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fe78);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb8e0 = read_ini_value_setting(s_OPTIONS_0059fe8c,(LPCSTR)&PTR_FUN_0059fe88);
  return;
}


