
/* ==== FUN_0051e8e0 @ 0051e8e0 ==== 
 * signature: undefined __stdcall FUN_0051e8e0(uint param_1, int * param_2)
 * body: 0051e8e0-0051eb26
 */

void FUN_0051e8e0(uint param_1,int *param_2)

{
  int _Value;
  undefined8 uVar1;
  int unaff_retaddr;
  char *pcVar2;
  
  _Value = unaff_retaddr;
  if (DAT_0074c5ec == (int *)0x0) goto LAB_0051eb12;
  if (DAT_0074c70c != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error_while_processing_pre_005be9f0);
    FUN_00559c79(1);
  }
  DAT_0074c70c = 1;
  if (DAT_0074c6bc == 0) {
    uVar1 = FUN_00559348();
    DAT_0074c650 = (int)uVar1 - DAT_0074c650;
  }
  FUN_0051eb30(s_ERRONEOUS_005b9f2c,param_1,0,param_2,0);
  FUN_00558953(DAT_0074c5ec,(byte *)s_While_executing___s____s_005be9d4);
  FUN_00558953(DAT_0074c5ec,(byte *)s_Options_selected_for__s___s_005be9b4);
  if (-1 < DAT_0074c660) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_point_added_to_hull_was_p_d_005be990);
    if (DAT_0074cd50 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_Last_merge_was___d__005be978);
    }
    if (DAT_0074c6bc == 0) {
      if (DAT_0074c6b0 != 0) {
        pcVar2 = s_Qhull_has_started_post_merging__005be928;
        goto LAB_0051e9e9;
      }
    }
    else {
      pcVar2 = s_Qhull_has_finished_constructing_t_005be94c;
LAB_0051e9e9:
      FUN_00558953(DAT_0074c5ec,(byte *)pcVar2);
    }
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
  }
  if ((DAT_0074be4c == 0) || ((DAT_0074c6bc == 0 && ((param_1 != 0 || (param_2 != (int *)0x0)))))) {
    if ((unaff_retaddr != 2) && (DAT_0074c03c + 1 < DAT_0074cd30)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_At_error_exit__005be914);
      FUN_00526a80(DAT_0074c5ec);
      if (DAT_0074bf80 != 0) {
        FUN_00523ee0();
        FUN_005245d0(DAT_0074c5ec);
        FUN_0051e670(DAT_0074c5ec);
      }
    }
    if (DAT_0074bf04 != 0) {
      FUN_005249f0(DAT_0074c5ec,DAT_0074d50c,(int *)0x0);
    }
  }
  else {
    FUN_0052cb70();
  }
  if (unaff_retaddr == 0) {
    _Value = 5;
  }
  else if (unaff_retaddr == 2) {
    FUN_00532210(DAT_0074c5ec);
  }
  else if ((unaff_retaddr == 3) && (DAT_0074bed8 == 0)) {
    FUN_00532130(DAT_0074c5ec);
  }
  if (DAT_0074c69c != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error_while_ending_program_005be8d0);
    FUN_00559c79(1);
    _Value = unaff_retaddr;
  }
LAB_0051eb12:
  DAT_0074c69c = 1;
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)&DAT_0074c514,_Value);
}


