
/* ==== FUN_004cbf30 @ 004cbf30 ==== 
 * signature: undefined4 __cdecl FUN_004cbf30(int param_1)
 * body: 004cbf30-004cbf56;004cbf5a-004cbf8a;004cbf93-004cbfe2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cbf57-004cbf59 004cbf8b-004cbf92
 */

undefined4 __cdecl FUN_004cbf30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 < 0) || (DAT_005b5ea8 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____index_out_of_mem_image_a_005b5ca8);
  }
  iVar3 = param_1 * 0x20;
  iVar1 = *(int *)(iVar3 + 0x18 + DAT_00740d44);
  if (iVar1 == 2) {
    if (*(int *)(iVar3 + 0x1c + DAT_00740d44) != 0) {
      *(undefined4 *)(iVar3 + 0x1c + DAT_00740d44) = 0;
      piVar2 = *(int **)(iVar3 + 4 + DAT_00740d44);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  else {
    if (iVar1 != 4) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____illegal_alloc_type__d_f_005b5f30);
    }
    if (*(int *)(iVar3 + 0x1c + DAT_00740d44) != 0) {
      *(undefined4 *)(iVar3 + 0x1c + DAT_00740d44) = 0;
      FUN_00559d4e(*(LPVOID *)(iVar3 + DAT_00740d44));
      return 0;
    }
  }
  return 0;
}


