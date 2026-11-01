
/* ==== FUN_004483a0 @ 004483a0 ==== 
 * signature: undefined __cdecl FUN_004483a0(int param_1)
 * body: 004483a0-004483d0;004483d4-00448463
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004483d1-004483d3
 */

void __cdecl FUN_004483a0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Timer_not_initted__index_0059ec4c);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) != 0) {
    iVar1 = FUN_00448290(param_1);
    if (*(int *)(&DAT_006fa3ec + iVar1 * 0x14) == -1) {
      iVar1 = FUN_00448290(param_1);
      *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
      return;
    }
    iVar1 = FUN_00448290(param_1);
    DVar2 = GetTickCount();
    iVar1 = *(int *)(&DAT_006fa3f8 + iVar1 * 0x14);
    iVar3 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3ec + iVar3 * 0x14) =
         *(int *)(&DAT_006fa3ec + iVar3 * 0x14) + (DVar2 - iVar1);
    iVar1 = FUN_00448290(param_1);
    *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  }
  return;
}


