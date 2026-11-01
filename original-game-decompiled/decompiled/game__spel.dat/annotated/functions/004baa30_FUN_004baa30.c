
/* ==== FUN_004baa30 @ 004baa30 ==== 
 * signature: undefined __stdcall FUN_004baa30(void)
 * body: 004baa30-004baaf7
 */

void FUN_004baa30(void)

{
  DAT_0073b21c = 0;
  _strncpy(&DAT_0073b224,s_material_ptr_005b1bbc,0x19);
  _strncpy(&DAT_0073b23d,s_material_t_005b1bb0,0x19);
  if (DAT_0073b21c != 0) {
    if (DAT_0073b21c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b210);
    }
    if (DAT_0073b21c != 0) {
      FUN_0054b339(DAT_0073b220);
      DAT_0073b21c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b210 = (LPVOID)0x0;
  DAT_0073b214 = 0;
  DAT_0073b218 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b220 = (LPVOID)0x0;
  DAT_0073b21c = 0;
  return;
}


