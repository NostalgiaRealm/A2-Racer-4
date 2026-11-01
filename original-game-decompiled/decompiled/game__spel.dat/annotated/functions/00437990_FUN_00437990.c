
/* ==== FUN_00437990 @ 00437990 ==== 
 * signature: undefined __cdecl FUN_00437990(undefined4 * param_1)
 * body: 00437990-00437a06;00437a0a-00437a2e;00437a32-00437a79
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00437a07-00437a09 00437a2f-00437a31
 */

void __cdecl FUN_00437990(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059972c);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  FUN_005587a3(local_e8,&DAT_0059973c);
  read_ini_string_setting(&DAT_00599740,local_e8,(LPSTR)local_c8,199);
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
    Fatal((byte *)s__s__d____No__valid__ini_settings_0059976c);
  }
  iVar2 = get_ini_arguments_online(local_c8,(uint *)0x0);
  if (iVar2 != 3) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Not_the_right_number_of_005997c0);
  }
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  *param_1 = uStack_f4;
  param_1[1] = uStack_f0;
  param_1[2] = uStack_ec;
  return;
}


