
/* ==== FUN_004ca160 @ 004ca160 ==== 
 * signature: undefined4 __cdecl FUN_004ca160(int param_1, undefined4 param_2)
 * body: 004ca160-004ca17c;004ca180-004ca1a7;004ca1ab-004ca210;004ca214-004ca219
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ca17d-004ca17f 004ca1a8-004ca1aa 004ca211-004ca213
 */

undefined4 __cdecl FUN_004ca160(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_00740a14 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____current_ascii_set_not_d_005b5cdc);
  }
  if ((param_1 < 0) || (*(int *)(DAT_00740a18 + 100) <= param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____index_out_of_mem_image_a_005b5ca8);
  }
  puVar1 = (undefined4 *)(*(int *)(DAT_00740a18 + 0x68) + param_1 * 0xc);
  iVar2 = puVar1[2];
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____locking_ascii_char_that_005b5c70);
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      uVar3 = FUN_004c48f0(*(int **)(puVar1[1] * 0x20 + 4 + DAT_00740d44));
      return uVar3;
    }
    return param_2;
  }
  uVar3 = FUN_004c48f0(*(int **)*puVar1);
  return uVar3;
}


