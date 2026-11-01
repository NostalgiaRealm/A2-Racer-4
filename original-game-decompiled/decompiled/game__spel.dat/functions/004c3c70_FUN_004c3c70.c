
/* ==== FUN_004c3c70 @ 004c3c70 ==== 
 * signature: undefined __cdecl FUN_004c3c70(LPCSTR param_1, LPCSTR param_2, uint param_3)
 * body: 004c3c70-004c3c8f;004c3c93-004c3cc4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3c90-004c3c92
 */

void __cdecl FUN_004c3c70(LPCSTR param_1,LPCSTR param_2,uint param_3)

{
  char local_24 [36];
  
  if (DAT_0074081c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__write_ini_value_setting___s__d__005b353c);
  }
  FUN_00567b81(param_3,local_24,10);
  WritePrivateProfileStringA(param_1,param_2,local_24,(LPCSTR)&DAT_007406f0);
  return;
}


