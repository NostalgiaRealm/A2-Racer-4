
/* ==== FUN_004a7d10 @ 004a7d10 ==== 
 * signature: undefined __thiscall FUN_004a7d10(void * this, undefined4 * param_1)
 * body: 004a7d10-004a7d2c;004a7d30-004a7d62
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a7d2d-004a7d2f
 */

void __thiscall FUN_004a7d10(void *this,undefined4 *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Can_not_set_orientation_o_005afc4c);
  }
  iVar1 = DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9;
  *(undefined4 *)(iVar1 + 0x74) = *param_1;
  *(undefined4 *)(iVar1 + 0x78) = param_1[1];
  *(undefined4 *)(iVar1 + 0x7c) = param_1[2];
  return;
}


