
/* ==== FUN_00437b10 @ 00437b10 ==== 
 * signature: undefined __cdecl FUN_00437b10(undefined4 * param_1)
 * body: 00437b10-00437b8c;00437b90-00437bb7;00437bbb-00437d57
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00437b8d-00437b8f 00437bb8-00437bba
 */

void __cdecl FUN_00437b10(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 auStack_128 [16];
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059981c);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  FUN_005587a3(local_e8,&DAT_0059982c);
  FUN_004c3d10(&DAT_00599830,local_e8,(LPSTR)local_c8,199);
  iVar2 = -1;
  pbVar5 = local_c8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  if (iVar2 == -2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____No__valid__ini_settings_0059985c);
  }
  iVar2 = FUN_004c3d60(local_c8,(uint *)0x0);
  if (iVar2 != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Not_the_right_number_of_005998b0);
  }
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  FUN_005587a3(local_e8,&DAT_005998e4);
  FUN_004c3d10(&DAT_005998e8,local_e8,(LPSTR)local_c8,199);
  FUN_004c3d60(local_c8,(uint *)0x0);
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  FUN_005587a3(local_e8,&DAT_005998f0);
  FUN_004c3d10(&DAT_005998f4,local_e8,(LPSTR)local_c8,199);
  FUN_004c3d60(local_c8,(uint *)0x0);
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  FUN_005587a3(local_e8,&DAT_005998fc);
  FUN_004c3d10(&DAT_00599900,local_e8,(LPSTR)local_c8,199);
  FUN_004c3d60(local_c8,(uint *)0x0);
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  puVar4 = auStack_128;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


