
/* ==== FUN_00457d20 @ 00457d20 ==== 
 * signature: undefined __stdcall FUN_00457d20(void)
 * body: 00457d20-00457d76;00457d7f-00457d9e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00457d77-00457d7e
 */

void FUN_00457d20(void)

{
  int iVar1;
  
  iVar1 = FUN_00448470(0);
  if (DAT_006fb8ec == 0xfffffff) {
    DAT_006fcf80 = 0;
    (&DAT_006fce28)[DAT_006fcf84] = iVar1;
    DAT_006fcf84 = DAT_006fcf84 + 1;
    return;
  }
  if ((-1 < DAT_006fcf84) && (DAT_006fcf84 < 10)) {
    (&DAT_006fce28)[DAT_006fcf84] = iVar1;
    DAT_006fcf80 = iVar1 - (&DAT_006fce50)[DAT_006fcf84];
    DAT_006fcf84 = DAT_006fcf84 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Index_current_time_check_005a3f14);
}


