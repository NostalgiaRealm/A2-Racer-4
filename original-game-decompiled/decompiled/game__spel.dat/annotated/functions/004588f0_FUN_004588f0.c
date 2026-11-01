
/* ==== FUN_004588f0 @ 004588f0 ==== 
 * signature: undefined4 __stdcall FUN_004588f0(void)
 * body: 004588f0-0045890c;00458910-0045897d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045890d-0045890f
 */

undefined4 FUN_004588f0(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_006fd130 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____please_call_init_anims___005a4c64);
  }
  FUN_004cc520(&DAT_00741430);
  FUN_004ce360();
  FUN_004ce3e0(0x5a4830,(int *)&DAT_005a47a0);
  piVar4 = &DAT_00741430;
  pbVar1 = FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4c90);
  pbVar2 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4c98);
  iVar3 = FUN_004cc0b0((LPCSTR)pbVar2,(LPCSTR)pbVar1,piVar4);
  if (iVar3 != 0) {
    FUN_004cc520(&DAT_00741430);
    return 2000;
  }
  return 0;
}


