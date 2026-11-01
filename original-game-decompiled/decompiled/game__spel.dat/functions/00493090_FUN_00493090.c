
/* ==== FUN_00493090 @ 00493090 ==== 
 * signature: undefined __thiscall FUN_00493090(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00493090-004930b1;004930b8-004930ed
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004930b2-004930b7
 */

void __thiscall
FUN_00493090(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x54);
  if (iVar1 == 0) {
    FUN_00492a90(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Illegal_state_for_portra_005ad060);
    }
    FUN_00492c70((int)this);
    return;
  }
  FUN_00492ac0((int)this);
  return;
}


