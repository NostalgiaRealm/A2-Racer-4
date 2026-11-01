
/* ==== handle_framecount_timing @ 0044e180 ==== 
 * signature: undefined __stdcall handle_framecount_timing(void)
 * body: 0044e180-0044e186
 * note: ANALYST: Per-frame timing. [confidence: confirmed] [evidence: caller log 'Calling handle_framecount_timing']
 */

/* ANALYST: Per-frame timing. [confidence: confirmed] [evidence: caller log 'Calling
   handle_framecount_timing'] */

void handle_framecount_timing(void)

{
  DAT_006fb998 = DAT_006fb998 + 1;
  return;
}


