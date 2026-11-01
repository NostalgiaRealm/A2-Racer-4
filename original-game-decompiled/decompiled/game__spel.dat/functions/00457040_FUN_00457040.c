
/* ==== FUN_00457040 @ 00457040 ==== 
 * signature: undefined __stdcall FUN_00457040(void)
 * body: 00457040-00457087;0045708b-004570bd;004570c1-004570f3;004570f7-00457129;0045712d-0045715f;00457163-00457195;00457199-00457291;00457295-00457352;00457356-00457368
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00457088-0045708a 004570be-004570c0 004570f4-004570f6 0045712a-0045712c 00457160-00457162 00457196-00457198 00457292-00457294 00457353-00457355
 */

void FUN_00457040(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006fb8d0 != 0) {
    DAT_0073b4d4 = 1;
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 100))(DAT_0073b4b4);
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    pvVar1 = *(void **)(DAT_0073b210 + DAT_005b1bac * 4);
    FUN_00457790(pvVar1,(undefined4 *)&stack0xffffffac);
    FUN_00457750(pvVar1,(undefined4 *)&stack0xffffffac);
    iVar2 = DAT_0073b78c;
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1bac * 4);
    *(undefined4 *)(iVar3 + 0x4c) = 1;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    FUN_00440430(iVar3);
    FUN_004576c0(*(void **)(*DAT_0073b784 + iVar2 * 4),*(undefined4 *)(iVar3 + 0x50));
    DAT_0073b4d8 = 0xb4b4c8;
    if (DAT_0073b4d4 != 0) {
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x22,0xb4b4c8);
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
      pvVar1 = *(void **)(DAT_0073b210 + DAT_005b1bac * 4);
      FUN_00457790(pvVar1,(undefined4 *)&stack0xffffffac);
      FUN_00457750(pvVar1,(undefined4 *)&stack0xffffffac);
    }
    DAT_0073b4e4 = 0x40600000;
    if (DAT_0073b4d4 != 0) {
      iVar3 = (**(code **)(*DAT_0073b4b4 + 100))(DAT_0073b4b4,5,0x40600000);
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
    }
    FUN_004577d0(&DAT_0073b258,0x447a0000);
  }
  return;
}


