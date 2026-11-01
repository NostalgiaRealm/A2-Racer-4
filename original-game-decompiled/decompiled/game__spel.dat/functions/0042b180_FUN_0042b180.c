
/* ==== FUN_0042b180 @ 0042b180 ==== 
 * signature: bool __thiscall FUN_0042b180(void * this, int param_1)
 * body: 0042b180-0042b1a5;0042b1a9-0042b1be
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042b1a6-0042b1a8
 */

bool __thiscall FUN_0042b180(void *this,int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x65)) {
    iVar1 = FUN_0042ae20((undefined4 *)((int)this + param_1 * 0x24));
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_type_entry___d__c_00596fb8);
}


