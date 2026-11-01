
/* ==== FUN_0044a0d0 @ 0044a0d0 ==== 
 * signature: undefined __stdcall FUN_0044a0d0(void)
 * body: 0044a0d0-0044a108
 */

void FUN_0044a0d0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fe94);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb8d4 = FUN_004c3cd0(s_OPTIONS_0059feb0,s_difficulty_0059fea4);
  return;
}


