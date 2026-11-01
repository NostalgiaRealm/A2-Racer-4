
/* ==== FUN_004aa860 @ 004aa860 ==== 
 * signature: undefined __stdcall FUN_004aa860(void)
 * body: 004aa860-004aa94c
 */

void FUN_004aa860(void)

{
  LPVOID pvVar1;
  
  DAT_00715ec4 = 0;
  _strncpy(&DAT_00715ecc,s_g_driver_map_005b0074,0x19);
  _strncpy(&DAT_00715ee5,s_c_waypoint_005b0068,0x19);
  if (DAT_00715ec4 != 0) {
    if (DAT_00715ec4 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_00715eb8 != 0) {
        pvVar1 = (LPVOID)(DAT_00715eb8 + -4);
        FUN_005586c5(DAT_00715eb8,0x50,*(int *)(DAT_00715eb8 + -4),FUN_0051ed40);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_00715ec4 != 0) {
      FUN_0054b339(DAT_00715ec8);
      DAT_00715ec4 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00715eb8 = 0;
  DAT_00715ebc = 0;
  DAT_00715ec0 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_00715ec8 = (LPVOID)0x0;
  DAT_00715ec4 = 0;
  FUN_005584e0(0x4aa950);
  return;
}


