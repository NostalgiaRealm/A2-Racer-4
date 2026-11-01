
/* ==== FUN_00404ce0 @ 00404ce0 ==== 
 * signature: ulonglong __cdecl FUN_00404ce0(int param_1)
 * body: 00404ce0-00404d04;00404d08-00404d51
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404d05-00404d07
 */

ulonglong __cdecl FUN_00404ce0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = *(int *)(&DAT_005cea34 + param_1 * 0x294);
    iVar2 = *(int *)(iVar1 * 0xf0 + 0x3c + DAT_00715e50);
    bVar3 = FUN_00404820(param_1);
    uVar4 = CONCAT44(extraout_EDX,CONCAT31(extraout_var,bVar3));
    if (CONCAT31(extraout_var,bVar3) == 0) {
      uVar4 = FUN_00419120(iVar1,iVar2);
      if ((int)uVar4 == 1) {
        return uVar4;
      }
    }
    return uVar4 & 0xffffffff00000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f5e8);
}


