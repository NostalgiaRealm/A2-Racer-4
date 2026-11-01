
/* ==== FUN_004495d0 @ 004495d0 ==== 
 * signature: undefined __stdcall FUN_004495d0(void)
 * body: 004495d0-00449608
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004495d0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f584);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  _DAT_006fb948 = FUN_004c3cd0(s_OPTIONS_0059f59c,s_dif_mod_0059f594);
  return;
}


