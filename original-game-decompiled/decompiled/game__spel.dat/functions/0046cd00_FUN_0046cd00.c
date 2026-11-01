
/* ==== FUN_0046cd00 @ 0046cd00 ==== 
 * signature: int __stdcall FUN_0046cd00(int param_1, int param_2)
 * body: 0046cd00-0046cd4d;0046cd51-0046cd58
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046cd4e-0046cd50
 */

int FUN_0046cd00(int param_1,int param_2)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_004ea0c0();
  iVar1 = FUN_004eb480(this,param_1,param_2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Could_not_find_ID__s_fro_005a84fc);
  }
  return iVar1;
}


