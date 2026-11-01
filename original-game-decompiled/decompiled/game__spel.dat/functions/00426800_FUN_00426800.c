
/* ==== FUN_00426800 @ 00426800 ==== 
 * signature: int __thiscall FUN_00426800(void * this, int param_1)
 * body: 00426800-00426856;0042685a-00426876
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00426857-00426859
 */

int __thiscall FUN_00426800(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00426450((int)this + iVar2 * 0xe28 + 0x1398);
    iVar3 = iVar2;
    if (iVar1 == param_1) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Car_object_Handler_for_c_00595f04);
  }
  return (int)this + iVar4 * 0xe28 + 0x1398;
}


