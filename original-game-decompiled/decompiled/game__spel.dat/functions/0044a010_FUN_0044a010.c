
/* ==== FUN_0044a010 @ 0044a010 ==== 
 * signature: undefined __stdcall FUN_0044a010(void)
 * body: 0044a010-0044a048
 */

void FUN_0044a010(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fe38);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb8e4 = FUN_004c3cd0(s_OPTIONS_0059fe50,s_WAITVBL_0059fe48);
  return;
}


