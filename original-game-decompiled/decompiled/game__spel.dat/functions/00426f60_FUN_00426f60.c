
/* ==== FUN_00426f60 @ 00426f60 ==== 
 * signature: int __thiscall FUN_00426f60(void * this, int param_1)
 * body: 00426f60-00426fa7;00426fab-00426fb8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00426fa8-00426faa
 */

int __thiscall FUN_00426f60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_00425230((undefined4 *)((int)this + iVar2 * 0x14 + 0x10));
    iVar3 = iVar2;
    if (iVar1 == param_1) {
      iVar3 = 0xfa;
      iVar4 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar2 < 0xfa);
  if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Damage_info_for_car_cou_00596218);
  }
  return (int)this + iVar4 * 0x14 + 0x10;
}


