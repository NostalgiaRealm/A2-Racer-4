
/* ==== FUN_00448330 @ 00448330 ==== 
 * signature: undefined __cdecl FUN_00448330(int param_1)
 * body: 00448330-0044835d;00448361-00448396
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044835e-00448360
 */

void __cdecl FUN_00448330(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f4 + iVar1 * 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Timer_not_initted__index_0059ec04);
  }
  iVar1 = FUN_00448290(param_1);
  if (*(int *)(&DAT_006fa3f8 + iVar1 * 0x14) == 0) {
    DVar2 = GetTickCount();
    iVar1 = FUN_00448290(param_1);
    *(DWORD *)(&DAT_006fa3f8 + iVar1 * 0x14) = DVar2;
  }
  return;
}


