
/* ==== FUN_00423930 @ 00423930 ==== 
 * signature: undefined __cdecl FUN_00423930(int param_1, int param_2)
 * body: 00423930-0042394c;00423950-0042398c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042394d-0042394f
 */

void __cdecl FUN_00423930(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_005d3440 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Array_of_active_cops_not_00595950);
  }
  if (param_2 == 0) {
    FUN_004238f0(param_1);
  }
  else {
    iVar1 = FUN_004238f0(param_1);
    if (iVar1 == -1) {
      iVar1 = FUN_004238b0();
      if (iVar1 != -1) {
        (&DAT_005d33ec)[iVar1] = param_1;
        return;
      }
    }
  }
  return;
}


