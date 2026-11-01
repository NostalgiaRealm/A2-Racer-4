
/* ==== FUN_00405590 @ 00405590 ==== 
 * signature: bool __cdecl FUN_00405590(int param_1)
 * body: 00405590-004055b3;004055b7-0040560a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004055b4-004055b6
 */

bool __cdecl FUN_00405590(int param_1)

{
  uint uVar1;
  
  if ((5 < param_1) && (param_1 < 0x13)) {
    uVar1 = FUN_00407d20(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(*(int *)(&DAT_005cea34 + param_1 * 0x294) * 0xf0 + 0x34 +
                                 DAT_00715e50));
    return 0x32 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____FSM_object_index___d__d_0058f990);
}


