
/* ==== FUN_004bbf20 @ 004bbf20 ==== 
 * signature: undefined4 __thiscall FUN_004bbf20(void * this, undefined4 param_1, int param_2)
 * body: 004bbf20-004bbf59;004bbf5d-004bc031
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bbf5a-004bbf5c
 */

undefined4 __thiscall FUN_004bbf20(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x270) = param_1;
  *(int *)((int)this + 0x278) = param_2;
  if (param_2 == 1) {
    iVar1 = FUN_004bbc50(this,0x84e63de0,0x11cf46aa,0x6f81,0x6e1520c0);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else if (param_2 == 3) {
    iVar1 = FUN_004bbc50(this,0xa4665c60,0x11cf2673,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 4) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____requested_unknown_devic_005b2264);
    }
    iVar1 = FUN_004bbc50(this,0xf2086b20,0x11cf259f,0xaa001aa3,0x5633b900);
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0x274) = 1;
  FUN_004bc160(this);
  FUN_004bb7a0((int)this);
  FUN_004bc0f0();
  return 1;
}


