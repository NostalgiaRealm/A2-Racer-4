
/* ==== FUN_00435620 @ 00435620 ==== 
 * signature: undefined __stdcall FUN_00435620(void)
 * body: 00435620-004356bc;004356c0-00435704;00435708-0043575d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004356bd-004356bf 00435705-00435707
 */

void FUN_00435620(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_005991b0);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  FUN_005587a3(local_e8,&DAT_005991c4);
  FUN_004c3d10(s_LIGHT_POSITIONS_005991c8,local_e8,(LPSTR)local_c8,199);
  iVar2 = -1;
  pbVar4 = local_c8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (iVar2 == -2) {
    FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_005991fc);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___s__d____No_valid_ini_setti_00599210);
  }
  iVar2 = FUN_004c3d60(local_c8,(uint *)0x0);
  if (iVar2 != 6) {
    FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_00599268);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___s__d____Not_the_right_numb_0059927c);
  }
  FUN_004354a0(0);
  FUN_004354a0(1);
  FUN_004354a0(2);
  FUN_004354a0(3);
  FUN_004354a0(4);
  FUN_004354a0(5);
  return;
}


