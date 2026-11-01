
/* ==== FUN_00418960 @ 00418960 ==== 
 * signature: float10 __cdecl FUN_00418960(int param_1)
 * body: 00418960-004189b8;004189bc-004189e2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004189b9-004189bb
 */

float10 __cdecl FUN_00418960(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = 3.4028235e+38;
  iVar2 = 6;
  do {
    iVar1 = FUN_00423290(param_1,1);
    if (((iVar1 == -1) && (iVar1 = FUN_00423290(param_1,0), iVar1 == -1)) &&
       (iVar1 = FUN_00423290(param_1,2), iVar1 == -1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_Waypoint__d_has_no_success_005936dc);
    }
    fVar3 = FUN_00423560(param_1);
    if (fVar3 < (float10)local_4) {
      local_4 = (float)fVar3;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (float10)local_4;
}


