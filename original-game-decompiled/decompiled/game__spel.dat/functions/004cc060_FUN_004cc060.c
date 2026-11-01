
/* ==== FUN_004cc060 @ 004cc060 ==== 
 * signature: undefined4 __cdecl FUN_004cc060(int param_1)
 * body: 004cc060-004cc085;004cc089-004cc0ab
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cc086-004cc088
 */

undefined4 __cdecl FUN_004cc060(int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < DAT_005b5ea8)) {
    puVar1 = (undefined4 *)(DAT_00740d44 + param_1 * 0x20);
    if (puVar1[6] == 2) {
      FUN_004c4a20((int *)puVar1[1],*puVar1);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____index_out_of_mem_image_a_005b5ca8);
}


