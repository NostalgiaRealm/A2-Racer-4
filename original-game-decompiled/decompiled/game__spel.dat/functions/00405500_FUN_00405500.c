
/* ==== FUN_00405500 @ 00405500 ==== 
 * signature: undefined4 __cdecl FUN_00405500(int param_1)
 * body: 00405500-00405523;00405527-00405583
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00405524-00405526
 */

undefined4 __cdecl FUN_00405500(int param_1)

{
  int iVar1;
  
  if ((5 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if (2.0 < *(float *)(&DAT_005cea54 + iVar1)) {
      if (20.0 < *(float *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0xc4 + DAT_00715e50)) {
        return 1;
      }
      *(undefined4 *)(&DAT_005cea54 + iVar1) = 0;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____FSM_object_index___d__d_0058f934);
}


