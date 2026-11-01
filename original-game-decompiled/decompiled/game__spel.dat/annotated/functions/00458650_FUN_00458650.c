
/* ==== FUN_00458650 @ 00458650 ==== 
 * signature: undefined4 __stdcall FUN_00458650(void)
 * body: 00458650-0045868b;0045868f-004586ca;004586ce-004586e8;004586ec-00458716;0045871a-0045872b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045868c-0045868e 004586cb-004586cd 004586e9-004586eb 00458717-00458719
 */

undefined4 FUN_00458650(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  pbVar1 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4a58);
  iVar2 = FUN_0055926e((LPCSTR)pbVar1,bVar3);
  if (iVar2 == -1) {
    FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4a60);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Could_not_open__s_005a4a68);
  }
  bVar3 = 0;
  pbVar1 = FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4a7c);
  iVar2 = FUN_0055926e((LPCSTR)pbVar1,bVar3);
  if (iVar2 == -1) {
    FUN_004cd4a0(&DAT_006fcfa0,(byte *)s_rc_ind_005a4a84);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Could_not_open__s_005a4a8c);
  }
  iVar2 = FUN_004caa50((int *)&DAT_005a4830);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_not_enough_memory_for_animations_005a4aa0);
  }
  iVar2 = 4;
  pbVar1 = FUN_004cd4a0(&DAT_006fd068,(byte *)s_rc_img_005a4ac4);
  iVar2 = FUN_004cc580((LPCSTR)pbVar1,iVar2);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Not_enough_memory_for_animation_d_005a4acc);
  }
  FUN_004ce360();
  DAT_006fd130 = 1;
  return 0;
}


