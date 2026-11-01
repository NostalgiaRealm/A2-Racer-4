
/* ==== FUN_0044bbf0 @ 0044bbf0 ==== 
 * signature: undefined __stdcall FUN_0044bbf0(void)
 * body: 0044bbf0-0044bc6e;0044bc72-0044bd05;0044bd09-0044bd0a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044bc6f-0044bc71 0044bd06-0044bd08
 */

void FUN_0044bbf0(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_game_render_states_005a1214);
  if (DAT_006fb8d0 == 0) {
    if (DAT_0073b505 == 7) goto LAB_0044bc72;
    DAT_0073b505 = 7;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,7);
  }
  else {
    if (DAT_0073b505 == 2) goto LAB_0044bc72;
    DAT_0073b505 = 2;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,2);
  }
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____BLENDING__error_settin_0059bd78);
  }
LAB_0044bc72:
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a122c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  iVar1 = read_ini_value_setting(s_OPTIONS_005a1244,s_FILTER_005a123c);
  if (iVar1 == 2) {
    if (DAT_006fb8d0 == 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_004bc200(&DAT_0073b258,iVar1);
  if ((DAT_006fb8d0 != 0) && (DAT_0073b521 != 2)) {
    DAT_0073b521 = 2;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,9,2);
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____SHADE_MODE__error_sett_005a16c4);
    }
  }
  return;
}


