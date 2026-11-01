
/* ==== FUN_004c2b90 @ 004c2b90 ==== 
 * signature: undefined __cdecl FUN_004c2b90(undefined4 param_1)
 * body: 004c2b90-004c2c0e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2c0f-004c2c10
 */

void __cdecl FUN_004c2b90(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    DAT_0073b82e = DAT_0073b81e;
    FUN_004c3fa0((byte *)s_TXF_4BPP_RAMP_selected____d_005b334c);
    return;
  case 2:
    DAT_0073b82e = DAT_0073b822;
    FUN_004c3fa0((byte *)s_TXF_8BPP_RAMP_selected____d_005b332c);
    return;
  case 3:
    DAT_0073b82e = DAT_0073b82a;
    FUN_004c3fa0((byte *)s_TXF_16BPP_RGB_selected____d_005b330c);
    return;
  case 4:
    DAT_0073b82e = DAT_0073b826;
    FUN_004c3fa0((byte *)s_TXF_16BPP_ALPHA_selected____d_005b32ec);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_texture_format_t_005b32c4);
  }
}


