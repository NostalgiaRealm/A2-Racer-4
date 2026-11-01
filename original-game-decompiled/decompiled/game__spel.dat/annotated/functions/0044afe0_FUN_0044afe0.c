
/* ==== FUN_0044afe0 @ 0044afe0 ==== 
 * signature: undefined __stdcall FUN_0044afe0(void)
 * body: 0044afe0-0044b170
 */

void FUN_0044afe0(void)

{
  int iVar1;
  char *pcVar2;
  CHAR local_8c [32];
  CHAR local_6c [104];
  
  if (DAT_006fb964 != 0) {
    iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0af4);
    pcVar2 = *(char **)(iVar1 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    set_ini_filename(pcVar2);
    if (DAT_006fba98 != 0) {
      FUN_0042e150();
      iVar1 = 0;
      if (0 < DAT_005d2ab0) {
        do {
          FUN_005587a3(local_8c,&DAT_005a0b04);
          FUN_005587a3(local_6c,(byte *)s__d__d__d_005a0b08);
          write_ini_string_setting(s_RACERS_005a0b14,local_8c,local_6c);
          FUN_005587a3(local_8c,(byte *)s_DAM_d_005a0b1c);
          FUN_005587a3(local_6c,(byte *)s__d__d__d__d__d__d__d__d_005a0b24);
          write_ini_string_setting(s_RACERS_005a0b3c,local_8c,local_6c);
          FUN_005587a3(local_8c,(byte *)s_VAL_d_005a0b44);
          FUN_005587a3(local_6c,(byte *)s__f__f__f__f__f__f__f__f_005a0b4c);
          write_ini_string_setting(s_RACERS_005a0b64,local_8c,local_6c);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_005d2ab0);
      }
    }
  }
  return;
}


