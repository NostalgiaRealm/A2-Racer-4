
/* ==== FUN_004c6bd0 @ 004c6bd0 ==== 
 * signature: bool __cdecl FUN_004c6bd0(int param_1)
 * body: 004c6bd0-004c6c04;004c6c08-004c6c50;004c6c54-004c6c62
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6c05-004c6c07 004c6c51-004c6c53
 */

bool __cdecl FUN_004c6bd0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte unaff_SI;
  
  if (DAT_00740950 == 0) {
    return false;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____illegal_sound_buffer_in_005b5020);
  }
  iVar2 = DAT_00740934 + param_1 * 0x44;
  if (*(int *)(iVar2 + 0x30) == 0) {
    return false;
  }
  piVar1 = *(int **)(iVar2 + 0x28);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1);
  if (iVar2 != 0) {
    FUN_004c65b0(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____getting_sound_status_fa_005b4ff0);
  }
  return (bool)('\x01' - ((unaff_SI & 1) != 1));
}


