
/* ==== FUN_0043aa20 @ 0043aa20 ==== 
 * signature: undefined __cdecl FUN_0043aa20(char * param_1, int param_2)
 * body: 0043aa20-0043aa55;0043aa59-0043aa61
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043aa56-0043aa58
 */

void __cdecl FUN_0043aa20(char *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = FUN_00450900(param_1);
      *(int *)(param_1 + 0x40) = iVar1;
      if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__Static_sample__s_not_fou_0059a0d4);
      }
      param_1 = param_1 + 0x44;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


