
/* ==== start_game @ 0044cf60 ==== 
 * signature: undefined __stdcall start_game(void)
 * body: 0044cf60-0044cf8e
 * note: ANALYST: Called after init_main. [confidence: confirmed] [evidence: caller log 'Calling start_game']
 */

/* ANALYST: Called after init_main. [confidence: confirmed] [evidence: caller log 'Calling
   start_game'] */

void start_game(void)

{
  FUN_0044cda0(1);
  FUN_004500b0();
  DAT_006fb89c = 1;
  DAT_006fba98 = 0;
  DAT_006fb8c0 = 0;
  DAT_006fba9c = 0;
  FUN_0044ceb0();
  return;
}


