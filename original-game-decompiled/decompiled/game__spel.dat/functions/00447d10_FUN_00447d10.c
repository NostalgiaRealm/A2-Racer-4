
/* ==== FUN_00447d10 @ 00447d10 ==== 
 * signature: undefined __stdcall FUN_00447d10(void)
 * body: 00447d10-00447d8d
 */

void FUN_00447d10(void)

{
  char *pcVar1;
  
  switch(DAT_0059db38) {
  case 0:
  case 1:
  case 2:
  case 5:
    FUN_004cab50(s_Pallow_pcx_0059db8c,1);
    pcVar1 = s_loading_lowres_pallet__s_0059e8e8;
    break;
  case 3:
  case 4:
    FUN_004cab50(s_Palhigh_pcx_0059db9c,1);
    pcVar1 = s_loading_hires_pallet__s_0059e904;
    break;
  default:
    goto switchD_00447d1a_default;
  }
  FUN_004c3fa0((byte *)pcVar1);
switchD_00447d1a_default:
  FUN_004c3fa0((byte *)s_Locking_Pallette_0059e920);
  FUN_004c9e70(DAT_007409f0,0,0xff);
  FUN_004c9ff0(DAT_007409f0,0,0xff,0x40,1);
  return;
}


