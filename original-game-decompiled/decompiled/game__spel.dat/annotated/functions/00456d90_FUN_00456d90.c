
/* ==== FUN_00456d90 @ 00456d90 ==== 
 * signature: undefined __cdecl FUN_00456d90(int param_1)
 * body: 00456d90-00456ddb;00456ddf-00456e11;00456e15-00456e47;00456e4b-00456e7d;00456e81-00456eb3;00456eb7-00456ee9;00456eed-00456f50;00456f54-00457011;00457015-00457031
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00456ddc-00456dde 00456e12-00456e14 00456e48-00456e4a 00456e7e-00456e80 00456eb4-00456eb6 00456eea-00456eec 00456f51-00456f53 00457012-00457014
 */

void __cdecl FUN_00456d90(int param_1)

{
  void *this;
  int iVar1;
  int *piStack_54;
  
  if (DAT_006fba58 == param_1) {
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
      piStack_54 = (int *)0x456e7e;
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
      piStack_54 = (int *)0xfc;
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    piStack_54 = DAT_0073b4b4;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 100))();
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    if (DAT_005b2b64 != -1) {
      FUN_004576f0(*(int *)(DAT_0073b210 + DAT_005b2b64 * 4));
    }
    DAT_0073b4d8 = 0xc8c8ff;
    if (DAT_0073b4d4 != 0) {
      iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x22,0xc8c8ff);
      if (iVar1 != 0) {
        FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
      piStack_54 = (int *)((float)(DAT_0073b4d8 >> 0x10) * 0.003921569);
      this = *(void **)(DAT_0073b210 + DAT_005b1bac * 4);
      FUN_00457790(this,&piStack_54);
      FUN_00457750(this,&piStack_54);
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
    DAT_006fcdf0 = 0;
  }
  return;
}


