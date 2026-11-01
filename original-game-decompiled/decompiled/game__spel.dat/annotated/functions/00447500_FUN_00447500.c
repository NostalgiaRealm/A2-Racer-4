
/* ==== FUN_00447500 @ 00447500 ==== 
 * signature: undefined __cdecl FUN_00447500(int param_1)
 * body: 00447500-0044752b;0044752f-00447536
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044752c-0044752e
 */

void __cdecl FUN_00447500(int param_1)

{
  if ((-1 < param_1) && (param_1 < 2)) {
    DAT_0059db84 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Function___s___Illegal_s_0059dffc);
}


