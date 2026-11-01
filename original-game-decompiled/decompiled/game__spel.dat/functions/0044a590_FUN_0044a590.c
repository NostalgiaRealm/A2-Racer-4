
/* ==== FUN_0044a590 @ 0044a590 ==== 
 * signature: undefined __stdcall FUN_0044a590(void)
 * body: 0044a590-0044a5d5
 */

void FUN_0044a590(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_resize_texture_onoff_005a0338);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0354);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb8a8 = FUN_004c3cd0(s_OPTIONS_005a0374,s_RESIZETEXTURE_005a0364);
  return;
}


