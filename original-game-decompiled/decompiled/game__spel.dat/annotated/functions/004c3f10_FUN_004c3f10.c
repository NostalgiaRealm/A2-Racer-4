
/* ==== FUN_004c3f10 @ 004c3f10 ==== 
 * signature: undefined __cdecl FUN_004c3f10(int param_1, char * param_2, size_t param_3)
 * body: 004c3f10-004c3f37;004c3f3b-004c3f5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3f38-004c3f3a
 */

void __cdecl FUN_004c3f10(int param_1,char *param_2,size_t param_3)

{
  if ((-1 < param_1) && (param_1 <= DAT_00740820)) {
    _strncpy(param_2,(char *)(&DAT_0073b8d0 + param_1 * 0x32),param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__get_ini_argument_value___s__d____005b36c8);
}


