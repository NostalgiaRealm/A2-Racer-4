
/* ==== FUN_004c8800 @ 004c8800 ==== 
 * signature: undefined __cdecl FUN_004c8800(int param_1, int param_2, int param_3, int param_4)
 * body: 004c8800-004c8824;004c8828-004c8848;004c884c-004c8864;004c8868-004c8880;004c8884-004c88aa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c8825-004c8827 004c8849-004c884b 004c8865-004c8867 004c8881-004c8883
 */

void __cdecl FUN_004c8800(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 < 0) || (param_3 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____illegal_clipping_limit_t_005b5790);
  }
  if ((-1 < param_2) && (param_2 <= param_4)) {
    if (DAT_005b3798 < param_3) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____illegal_clipping_limit_b_005b573c);
    }
    if (DAT_005b379c < param_4) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____illegal_clipping_limit_b_005b5710);
    }
    DAT_007409d4 = param_4;
    DAT_007409e0 = param_2;
    DAT_007409d8 = param_3;
    DAT_007409dc = param_1;
    DAT_007409e8 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____illegal_clipping_limit_t_005b5768);
}


