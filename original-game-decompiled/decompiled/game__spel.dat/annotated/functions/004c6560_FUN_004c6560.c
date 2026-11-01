
/* ==== FUN_004c6560 @ 004c6560 ==== 
 * signature: undefined __stdcall FUN_004c6560(void)
 * body: 004c6560-004c658c;004c6591-004c65aa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c658d-004c6590
 */

void FUN_004c6560(void)

{
  HLOCAL pvVar1;
  
  if (DAT_00740914 != 0) {
    pvVar1 = LocalFree(DAT_0074090c);
    if (pvVar1 != (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____failure_to_free_file_li_005b4b34);
    }
    FUN_005588fd(DAT_00740904);
    DAT_00740914 = 0;
  }
  return;
}


