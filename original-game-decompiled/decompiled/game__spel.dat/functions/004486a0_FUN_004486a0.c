
/* ==== FUN_004486a0 @ 004486a0 ==== 
 * signature: bool __cdecl FUN_004486a0(int param_1)
 * body: 004486a0-004486d0;004486d4-00448757
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004486d1-004486d3
 */

bool __cdecl FUN_004486a0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Timer_not_initted__index_0059edc4);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) == -1) {
    return false;
  }
  DVar2 = GetTickCount();
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00448290(param_1);
    iVar1 = DVar2 - *(int *)(&DAT_006fa3f8 + iVar1 * 0x14);
  }
  iVar3 = FUN_00448290(param_1);
  iVar3 = *(int *)(&DAT_006fa3ec + iVar3 * 0x14);
  iVar4 = FUN_00448290(param_1);
  return *(int *)(&DAT_006fa3e8 + iVar4 * 0x14) <= (int)((DVar2 - iVar3) - iVar1);
}


