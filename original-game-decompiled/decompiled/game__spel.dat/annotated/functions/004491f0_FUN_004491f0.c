
/* ==== FUN_004491f0 @ 004491f0 ==== 
 * signature: undefined __stdcall FUN_004491f0(void)
 * body: 004491f0-00449225
 */

void FUN_004491f0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f39c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  write_ini_value_setting(s_PLAYER_0059f3b8,s_finished_0059f3ac,0);
  return;
}


