
/* ==== FUN_00437f00 @ 00437f00 ==== 
 * signature: float10 __stdcall FUN_00437f00(void)
 * body: 00437f00-00437f7f;00437f83-00437faa;00437fae-00437fc4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00437f80-00437f82 00437fab-00437fad
 */

float10 FUN_00437f00(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  float fStack_ec;
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_00599978);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  FUN_005587a3(local_e8,&DAT_00599988);
  read_ini_string_setting(&DAT_0059998c,local_e8,(LPSTR)local_c8,199);
  iVar2 = -1;
  pbVar4 = local_c8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (iVar2 == -2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____No__valid__ini_settings_005999b8);
  }
  iVar2 = get_ini_arguments_online(local_c8,(uint *)0x0);
  if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Not_the_right_number_of_00599a0c);
  }
  FUN_004354a0(0);
  return (float10)fStack_ec;
}


