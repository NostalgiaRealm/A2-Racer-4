
/* ==== FUN_00464a70 @ 00464a70 ==== 
 * signature: undefined4 __cdecl FUN_00464a70(int * param_1)
 * body: 00464a70-00464aa4;00464aa8-00464ae6;00464aea-00464b10;00464b14-00464b22
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464aa5-00464aa7 00464ae7-00464ae9 00464b11-00464b13
 */

undefined4 __cdecl FUN_00464a70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if ((-1 < param_1[6]) && (param_1[6] < DAT_00712108)) {
    iVar1 = FUN_004641a0(param_1[6]);
    iVar1 = (&DAT_00709f10)[iVar1 * 0xd0];
    if ((-1 < iVar1) && (iVar1 < 0x16)) {
      if ((&PTR_FUN_005a64d0)[iVar1 * 5] == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__NULL_pointer_for_path_ha_005a6990);
      }
      uVar2 = (*(code *)(&PTR_FUN_005a64d0)[iVar1 * 5])(param_1);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Unknown_path_type__Path__005a6938);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Path_does_not_exist__Pat_005a68d8);
}


