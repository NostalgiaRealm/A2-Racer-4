
/* ==== FUN_00449b30 @ 00449b30 ==== 
 * signature: undefined __stdcall FUN_00449b30(void)
 * body: 00449b30-00449ca6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449b30(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059f98c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb904 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9a4,s_clouds_0059f99c);
  DAT_006fb908 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9bc,s_finish_flag_0059f9b0);
  DAT_006fb90c = FUN_004c3cd0(s_GFX_OPTIONS_0059f9d4,s_skidmarks_0059f9c8);
  DAT_006fb910 = FUN_004c3cd0(s_GFX_OPTIONS_0059f9f0,s_fade_skmarks_0059f9e0);
  DAT_006fb918 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa08,s_particles_0059f9fc);
  DAT_006fb91c = FUN_004c3cd0(s_GFX_OPTIONS_0059fa20,s_part_rain_0059fa14);
  DAT_006fb920 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa3c,s_disable_overlay_0059fa2c);
  DAT_006fb924 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa58,s_overlay_detail_0059fa48);
  _DAT_006fb930 = FUN_004c3cd0(s_GFX_OPTIONS_0059fa74,s_object_lights_0059fa64);
  DAT_006fb93c = FUN_004c3cd0(s_GFX_OPTIONS_0059fa88,s_gamma_0059fa80);
  DAT_006fb940 = FUN_004c3cd0(s_GFX_OPTIONS_0059faa4,s_alpha_blending_0059fa94);
  DAT_006fb944 = FUN_004c3cd0(s_GFX_OPTIONS_0059fabc,s_mipmapping_0059fab0);
  DAT_006fb970 = FUN_004c3cd0(s_GFX_OPTIONS_0059fad0,s_radar_0059fac8);
  DAT_006fb978 = FUN_004c3cd0(s_GFX_OPTIONS_0059faf4,s_custom_texture_memory_0059fadc);
  iVar1 = FUN_004c3cd0(s_GFX_OPTIONS_0059fb08,s_drawwp_0059fb00);
  DAT_006fb97d = iVar1 != 0;
  DAT_005ab3c0 = FUN_004c3cd0(s_GFX_OPTIONS_0059fb24,s_OVERLAYELEMENTS_0059fb14);
  _DAT_006fb974 = 0x3ec00000;
  return;
}


