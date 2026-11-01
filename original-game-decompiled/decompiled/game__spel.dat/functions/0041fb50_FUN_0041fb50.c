
/* ==== FUN_0041fb50 @ 0041fb50 ==== 
 * signature: undefined __cdecl FUN_0041fb50(int param_1)
 * body: 0041fb50-0041fb72;0041fb76-0041fbc6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041fb73-0041fb75
 */

void __cdecl FUN_0041fb50(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
      (&DAT_005ce9f8)[iVar1] = 0;
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
      (&DAT_005ceadd)[iVar1] = 0;
      (&DAT_005ceadc)[iVar1] = 1;
    }
    FUN_0041eeb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_00594f64);
}


