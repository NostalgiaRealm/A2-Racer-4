
/* ==== FUN_00448c90 @ 00448c90 ==== 
 * signature: undefined4 __thiscall FUN_00448c90(void * this, byte * param_1)
 * body: 00448c90-00448cb0;00448cb4-00448cca
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00448cb1-00448cb3
 */

undefined4 __thiscall FUN_00448c90(void *this,byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00448c00(this,param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_The_given_description___s__does_n_0059ee78);
  }
  puVar2 = (undefined4 *)**(undefined4 **)((int)this + 8);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)*puVar2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return puVar2[2];
}


