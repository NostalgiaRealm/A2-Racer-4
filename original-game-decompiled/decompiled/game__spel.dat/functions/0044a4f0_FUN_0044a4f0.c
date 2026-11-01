
/* ==== FUN_0044a4f0 @ 0044a4f0 ==== 
 * signature: undefined __stdcall FUN_0044a4f0(void)
 * body: 0044a4f0-0044a535
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a4f0(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_3dsound_onoff_005a02c4);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a02d8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  _DAT_006fb8b8 = FUN_004c3cd0(s_OPTIONS_005a02f0,s_3DSOUND_005a02e8);
  return;
}


