
/* ==== FUN_004c6b90 @ 004c6b90 ==== 
 * signature: undefined4 __cdecl FUN_004c6b90(undefined4 param_1)
 * body: 004c6b90-004c6bc3;004c6bc7-004c6bcb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6bc4-004c6bc6
 */

undefined4 __cdecl FUN_004c6b90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_1;
  iVar1 = (**(code **)(*DAT_00740924 + 0x14))(DAT_00740924,param_1,&param_1);
  if (iVar1 != 0) {
    FUN_004c65b0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_duplicating_sound_005b4fc0);
  }
  return uVar2;
}


