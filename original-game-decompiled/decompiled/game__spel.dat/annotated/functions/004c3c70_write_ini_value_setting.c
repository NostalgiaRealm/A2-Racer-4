
/* ==== write_ini_value_setting @ 004c3c70 ==== 
 * signature: undefined __cdecl write_ini_value_setting(LPCSTR param_1, LPCSTR param_2, uint param_3)
 * body: 004c3c70-004c3c8f;004c3c93-004c3cc4
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(write_ini_value_setting) %s(%d) : No ini file set, use set_ini_filena']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3c90-004c3c92
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(write_ini_value_setting) %s(%d) : No ini file set, use set_ini_filena'] */

void __cdecl write_ini_value_setting(LPCSTR param_1,LPCSTR param_2,uint param_3)

{
  char local_24 [36];
  
  if (DAT_0074081c == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__write_ini_value_setting___s__d__005b353c);
  }
  FUN_00567b81(param_3,local_24,10);
  WritePrivateProfileStringA(param_1,param_2,local_24,(LPCSTR)&DAT_007406f0);
  return;
}


