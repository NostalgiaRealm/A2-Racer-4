
/* ==== FUN_0044a050 @ 0044a050 ==== 
 * signature: undefined __stdcall FUN_0044a050(void)
 * body: 0044a050-0044a088
 */

void FUN_0044a050(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fe58);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb900 = FUN_004c3cd0(s_OPTIONS_0059fe70,s_filter_0059fe68);
  return;
}


