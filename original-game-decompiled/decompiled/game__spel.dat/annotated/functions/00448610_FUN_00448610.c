
/* ==== FUN_00448610 @ 00448610 ==== 
 * signature: undefined __cdecl FUN_00448610(int param_1, int param_2, undefined4 param_3)
 * body: 00448610-0044862e;00448632-0044869b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044862f-00448631
 */

void __cdecl FUN_00448610(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_value_for_timer__0059ed74);
  }
  iVar1 = FUN_00448290(param_1);
  *(int *)(&DAT_006fa3e8 + iVar1 * 0x14) = param_2;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f0 + iVar1 * 0x14) = param_3;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3ec + iVar1 * 0x14) = 0xffffffff;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f8 + iVar1 * 0x14) = 0;
  iVar1 = FUN_00448290(param_1);
  *(undefined4 *)(&DAT_006fa3f4 + iVar1 * 0x14) = 1;
  return;
}


