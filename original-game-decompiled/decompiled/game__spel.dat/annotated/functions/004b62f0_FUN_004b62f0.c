
/* ==== FUN_004b62f0 @ 004b62f0 ==== 
 * signature: undefined __stdcall FUN_004b62f0(void)
 * body: 004b62f0-004b63b7
 */

void FUN_004b62f0(void)

{
  DAT_0073b174 = 0;
  _strncpy(&DAT_0073b17c,s_anims3d_ptr_005b10c4,0x19);
  _strncpy(&DAT_0073b195,s_anim3d_t_005b10b8,0x19);
  if (DAT_0073b174 != 0) {
    if (DAT_0073b174 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b168);
    }
    if (DAT_0073b174 != 0) {
      FUN_0054b339(DAT_0073b178);
      DAT_0073b174 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b168 = (LPVOID)0x0;
  DAT_0073b16c = 0;
  DAT_0073b170 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b178 = (LPVOID)0x0;
  DAT_0073b174 = 0;
  return;
}


