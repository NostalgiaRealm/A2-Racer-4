
/* ==== FUN_004c3d10 @ 004c3d10 ==== 
 * signature: undefined __cdecl FUN_004c3d10(LPCSTR param_1, LPCSTR param_2, LPSTR param_3, DWORD param_4)
 * body: 004c3d10-004c3d2c;004c3d30-004c3d54
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3d2d-004c3d2f
 */

void __cdecl FUN_004c3d10(LPCSTR param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4)

{
  if (DAT_0074081c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__read_ini_string_setting___s__d__005b35d4);
  }
  GetPrivateProfileStringA(param_1,param_2,&DAT_00712694,param_3,param_4,(LPCSTR)&DAT_007406f0);
  return;
}


