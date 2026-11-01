
/* ==== FUN_00458730 @ 00458730 ==== 
 * signature: undefined4 __cdecl FUN_00458730(int param_1)
 * body: 00458730-0045876b;0045876f-004587aa;004587ae-004587c8;004587cc-004587f9;004587fd-0045880e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045876c-0045876e 004587ab-004587ad 004587c9-004587cb 004587fa-004587fc
 */

undefined4 __cdecl FUN_00458730(int param_1)

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
    FUN_004c4150((byte *)s_Could_not_open__s_005a4b04);
  }
  bVar3 = 0;
  pbVar1 = FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4b18);
  iVar2 = FUN_0055926e((LPCSTR)pbVar1,bVar3);
  if (iVar2 == -1) {
    FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4b20);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_Could_not_open__s_005a4b28);
  }
  iVar2 = FUN_004caa50((int *)&DAT_005a4830);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_not_enough_memory_for_animations_005a4b3c);
  }
  pbVar1 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4b60);
  iVar2 = FUN_004cc580((LPCSTR)pbVar1,param_1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_Not_enough_memory_for_animation_d_005a4b68);
  }
  FUN_004ce360();
  DAT_006fd130 = 1;
  return 0;
}


