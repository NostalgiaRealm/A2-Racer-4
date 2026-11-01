
/* ==== FUN_004b0860 @ 004b0860 ==== 
 * signature: undefined __stdcall FUN_004b0860(void)
 * body: 004b0860-004b094f
 */

void FUN_004b0860(void)

{
  LPVOID pvVar1;
  
  DAT_00719b5c = 0;
  _strncpy(&DAT_00719b64,s_cameras_005b07c4,0x19);
  _strncpy(&DAT_00719b7d,s_c_camera_005b07b8,0x19);
  if (DAT_00719b5c != 0) {
    if (DAT_00719b5c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_00719b50 != 0) {
        pvVar1 = (LPVOID)(DAT_00719b50 + -4);
        FUN_005586c5(DAT_00719b50,0x178,*(int *)(DAT_00719b50 + -4),FUN_004b0e80);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_00719b5c != 0) {
      FUN_0054b339(DAT_00719b60);
      DAT_00719b5c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00719b50 = 0;
  DAT_00719b54 = 0;
  DAT_00719b58 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_00719b60 = (LPVOID)0x0;
  DAT_00719b5c = 0;
  FUN_005584e0(0x4b0950);
  return;
}


