
/* ==== FUN_0042f370 @ 0042f370 ==== 
 * signature: undefined __stdcall FUN_0042f370(int param_1)
 * body: 0042f370-0042f38d;0042f391-0042f3a8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042f38e-0042f390
 */

void FUN_0042f370(int param_1)

{
  void *this;
  int iVar1;
  
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Sound_not_initialised__00597bec);
  }
  iVar1 = 1;
  this = (void *)FUN_0049eb50(&DAT_006fbb5c,param_1);
  FUN_0049e550(this,iVar1);
  return;
}


