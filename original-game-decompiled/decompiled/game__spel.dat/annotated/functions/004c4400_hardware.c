
/* ==== hardware @ 004c4400 ==== 
 * signature: char * __cdecl hardware(int param_1)
 * body: 004c4400-004c458f
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(hardware) flipping of visible surfaces is not supported']
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(hardware) flipping of visible surfaces is not supported'] */

char * __cdecl hardware(int param_1)

{
  if (param_1 < -0x7789fe51) {
    if (param_1 == -0x7789fe52) {
      return s_access_to_surface_denied_by_othe_005b3e74;
    }
    if (param_1 < -0x7789ff5f) {
      if (param_1 == -0x7789ff60) {
        return s_one_or_more_surfaces_of_the_dd_o_005b406c;
      }
      if (param_1 < -0x7789ffa0) {
        if (param_1 == -0x7789ffa1) {
          return s_primary_surface_creation_request_005b4124;
        }
        if (param_1 < -0x7ff8fff1) {
          if (param_1 == -0x7ff8fff2) {
            return s_application_out_of_free_memory_005b4194;
          }
          if (param_1 == -0x7fffbfff) {
            return s_operation_is_not_supported_005b41b4;
          }
          if (param_1 == -0x7fffbffb) {
            return s_undefined_error_condition_005b41d0;
          }
        }
        else if (param_1 == -0x7ff8ffa9) {
          return s_one_or_more_invalid_parameters_005b4174;
        }
      }
      else {
        switch(param_1) {
        case -0x7789ff9c:
          return s_one_or_more_of_the_capability_bi_005b40f0;
        case -0x7789ff88:
          return s_screen_mode_not_supported_005b40d4;
        case -0x7789ff7e:
          return s_pointer_is_not_a_dd_object_005b40b8;
        case -0x7789ff6f:
          return s_pixel_format_is_invalid_005b40a0;
        }
      }
    }
    else {
      switch(param_1) {
      case -0x7789ff4c:
        return s_hardware_does_not_support_alpha_a_005b3ff0;
      case -0x7789ff2c:
        return s_the_setcooperativelevel_must_be_c_005b3fa4;
      case -0x7789ff1f:
        return s_exclusive_mode_necessary_for_thi_005b3f78;
      case -0x7789ff1a:
        return s__hardware__flipping_of_visible_s_005b3f3c;
      case -0x7789fec0:
        return s_surface_does_not_use_an_8_bit_pa_005b4020;
      case -0x7789feac:
        return s__hardware__no_hardware_support_f_005b3f00;
      case -0x7789fe98:
        return s_hardware_needed_for_this_operati_005b3ec0;
      case -0x7789fe84:
        return s_application_out_of_video_memory_005b3ea0;
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7789fe3e:
      return s_access_to_surface_denied_because_005b3b0c;
    case -0x7789fde4:
      return s_previous_blit_is_still_in_progre_005b3ab8;
    case -0x7789fdcf:
      return s_direct_draw_invalid_gui_id_005b3d00;
    case -0x7789fdce:
      return s_direct_draw_object_already_creat_005b3e50;
    case -0x7789fdcd:
      return s_hardware_only_dd_objects_not_all_005b3c88;
    case -0x7789fdcc:
      return s_application_already_created_a_pr_005b3b3c;
    case -0x7789fdcb:
      return s_there_is_no_software_emulation_f_005b3c4c;
    case -0x7789fdc6:
      return s_dd_is_prevented_from_restoring_s_005b3d64;
    case -0x7789fdc5:
      return s_cooperative_level_for_HWND_alrea_005b3dc0;
    case -0x7789fdc4:
      return s_there_was_no_palette_attached_to_005b3be0;
    case -0x7789fdc3:
      return s_there_is_no_hardware_support_for_005b3ba4;
    case -0x7789fdbb:
      return s_exclusive_mode_was_already_set_005b3e30;
    case -0x7789fdb5:
      return s_surface_was_created_in_different_005b3a90;
    case -0x7789fdb4:
      return s_this_surface_was_implicitly_crea_005b3d1c;
    case -0x7789fdb3:
      return s_the_surface_being_used_is_not_a_p_005b3b6c;
    case -0x7789fdb2:
      return s_display_is_currently_in_an_unsup_005b3adc;
    case -0x7789fdb1:
      return s__hardware__no_mipmap_texture_map_005b3c10;
    case -0x7789fdb0:
      return s_surface_type_incompatible_with_o_005b3cd4;
    }
  }
  return s_unidentified_error_005b3a7c;
}


