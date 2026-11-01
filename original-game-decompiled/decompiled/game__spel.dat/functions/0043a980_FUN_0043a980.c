
/* ==== FUN_0043a980 @ 0043a980 ==== 
 * signature: bool __stdcall FUN_0043a980(void)
 * body: 0043a980-0043a9cf;0043a9d6-0043a9ea
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043a9d0-0043a9d5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0043a980(void)

{
  DWORD DVar1;
  
  if (DAT_006fb8a0 != 8) {
    return true;
  }
  if (2 < DAT_006c35c0) {
    DAT_0059a190 = 2;
    FUN_0044cda0(6);
    return true;
  }
  if (DAT_006c35ac != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Illegal_mode_for_cop_seq_0059a07c);
  }
  DVar1 = GetTickCount();
  return (bool)('\x01' - (DVar1 - _DAT_006c35bc < 4000));
}


