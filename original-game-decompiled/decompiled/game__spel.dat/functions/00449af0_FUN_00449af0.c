
/* ==== FUN_00449af0 @ 00449af0 ==== 
 * signature: undefined __stdcall FUN_00449af0(void)
 * body: 00449af0-00449b28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449af0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f960);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  _DAT_006fb938 = FUN_004c3cd0(s_OPTIONS_0059f984,s_traffic_ai_model_0059f970);
  return;
}


