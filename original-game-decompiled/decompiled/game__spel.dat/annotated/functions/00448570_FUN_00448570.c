
/* ==== FUN_00448570 @ 00448570 ==== 
 * signature: undefined __cdecl FUN_00448570(int param_1, int param_2)
 * body: 00448570-004485a1;004485a5-004485c1;004485c5-00448608
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004485a2-004485a4 004485c2-004485c4
 */

void __cdecl FUN_00448570(int param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Timer_not_initted__index_0059ecdc);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_value_for_timer__0059ed24);
  }
  iVar1 = FUN_00448290(param_1);
  *(int *)(&DAT_006fa3e8 + iVar1 * 0x14) = param_2;
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) != -1) {
    DVar2 = GetTickCount();
    iVar1 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3ec + iVar1 * 0x14) = DVar2;
  }
  return;
}


