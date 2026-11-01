
/* ==== FUN_004c3cd0 @ 004c3cd0 ==== 
 * signature: undefined __cdecl FUN_004c3cd0(LPCSTR param_1, LPCSTR param_2)
 * body: 004c3cd0-004c3cec;004c3cf0-004c3d07
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3ced-004c3cef
 */

void __cdecl FUN_004c3cd0(LPCSTR param_1,LPCSTR param_2)

{
  if (DAT_0074081c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__read_ini_value_setting___s__d____005b3588);
  }
  GetPrivateProfileIntA(param_1,param_2,0,(LPCSTR)&DAT_007406f0);
  return;
}


