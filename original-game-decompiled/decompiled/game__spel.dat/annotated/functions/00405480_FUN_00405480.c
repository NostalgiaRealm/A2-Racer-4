
/* ==== FUN_00405480 @ 00405480 ==== 
 * signature: bool __cdecl FUN_00405480(int param_1)
 * body: 00405480-004054a2;004054a6-004054f2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004054a3-004054a5
 */

bool __cdecl FUN_00405480(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = FUN_004a7200(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    return 0x1e < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Illegal_FSM_object_inde_0058f8e8);
}


