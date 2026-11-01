
/* ==== FUN_004c9c82 @ 004c9c82 ==== 
 * signature: undefined4 __stdcall FUN_004c9c82(void)
 * body: 004c9c82-004c9c8f
 */

undefined4 FUN_004c9c82(void)

{
  int iVar1;
  
  if (DAT_007409f4 == 0) {
    DAT_007409f0 = LocalAlloc(0x40,0x400);
    if (DAT_007409f0 == (HLOCAL)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____error_not_enough_memory_005b5ad4);
    }
    if (8 < DAT_005b37a0) {
      FUN_004c3fa0((byte *)s__s__d____16_bit_screen_mode__>_i_005b5aa4);
      DAT_007409f8 = 1;
      return 0;
    }
    iVar1 = (**(code **)(*DAT_0074088c + 0x14))(DAT_0074088c,0x44,DAT_007409f0,&DAT_007409ec,0);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____could_not_create_a_pale_005b5a78);
    }
    DAT_007409f4 = 1;
    FUN_004c9d50(0);
    FUN_004c9d50(1);
    FUN_004c9d50(2);
  }
  return 0;
}


