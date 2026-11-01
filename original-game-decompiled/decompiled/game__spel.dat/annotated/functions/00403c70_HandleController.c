
/* ==== HandleController @ 00403c70 ==== 
 * signature: undefined __cdecl HandleController(float param_1, undefined4 param_2, float param_3, float param_4, float param_5)
 * body: 00403c70-00403c92;00403c96-00403cc2
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to HandleController function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403c93-00403c95
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to HandleController function'] */

void __cdecl
HandleController(float param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  if ((-1 < (int)param_1) && ((int)param_1 < 0x13)) {
    HandleGasBreak((int)param_1);
    FUN_00403a70(param_1,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058ec10);
}


