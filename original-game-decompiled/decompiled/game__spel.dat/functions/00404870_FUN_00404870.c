
/* ==== FUN_00404870 @ 00404870 ==== 
 * signature: undefined4 __cdecl FUN_00404870(int param_1)
 * body: 00404870-00404892;00404896-00404929
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404893-00404895
 */

undefined4 __cdecl FUN_00404870(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f318);
  }
  iVar3 = param_1 * 0x294;
  iVar1 = FUN_00429360(*(int *)(&DAT_005cea34 + iVar3));
  if (iVar1 != 0) {
    uVar2 = FUN_004a7200(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(*(int *)(&DAT_005cea34 + iVar3) * 0xf0 + 0x34 + DAT_00715e50));
    if (((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 2) &&
       (0.0 < *(float *)(*(int *)(&DAT_005cea34 + iVar3) * 0xf0 + 0xc4 + DAT_00715e50))) {
      return 1;
    }
  }
  return 0;
}


