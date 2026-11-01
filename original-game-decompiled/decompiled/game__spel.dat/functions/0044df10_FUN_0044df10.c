
/* ==== FUN_0044df10 @ 0044df10 ==== 
 * signature: undefined __stdcall FUN_0044df10(void)
 * body: 0044df10-0044df2e;0044df33-0044df61
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044df2f-0044df32
 */

void FUN_0044df10(void)

{
  int iVar1;
  
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    FUN_004c41e0();
    return;
  }
  if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____winmain____Illegal_ren_005a1c88);
  }
  FUN_004c8b90(2,1,0,0,DAT_005b3798,DAT_005b379c,0,0,DAT_005b3798,DAT_005b379c,0);
  FUN_004c41e0();
  return;
}


