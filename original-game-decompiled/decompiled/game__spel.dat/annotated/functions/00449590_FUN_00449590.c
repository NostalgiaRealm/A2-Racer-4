
/* ==== FUN_00449590 @ 00449590 ==== 
 * signature: undefined __stdcall FUN_00449590(void)
 * body: 00449590-004495c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449590(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f564);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  _DAT_006fb94c = read_ini_value_setting(s_OPTIONS_0059f57c,&DAT_0059f574);
  return;
}


