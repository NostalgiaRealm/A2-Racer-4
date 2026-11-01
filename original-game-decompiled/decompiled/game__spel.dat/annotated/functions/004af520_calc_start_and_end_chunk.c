
/* ==== calc_start_and_end_chunk @ 004af520 ==== 
 * signature: bool __cdecl calc_start_and_end_chunk(int param_1, int param_2, int * param_3, int * param_4, undefined4 * param_5, int * param_6)
 * body: 004af520-004af541;004af545-004af594
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(calc_start_and_end_chunk) illegal start chunk: %d']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004af542-004af544
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(calc_start_and_end_chunk) illegal start chunk: %d'] */

bool __cdecl
calc_start_and_end_chunk
          (int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5,int *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 <= DAT_00715f04)) {
    iVar3 = DAT_00715f04 + 1;
    iVar4 = param_1;
    if (param_1 < 0) {
      iVar4 = 0;
    }
    if (DAT_00715f04 <= iVar4) {
      iVar4 = DAT_00715f04 + -1;
    }
    iVar2 = param_2 + param_1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    bVar1 = DAT_00715f04 <= iVar2;
    if (bVar1) {
      iVar3 = iVar2 - DAT_00715f04;
      iVar2 = DAT_00715f04 + -1;
    }
    *param_3 = iVar4;
    *param_4 = iVar2;
    *param_5 = 0;
    *param_6 = iVar3;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__calc_start_and_end_chunk__illeg_005b0738);
}


