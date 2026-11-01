
/* ==== FUN_004c15f0 @ 004c15f0 ==== 
 * signature: undefined __fastcall FUN_004c15f0(void * param_1)
 * body: 004c15f0-004c17fe
 */

void __fastcall FUN_004c15f0(void *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *pcVar3;
  
  FUN_004c3fa0((byte *)s______Device_description______005b2f80);
  uVar2 = FUN_004c1250((int)param_1);
  if (uVar2 == 0) {
    bVar1 = FUN_004c1030((int)param_1);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      pcVar3 = s_Type___SOFTWARE_RAMP_driver_005b2ed8;
    }
    else {
      pcVar3 = s_Type___HARDWARE_RAMP_driver_005b2f04;
    }
  }
  else {
    bVar1 = FUN_004c1030((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      pcVar3 = s_Type___SOFTWARE_RGB_driver_005b2f30;
    }
    else {
      pcVar3 = s_Type___HARDWARE_RGB_driver_005b2f58;
    }
  }
  FUN_004c3fa0((byte *)pcVar3);
  FUN_004c1310(param_1,0x20);
  FUN_004c1310(param_1,0x18);
  FUN_004c1310(param_1,0x10);
  FUN_004c1310(param_1,8);
  FUN_004c3fa0((byte *)s_Render_bitdepths____s__s__s__s_005b2e94);
  FUN_004c12b0((int)param_1);
  FUN_004c3fa0((byte *)s_Zbuffer_bitdepth____d_bpp_005b2e78);
  FUN_004c3fa0((byte *)s______Light_information______005b2e58);
  FUN_004c1420((int)param_1);
  FUN_004c3fa0((byte *)s_Maximum_lights____d_005b2e40);
  FUN_004c3fa0((byte *)s_Allowed_types___005b2e2c);
  uVar2 = FUN_004c1590((int)param_1);
  if (uVar2 != 0) {
    FUN_004c3fa0(&DAT_005b2e24);
  }
  uVar2 = FUN_004c1530((int)param_1);
  if (uVar2 != 0) {
    FUN_004c3fa0((byte *)s___point_005b2e1c);
  }
  uVar2 = FUN_004c14d0((int)param_1);
  if (uVar2 != 0) {
    FUN_004c3fa0((byte *)s___parallel_005b2e10);
  }
  uVar2 = FUN_004c1470((int)param_1);
  if (uVar2 == 0) {
    pcVar3 = s_lights_005b2df0;
  }
  else {
    pcVar3 = s___directional_lights_005b2df8;
  }
  FUN_004c3fa0((byte *)pcVar3);
  FUN_004c3fa0((byte *)s______Texture_information______005b2dd0);
  uVar2 = FUN_004c1140((int)param_1);
  if (uVar2 != 0) {
    FUN_004c3fa0((byte *)s_Texture_memory___SYSTEM_005b2db4);
  }
  uVar2 = FUN_004c11a0((int)param_1);
  if (uVar2 != 0) {
    FUN_004c3fa0((byte *)s_Texture_memory___VIDEO_005b2d98);
  }
  FUN_004c10c0((int)param_1);
  FUN_004c1040((int)param_1);
  FUN_004c3fa0((byte *)s_Min_texture_size_____d__d__005b2d7c);
  FUN_004c1100((int)param_1);
  FUN_004c1080((int)param_1);
  FUN_004c3fa0((byte *)s_Max_texture_size_____d__d__005b2d60);
  FUN_004c3fa0((byte *)s______Miscellaneous______005b2d44);
  FUN_004c1200((int)param_1);
  FUN_004c3fa0((byte *)s_Clipping____s_005b2d24);
  return;
}


