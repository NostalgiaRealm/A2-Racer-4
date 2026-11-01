
/* ==== FUN_004b61a0 @ 004b61a0 ==== 
 * signature: undefined __stdcall FUN_004b61a0(void)
 * body: 004b61a0-004b6267
 */

void FUN_004b61a0(void)

{
  DAT_0073b12c = 0;
  _strncpy(&DAT_0073b134,s_frame3d_ptr_005b10ac,0x19);
  _strncpy(&DAT_0073b14d,s_frame3d_t_005b10a0,0x19);
  if (DAT_0073b12c != 0) {
    if (DAT_0073b12c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b120);
    }
    if (DAT_0073b12c != 0) {
      FUN_0054b339(DAT_0073b130);
      DAT_0073b12c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b120 = (LPVOID)0x0;
  DAT_0073b124 = 0;
  DAT_0073b128 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b130 = (LPVOID)0x0;
  DAT_0073b12c = 0;
  return;
}


