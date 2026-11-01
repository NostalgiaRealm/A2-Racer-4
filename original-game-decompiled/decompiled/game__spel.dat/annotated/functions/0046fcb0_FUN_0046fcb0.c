
/* ==== FUN_0046fcb0 @ 0046fcb0 ==== 
 * signature: undefined __thiscall FUN_0046fcb0(void * this, undefined4 param_1)
 * body: 0046fcb0-0046fcfa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046fcfb-0046fd0a
 */

void __thiscall FUN_0046fcb0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (0 < iVar1) {
    if (iVar1 < 3) {
      FUN_0046f530((int)this);
      FUN_0046f050(param_1);
      return;
    }
    if (iVar1 == 3) {
      FUN_0046f960((int)this);
      FUN_0046f050(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Illegal_device_selected__005a89b0);
}


