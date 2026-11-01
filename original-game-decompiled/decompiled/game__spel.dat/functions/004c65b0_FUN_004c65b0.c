
/* ==== FUN_004c65b0 @ 004c65b0 ==== 
 * signature: char * __cdecl FUN_004c65b0(int param_1)
 * body: 004c65b0-004c663c
 */

char * __cdecl FUN_004c65b0(int param_1)

{
  if (param_1 < -0x7787ffcd) {
    if (param_1 == -0x7787ffce) {
      return s_this_function_is_not_valid_for_t_005b4d20;
    }
    if (param_1 < -0x7ff8fff1) {
      if (param_1 == -0x7ff8fff2) {
        return s_not_enough_memory_free_for_the_d_005b4ddc;
      }
      if (param_1 == -0x7fffbfff) {
        return s_this_function_is_not_supported_a_005b4e14;
      }
      if (param_1 == -0x7ffbfef0) {
        return s_object_doesn_t_support_aggregati_005b4e40;
      }
    }
    else {
      if (param_1 == -0x7ff8ffa9) {
        return s_invalid_parameters_passed_to_thi_005b4d60;
      }
      if (param_1 == -0x7787fff6) {
        return s_request_failed_because_resources_005b4d8c;
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7787ffba:
      return s_caller_doesn_t_have_the_priority_005b4c94;
    case -0x7787ff9c:
      return s_specified_format_is_not_supporte_005b4cfc;
    case -0x7787ff88:
      return s_no_sound_driver_is_installed_ava_005b4cd4;
    case -0x7787ff56:
      return s_unitialized_error___call_the_ini_005b4c5c;
    }
  }
  return s_error_unidentified_005b4c48;
}


