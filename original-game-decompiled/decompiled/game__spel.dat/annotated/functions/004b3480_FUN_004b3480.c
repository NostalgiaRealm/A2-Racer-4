
/* ==== FUN_004b3480 @ 004b3480 ==== 
 * signature: undefined __stdcall FUN_004b3480(void)
 * body: 004b3480-004b356c
 */

void FUN_004b3480(void)

{
  LPVOID pvVar1;
  
  DAT_0073b094 = 0;
  _strncpy(&DAT_0073b09c,s_g_rails_005b0e2c,0x19);
  _strncpy(&DAT_0073b0b5,s_c_rail_005b0e24,0x19);
  if (DAT_0073b094 != 0) {
    if (DAT_0073b094 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_0073b088 != 0) {
        pvVar1 = (LPVOID)(DAT_0073b088 + -4);
        FUN_005586c5(DAT_0073b088,0x60,*(int *)(DAT_0073b088 + -4),FUN_0051ed40);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_0073b094 != 0) {
      FUN_0054b339(DAT_0073b098);
      DAT_0073b094 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b088 = 0;
  DAT_0073b08c = 0;
  DAT_0073b090 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b098 = (LPVOID)0x0;
  DAT_0073b094 = 0;
  FUN_005584e0(0x4b3570);
  return;
}


