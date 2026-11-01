
/* ==== FUN_0044b180 @ 0044b180 ==== 
 * signature: undefined __stdcall FUN_0044b180(void)
 * body: 0044b180-0044b1bb
 */

void FUN_0044b180(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0b6c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  FUN_004c3c70(s_GFX_OPTIONS_005a0b7c,PTR_s_available_texture_memory_0059f164,DAT_0073b4f9);
  return;
}


