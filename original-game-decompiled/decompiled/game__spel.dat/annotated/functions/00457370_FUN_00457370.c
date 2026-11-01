
/* ==== FUN_00457370 @ 00457370 ==== 
 * signature: undefined __stdcall FUN_00457370(void)
 * body: 00457370-004573b7;004573bb-004573ed;004573f1-00457423;00457427-00457459;0045745d-0045748f;00457493-004574c5;004574c9-0045752c;00457530-004575ed;004575f1-00457603
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004573b8-004573ba 004573ee-004573f0 00457424-00457426 0045745a-0045745c 00457490-00457492 004574c6-004574c8 0045752d-0045752f 004575ee-004575f0
 */

void FUN_00457370(void)

{
  void *this;
  int iVar1;
  
  if (DAT_006fb8d0 != 0) {
    DAT_0073b4d4 = 0;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))(DAT_0073b4b4);
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    if (DAT_005b2b64 != -1) {
      FUN_004576f0(*(int *)(DAT_0073b210 + DAT_005b2b64 * 4));
    }
    DAT_0073b4d8 = 0xb4b4c8;
    if (DAT_0073b4d4 != 0) {
      iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x22,0xb4b4c8);
      if (iVar1 != 0) {
        FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
      this = *(void **)(DAT_0073b210 + DAT_005b1bac * 4);
      FUN_00457790(this,(undefined4 *)&stack0xffffffac);
      FUN_00457750(this,(undefined4 *)&stack0xffffffac);
    }
    DAT_0073b4e4 = 0x40600000;
    if (DAT_0073b4d4 != 0) {
      iVar1 = (**(code **)(*DAT_0073b4b4 + 100))(DAT_0073b4b4,5,0x40600000);
      if (iVar1 != 0) {
        FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
    }
    FUN_004577d0(&DAT_0073b258,0x447a0000);
  }
  return;
}


