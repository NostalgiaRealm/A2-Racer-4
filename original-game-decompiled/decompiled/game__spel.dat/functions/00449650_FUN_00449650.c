
/* ==== FUN_00449650 @ 00449650 ==== 
 * signature: undefined __stdcall FUN_00449650(void)
 * body: 00449650-00449688
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449650(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f5c8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  _DAT_006fb934 = FUN_004c3cd0(s_OPTIONS_0059f5e4,s_ai_model_0059f5d8);
  return;
}


