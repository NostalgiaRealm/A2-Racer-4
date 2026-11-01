
/* ==== FUN_00448470 @ 00448470 ==== 
 * signature: int __cdecl FUN_00448470(int param_1)
 * body: 00448470-004484a1;004484a5-0044856c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004484a2-004484a4
 */

int __cdecl FUN_00448470(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Timer_not_initted__index_0059ec94);
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
  if (*(int *)(&DAT_006fa3ec + iVar3 * 0x14) == -1) {
    iVar1 = 0;
  }
  else {
    iVar3 = FUN_00448290(param_1);
    iVar1 = (DVar2 - *(int *)(&DAT_006fa3ec + iVar3 * 0x14)) - iVar1;
  }
  iVar3 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f0 + iVar3 * 0x14) == 0) {
    iVar3 = FUN_00448290(param_1);
    if (*(int *)(&DAT_006fa3e8 + iVar3 * 0x14) <= iVar1) {
      iVar1 = FUN_00448290(param_1);
      iVar1 = *(int *)(&DAT_006fa3e8 + iVar1 * 0x14);
    }
    return iVar1;
  }
  iVar3 = FUN_00448290(param_1);
  iVar1 = *(int *)(&DAT_006fa3e8 + iVar3 * 0x14) - iVar1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


