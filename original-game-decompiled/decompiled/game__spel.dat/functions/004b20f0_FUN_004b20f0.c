
/* ==== FUN_004b20f0 @ 004b20f0 ==== 
 * signature: undefined __stdcall FUN_004b20f0(void)
 * body: 004b20f0-004b21c1
 */

void FUN_004b20f0(void)

{
  DAT_00719c34 = 0;
  _strncpy(&DAT_00719c3c,s_c_damage__005b0c2c,0x19);
  _strncpy(&DAT_00719c55,s_g_damages_005b0c20,0x19);
  if (DAT_00719c34 != 0) {
    if (DAT_00719c34 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_00719c28);
    }
    if (DAT_00719c34 != 0) {
      FUN_0054b339(DAT_00719c38);
      DAT_00719c34 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00719c28 = (LPVOID)0x0;
  DAT_00719c2c = 0;
  DAT_00719c30 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_00719c38 = (LPVOID)0x0;
  DAT_00719c34 = 0;
  FUN_005584e0(0x4b21d0);
  return;
}


