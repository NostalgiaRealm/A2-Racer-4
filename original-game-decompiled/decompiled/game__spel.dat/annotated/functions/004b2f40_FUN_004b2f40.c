
/* ==== FUN_004b2f40 @ 004b2f40 ==== 
 * signature: undefined __stdcall FUN_004b2f40(void)
 * body: 004b2f40-004b302f
 */

void FUN_004b2f40(void)

{
  LPVOID pvVar1;
  
  DAT_0073b04c = 0;
  _strncpy(&DAT_0073b054,s_g_planes_005b0e18,0x19);
  _strncpy(&DAT_0073b06d,s_c_plane_005b0e10,0x19);
  if (DAT_0073b04c != 0) {
    if (DAT_0073b04c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_0073b040 != 0) {
        pvVar1 = (LPVOID)(DAT_0073b040 + -4);
        FUN_005586c5(DAT_0073b040,0x8c,*(int *)(DAT_0073b040 + -4),FUN_0051ed40);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_0073b04c != 0) {
      FUN_0054b339(DAT_0073b050);
      DAT_0073b04c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b040 = 0;
  DAT_0073b044 = 0;
  DAT_0073b048 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b050 = (LPVOID)0x0;
  DAT_0073b04c = 0;
  FUN_005584e0(0x4b3030);
  return;
}


