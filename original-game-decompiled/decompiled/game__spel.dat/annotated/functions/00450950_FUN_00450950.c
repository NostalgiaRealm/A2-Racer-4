
/* ==== FUN_00450950 @ 00450950 ==== 
 * signature: undefined __cdecl FUN_00450950(char * param_1, int param_2)
 * body: 00450950-00450983;00450987-004509a0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00450984-00450986
 */

void __cdecl FUN_00450950(char *param_1,int param_2)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00447540();
  if (iVar1 != 0) {
    iVar1 = FUN_00450900(param_1);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Static_sample__s_not_fou_005a2764);
    }
    this = (void *)FUN_0049eb50(&DAT_006fbb5c,iVar1);
    FUN_0049e550(this,param_2);
  }
  return;
}


