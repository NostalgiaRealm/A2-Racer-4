
/* ==== FUN_004482c0 @ 004482c0 ==== 
 * signature: undefined __cdecl FUN_004482c0(int param_1)
 * body: 004482c0-004482ee;004482f2-00448323
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004482ef-004482f1
 */

void __cdecl FUN_004482c0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Timer_not_initted__index_0059ebbc);
  }
  DVar2 = GetTickCount();
  iVar1 = FUN_00448290(param_1);
  *(DWORD *)(&DAT_006fa3ec + iVar1 * 0x14) = DVar2;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  return;
}


