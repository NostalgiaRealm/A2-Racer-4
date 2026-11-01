
/* ==== FUN_00464c10 @ 00464c10 ==== 
 * signature: undefined __cdecl FUN_00464c10(int param_1)
 * body: 00464c10-00464c32;00464c36-00464c78;00464c7c-00464ca2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464c33-00464c35 00464c79-00464c7b
 */

void __cdecl FUN_00464c10(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x18 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_index_active_pat_005a6a48);
  }
  iVar1 = FUN_004641a0(*(int *)(&DAT_00709b34 + param_1 * 0x28));
  iVar1 = (&DAT_00709f10)[iVar1 * 0xd0];
  if ((-1 < iVar1) && (iVar1 < 0x16)) {
    if (*(code **)(&DAT_005a64d4 + iVar1 * 0x14) != (code *)0x0) {
      (**(code **)(&DAT_005a64d4 + iVar1 * 0x14))(&DAT_00709b1c + param_1 * 0x28);
    }
    (&DAT_00709b18)[param_1 * 10] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Incorrect_path_type___d_005a6a9c);
}


