
/* ==== FUN_004ceed0 @ 004ceed0 ==== 
 * signature: int __cdecl FUN_004ceed0(int param_1)
 * body: 004ceed0-004cef0f;004cef16-004cef18
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cef10-004cef15
 */

int __cdecl FUN_004ceed0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(DAT_0074b358 + 8);
  iVar3 = DAT_0074b358;
  while( true ) {
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____get_control_index__win_005b6ea4);
    }
    if (*(int *)(iVar3 + 0x18) == param_1) break;
    iVar1 = *(int *)(iVar3 + 0x24);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


