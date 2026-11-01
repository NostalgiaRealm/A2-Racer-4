
/* ==== FUN_004a97f0 @ 004a97f0 ==== 
 * signature: undefined __fastcall FUN_004a97f0(int param_1)
 * body: 004a97f0-004a980d;004a9811-004a9826
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a980e-004a9810
 */

void __fastcall FUN_004a97f0(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_Physics_object_not_defined_005aff68);
  }
  FUN_004a18e0(*(void **)(param_1 + 0x10),(float *)&stack0x00000010,(float *)&stack0x00000004);
  return;
}


