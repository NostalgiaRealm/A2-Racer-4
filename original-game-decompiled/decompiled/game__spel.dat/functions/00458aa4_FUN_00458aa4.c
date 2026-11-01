
/* ==== FUN_00458aa4 @ 00458aa4 ==== 
 * signature: undefined4 __stdcall FUN_00458aa4(void)
 * body: 00458aa4-00458acc;00458ad0-00458b3d
 */

undefined4 FUN_00458aa4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_006fd130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____please_call_init_anims___005a4dc4);
  }
  FUN_004cc520(&DAT_00741430);
  FUN_004ce360();
  FUN_004ce3e0(0x5a4830,(int *)&DAT_005a4804);
  piVar4 = &DAT_00741430;
  pbVar1 = FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4df0);
  pbVar2 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4df8);
  iVar3 = FUN_004cc0b0((LPCSTR)pbVar2,(LPCSTR)pbVar1,piVar4);
  if (iVar3 != 0) {
    FUN_004cc520(&DAT_00741430);
    return 2000;
  }
  return 0;
}


