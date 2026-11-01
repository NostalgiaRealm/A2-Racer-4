
/* ==== FUN_0045872c @ 0045872c ==== 
 * signature: undefined4 __stdcall FUN_0045872c(int param_1)
 * body: 0045872c-0045872f
 */

undefined4 FUN_0045872c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  pbVar1 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4af4);
  iVar2 = FUN_0055926e((LPCSTR)pbVar1,bVar3);
  if (iVar2 == -1) {
    FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4afc);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Could_not_open__s_005a4b04);
  }
  bVar3 = 0;
  pbVar1 = FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4b18);
  iVar2 = FUN_0055926e((LPCSTR)pbVar1,bVar3);
  if (iVar2 == -1) {
    FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4b20);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Could_not_open__s_005a4b28);
  }
  iVar2 = FUN_004caa50((int *)&DAT_005a4830);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_not_enough_memory_for_animations_005a4b3c);
  }
  pbVar1 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4b60);
  iVar2 = FUN_004cc580((LPCSTR)pbVar1,param_1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Not_enough_memory_for_animation_d_005a4b68);
  }
  FUN_004ce360();
  DAT_006fd130 = 1;
  return 0;
}


