
/* ==== FUN_0044a5e0 @ 0044a5e0 ==== 
 * signature: undefined __stdcall FUN_0044a5e0(void)
 * body: 0044a5e0-0044a625
 */

void FUN_0044a5e0(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_starting_chunk_005a037c);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0390);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb8ac = FUN_004c3cd0(s_OPTIONS_005a03ac,s_STARTCHUNK_005a03a0);
  return;
}


