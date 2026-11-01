
/* ==== FUN_0044bad0 @ 0044bad0 ==== 
 * signature: undefined __stdcall FUN_0044bad0(void)
 * body: 0044bad0-0044bbc1
 */

void FUN_0044bad0(void)

{
  FUN_004b4550(0);
  FUN_004bc810(1000);
  FUN_004b2230(1000);
  FUN_004c3fa0((byte *)s_Initing_textures__d_005a11b0);
  if (DAT_006fb8d0 == 0) {
    FUN_004b88a0(6.0);
    FUN_004b82e0(&DAT_00712130,1);
  }
  FUN_004b8b80(100);
  FUN_004c3fa0((byte *)s_loading_background_pic_005a11c8);
  if (DAT_006fb8d0 == 0) {
    FUN_004b8910(s_init_pcx_005a11e0);
    if (DAT_006fb8d0 == 0) goto LAB_0044bb89;
  }
  if (DAT_006fb93c != 0) {
    FUN_004c7ed0(0);
    if (DAT_006fb93c != 0) {
      FUN_004c7ed0(1);
    }
  }
  FUN_004b8840(1);
  FUN_004c4030(0x7f00ff);
LAB_0044bb89:
  FUN_00447d10();
  if (DAT_006fb8a8 != 0) {
    FUN_004b8880(1);
  }
  FUN_004c3fa0((byte *)s_Initing_objects__d_005a11ec);
  FUN_004b4560(0x9c4);
  FUN_0044baa0();
  return;
}


