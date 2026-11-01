
/* ==== FUN_004354e0 @ 004354e0 ==== 
 * signature: undefined __stdcall FUN_004354e0(void)
 * body: 004354e0-0043557c;00435580-004355c4;004355c8-0043561d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043557d-0043557f 004355c5-004355c7
 */

void FUN_004354e0(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_00599094);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  FUN_005587a3(local_e8,&DAT_005990a8);
  read_ini_string_setting(s_WHEEL_POSITIONS_005990ac,local_e8,(LPSTR)local_c8,199);
  iVar2 = -1;
  pbVar4 = local_c8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (iVar2 == -2) {
    FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_005990e0);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___s__d____No_valid_ini_setti_005990f4);
  }
  iVar2 = get_ini_arguments_online(local_c8,(uint *)0x0);
  if (iVar2 != 6) {
    FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_0059914c);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___s__d____Not_the_right_numb_00599160);
  }
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  FUN_004354a0(4);
  FUN_004354a0(5);
  return;
}


