
/* ==== FUN_004ca220 @ 004ca220 ==== 
 * signature: undefined4 __cdecl FUN_004ca220(int param_1, undefined4 param_2)
 * body: 004ca220-004ca23c;004ca240-004ca267;004ca26b-004ca2d4;004ca2d8-004ca2db
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ca23d-004ca23f 004ca268-004ca26a 004ca2d5-004ca2d7
 */

undefined4 __cdecl FUN_004ca220(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
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
    Fatal((byte *)s__s__d____unlocking_ascii_char_th_005b5d08);
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_004c4a20(*(int **)(puVar1[1] * 0x20 + 4 + DAT_00740d44),param_2);
      return 0;
    }
    return 0;
  }
  FUN_004c4a20(*(int **)*puVar1,param_2);
  return 0;
}


