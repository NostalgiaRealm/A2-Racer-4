
/* ==== FUN_0044a4a0 @ 0044a4a0 ==== 
 * signature: undefined __stdcall FUN_0044a4a0(void)
 * body: 0044a4a0-0044a4e5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a4a0(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_benzine_prijs_005a0288);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a029c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  _DAT_006fb8bc = read_ini_value_setting(s_OPTIONS_005a02bc,s_BENZINEPRIJS_005a02ac);
  return;
}


