
/* ==== FUN_004c3c30 @ 004c3c30 ==== 
 * signature: undefined __cdecl FUN_004c3c30(LPCSTR param_1, LPCSTR param_2, LPCSTR param_3)
 * body: 004c3c30-004c3c49;004c3c4d-004c3c67
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3c4a-004c3c4c
 */

void __cdecl FUN_004c3c30(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  if (DAT_0074081c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__write_ini_string_setting___s__d_005b34f0);
  }
  WritePrivateProfileStringA(param_1,param_2,param_3,(LPCSTR)&DAT_007406f0);
  return;
}


