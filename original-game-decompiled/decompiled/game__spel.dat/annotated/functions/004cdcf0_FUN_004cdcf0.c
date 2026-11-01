
/* ==== FUN_004cdcf0 @ 004cdcf0 ==== 
 * signature: char * __cdecl FUN_004cdcf0(int param_1)
 * body: 004cdcf0-004cdd4e
 */

char * __cdecl FUN_004cdcf0(int param_1)

{
  if (param_1 < 0x401) {
    if (param_1 == 0x400) {
      return s_invalid_audio_line_005b67c4;
    }
    switch(param_1) {
    case 2:
      return s_invalid_mixer_devive_id__mixerob_005b68dc;
    case 4:
      return s_The_specified_resource_is_alread_005b67f8;
    case 5:
      return s_invalid_mixer_object_handle_005b68a0;
    case 6:
      return s_no_driver_available_for_this_mix_005b6850;
    case 7:
      return s_Unable_to_allocate_resources__005b67d8;
    case 10:
      return s_one_or_more_flags_are_invalid_005b68bc;
    case 0xb:
      return s_one_or_more_parameters_are_inval_005b687c;
    }
  }
  else if (param_1 == 0x401) {
    return s_Pthe_control_reference_is_invali_005b677b + 1;
  }
  return s_unknown_error_or_warning_by_Win9_005b67a0;
}


