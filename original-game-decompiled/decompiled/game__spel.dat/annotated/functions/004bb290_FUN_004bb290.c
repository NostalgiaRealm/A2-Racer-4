
/* ==== FUN_004bb290 @ 004bb290 ==== 
 * signature: char * __cdecl FUN_004bb290(int param_1)
 * body: 004bb290-004bb3f3
 */

char * __cdecl FUN_004bb290(int param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case -0x7789fd44:
    return s_Bad_major_version_005b215c;
  case -0x7789fd43:
    return s_Bad_minor_version_005b2148;
  default:
    pcVar1 = hardware(param_1);
    return pcVar1;
  case -0x7789fd3f:
    return s_D3DERR_INVALID_DEVICE_005b1e28;
  case -0x7789fd3e:
    return s_D3DERR_INITFAILED_005b1e50;
  case -0x7789fd3d:
    return s_D3DERR_DEVICEAGGREGATED_005b1e64;
  case -0x7789fd3a:
    return s_create_execute_failed_005b2118;
  case -0x7789fd39:
    return s_destroy_execute_failed_005b2100;
  case -0x7789fd38:
    return s_execute_lock_failed_005b20dc;
  case -0x7789fd37:
    return s_execute_unlock_failed_005b20a0;
  case -0x7789fd36:
    return s_execute_locked_005b20cc;
  case -0x7789fd35:
    return s_execute_not_locked_005b20b8;
  case -0x7789fd34:
    return s_execute_failed_005b20f0;
  case -0x7789fd33:
    return s_clipped_execute_failed_005b2130;
  case -0x7789fd30:
    return s_No_texture_support_005b1ebc;
  case -0x7789fd2f:
    return s_Create_texture_failed_005b1f3c;
  case -0x7789fd2e:
    return s_Destroy_texture_failed_005b1f24;
  case -0x7789fd2d:
    return s_Texture_lock_failed_005b1ee0;
  case -0x7789fd2c:
    return s_Texture_unlock_failed_005b1e7c;
  case -0x7789fd2b:
    return s_Texture_load_failed_005b1ef4;
  case -0x7789fd2a:
    return s_Texture_swap_failed_005b1e94;
  case -0x7789fd29:
    return s_Texture_locked_005b1ed0;
  case -0x7789fd28:
    return s_Texture_not_locked_005b1ea8;
  case -0x7789fd27:
    return s_Get_texture_surface_failed_005b1f08;
  case -0x7789fd26:
    return s_Matrix_create_failed_005b200c;
  case -0x7789fd25:
    return s_Matrix_destroy_failed_005b1ff4;
  case -0x7789fd24:
    return s_Matrix_set_data_failed_005b1fc4;
  case -0x7789fd23:
    return s_Matrix_get_data_failed_005b1fdc;
  case -0x7789fd22:
    return s_Set_viewport_failed_005b1f54;
  case -0x7789fd21:
    return s_D3DERR_INVALIDCURRENTVIEWPORT_005b1e08;
  case -0x7789fd20:
    return s_D3DERR_INVALIDPRIMITIVETYPE_005b1dd4;
  case -0x7789fd1f:
    return s_D3DERR_INVALIDVERTEXTYPE_005b1db8;
  case -0x7789fd1e:
    return s_D3DERR_TEXTURE_BADSIZE_005b1d24;
  case -0x7789fd1c:
    return s_Material_create_failed_005b2074;
  case -0x7789fd1b:
    return s_Material_destroy_failed_005b205c;
  case -0x7789fd1a:
    return s_Material_set_data_failed_005b2024;
  case -0x7789fd19:
    return s_Material_get_data_failed_005b2040;
  case -0x7789fd18:
    return s_D3DERR_INVALIDPALETTE_005b1df0;
  case -0x7789fd17:
    return s_D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY_005b1ccc;
  case -0x7789fd16:
    return s_D3DERR_ZBUFF_NEEDS_VIDEOMEMORY_005b1cac;
  case -0x7789fd15:
    return s_D3DERR_SURFACENOTINVIDMEM_005b1d3c;
  case -0x7789fd12:
    return s_Light_set_failed_005b208c;
  case -0x7789fd11:
    return s_D3DERR_LIGHTHASVIEWPORT_005b1da0;
  case -0x7789fd10:
    return s_D3DERR_LIGHTNOTINTHISVIEWPORT_005b1d80;
  case -0x7789fd08:
    return s_Scene_in_scene_error_005b1f84;
  case -0x7789fd07:
    return s_Scene_not_in_scene_error_005b1f68;
  case -0x7789fd06:
    return s_Scene_begin_failed_005b1fb0;
  case -0x7789fd05:
    return s_Scene_end_failed_005b1f9c;
  case -0x7789fcfe:
    return s_D3DERR_INBEGIN_005b1e40;
  case -0x7789fcfd:
    return s_D3DERR_NOTINBEGIN_005b1d6c;
  case -0x7789fcfc:
    return s_D3DERR_NOVIEWPORTS_005b1d58;
  case -0x7789fcfb:
    return s_D3DERR_VIEWPORTDATANOTSET_005b1d08;
  case -0x7789fcfa:
    return s_D3DERR_VIEWPORTHASNODEVICE_005b1cec;
  }
}


