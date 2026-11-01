
/* ==== FUN_0043a5e0 @ 0043a5e0 ==== 
 * signature: int __stdcall FUN_0043a5e0(void)
 * body: 0043a5e0-0043a617;0043a61f-0043a683
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043a618-0043a61e
 */

int FUN_0043a5e0(void)

{
  int iVar1;
  uint uVar2;
  void *this;
  int iVar3;
  
  iVar1 = FUN_004475d0();
  if (iVar1 == 0) {
    return -1;
  }
  if (DAT_006c35c0 == 1) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = *(int *)(&DAT_00599cd0 + uVar2 * 0x44);
  }
  else if (DAT_006c35c0 == 2) {
    FUN_00558625();
    iVar1 = DAT_00599d58;
  }
  else {
    if (DAT_006c35c0 != 3) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Illegal_value_for_g_time_0059a028);
    }
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar1 = *(int *)(&DAT_00599da0 + uVar2 * 0x44);
  }
  iVar3 = 0;
  this = (void *)FUN_0049eb50(&DAT_006fbb5c,iVar1);
  FUN_0049e550(this,iVar3);
  return iVar1;
}


