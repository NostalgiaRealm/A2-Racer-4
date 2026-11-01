
/* ==== init_moving_sky @ 004454c0 ==== 
 * signature: undefined __stdcall init_moving_sky(void)
 * body: 004454c0-004455a7;004455ab-004455ab
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(init_moving_sky) %s(%d) : Invalid screen size']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004455a8-004455aa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(init_moving_sky) %s(%d) : Invalid screen size'] */

void init_moving_sky(void)

{
  LPCSTR pCVar1;
  
  DAT_006ed690 = (int *)0x0;
  if ((DAT_006fb8d0 == 0) && (DAT_006fb8a4 == 0)) {
    switch(DAT_006fb890) {
    case 0:
      pCVar1 = &DAT_006fa5d6 + DAT_006fb898 * 0x94;
      break;
    case 1:
    case 2:
    case 3:
      pCVar1 = &DAT_006fa5e4 + DAT_006fb898 * 0x94;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__init_moving_sky___s__d____Inval_0059d7b4);
    }
    DAT_006ed690 = FUN_004cb230(pCVar1,&DAT_006ed6a0,(int *)&DAT_006ed6a4);
    DAT_006ed6a8 = DAT_005b3798;
    _DAT_006ed69c = 0;
    DAT_006ed694 = 0;
    DAT_006ed6ac = DAT_005b379c - DAT_005b379c / 3;
    DAT_006ed698 = 0;
    FUN_004456e0();
    DAT_006ed6f4 = 1;
    return;
  }
  return;
}


