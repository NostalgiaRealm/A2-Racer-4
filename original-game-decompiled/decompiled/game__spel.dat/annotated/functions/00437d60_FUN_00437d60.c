
/* ==== FUN_00437d60 @ 00437d60 ==== 
 * signature: undefined __stdcall FUN_00437d60(void)
 * body: 00437d60-00437efc
 */

void FUN_00437d60(void)

{
  int iVar1;
  char *pcVar2;
  CHAR local_f0 [32];
  CHAR local_d0 [204];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_00599908);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  FUN_005587a3(local_f0,&DAT_00599918);
  FUN_005587a3(local_d0,(byte *)s__f__f__f__f_0059991c);
  write_ini_string_setting(&DAT_00599928,local_f0,local_d0);
  FUN_005587a3(local_f0,&DAT_00599930);
  FUN_005587a3(local_d0,(byte *)s__f__f__f__f_00599934);
  write_ini_string_setting(&DAT_00599940,local_f0,local_d0);
  FUN_005587a3(local_f0,&DAT_00599948);
  FUN_005587a3(local_d0,(byte *)s__f__f__f__f_0059994c);
  write_ini_string_setting(&DAT_00599958,local_f0,local_d0);
  FUN_005587a3(local_f0,&DAT_00599960);
  FUN_005587a3(local_d0,(byte *)s__f__f__f__f_00599964);
  write_ini_string_setting(&DAT_00599970,local_f0,local_d0);
  return;
}


