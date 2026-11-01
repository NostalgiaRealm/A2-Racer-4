
/* ==== FUN_0043d3c0 @ 0043d3c0 ==== 
 * signature: undefined __stdcall FUN_0043d3c0(void)
 * body: 0043d3c0-0043d497;0043d49b-0043d4ee
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043d498-0043d49a
 */

void FUN_0043d3c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (DAT_006fb8d0 != 0) {
    iVar1 = FUN_004b75a0(&DAT_00712130,(char *)&PTR_s__00594b3c_0x17_0059bd50);
    iVar1 = *(int *)(**(int **)(DAT_0073b168 + iVar1 * 9 + 4) * 0x10 + DAT_0073b120);
    iVar2 = FUN_004b75a0(&DAT_00712130,(char *)&PTR_s__00594b3c_0x17_0059bd54);
    FUN_0043d230(iVar1,*(undefined4 *)
                        (**(int **)(DAT_0073b168 + iVar2 * 9 + 4) * 0x10 + 4 + DAT_0073b120));
    if (DAT_006fb8e0 != 0) {
      uVar3 = FUN_00558625();
      if ((uVar3 & 1) != 0) {
        if (DAT_006fb8e0 != 2) {
          if (DAT_0073b505 != 7) {
            DAT_0073b505 = 7;
            iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x15,7);
            if (iVar1 != 0) {
              FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d_____BLENDING__error_settin_0059bd78);
            }
          }
          iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059bd58);
          pcVar4 = *(char **)(iVar1 + 4);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          FUN_004c3b60(pcVar4);
          iVar1 = FUN_004c3cd0(s_options_0059bd70,s_FILTER_0059bd68);
          if (iVar1 == 2) {
            FUN_004bc200(&DAT_0073b258,1);
          }
        }
        FUN_00457040();
      }
    }
    DAT_006c40c8 = 1;
  }
  return;
}


