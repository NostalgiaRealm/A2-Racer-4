
/* ==== FUN_0044a630 @ 0044a630 ==== 
 * signature: undefined __stdcall FUN_0044a630(void)
 * body: 0044a630-0044a684
 */

void FUN_0044a630(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_visible_chunks_005a03b4);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a03c8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb8b0 = read_ini_value_setting(s_OPTIONS_005a03e8,s_VISIBLECHUNKS_005a03d8);
  if (DAT_006fb8b0 < 10) {
    DAT_006fb8b0 = 10;
  }
  return;
}


