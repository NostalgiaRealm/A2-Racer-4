
/* ==== FUN_004319a0 @ 004319a0 ==== 
 * signature: undefined4 __cdecl FUN_004319a0(int param_1)
 * body: 004319a0-004319ca;004319ce-004319e4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004319cb-004319cd
 */

undefined4 __cdecl FUN_004319a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004316d0(param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Object_with_index__d_is_n_00597e78);
  }
  FUN_0042fd40(&DAT_006c32f0 + iVar1 * 0xd);
  return 0;
}


