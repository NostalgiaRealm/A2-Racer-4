
/* ==== rceng_load_etappe @ 004a6b10 ==== 
 * signature: undefined __stdcall rceng_load_etappe(void)
 * body: 004a6b10-004a6b22;004a6b26-004a6b45
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(rceng_load_etappe) engine not initialised']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6b23-004a6b25
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(rceng_load_etappe) engine not initialised'] */

void rceng_load_etappe(void)

{
  if (DAT_00715b14 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__rceng_load_etappe__engine_not_i_005af7d4);
  }
  FUN_004c3fa0((byte *)s_loading_etappe___s_005af7bc);
  rd_load_etappe_files(&DAT_00715250);
  return;
}


