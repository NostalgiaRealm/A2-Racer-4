
/* ==== FUN_004cbff0 @ 004cbff0 ==== 
 * signature: undefined4 __cdecl FUN_004cbff0(int param_1, undefined4 * param_2)
 * body: 004cbff0-004cc015;004cc019-004cc054
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cc016-004cc018
 */

undefined4 __cdecl FUN_004cbff0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < DAT_005b5ea8)) {
    iVar2 = param_1 * 0x20;
    if (*(int *)(iVar2 + 0x18 + DAT_00740d44) == 2) {
      uVar1 = FUN_004c48f0(*(int **)(iVar2 + 4 + DAT_00740d44));
      *(undefined4 *)(iVar2 + DAT_00740d44) = uVar1;
      return 0;
    }
    *param_2 = *(undefined4 *)(iVar2 + 8 + DAT_00740d44);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____index_out_of_mem_image_a_005b5ca8);
}


