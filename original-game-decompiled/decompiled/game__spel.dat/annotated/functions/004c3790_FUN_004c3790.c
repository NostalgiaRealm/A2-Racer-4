
/* ==== FUN_004c3790 @ 004c3790 ==== 
 * signature: undefined __stdcall FUN_004c3790(void)
 * body: 004c3790-004c3857
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3790(void)

{
  DAT_0073b894 = 0;
  _strncpy(&DAT_0073b89c,s_light_ptr_005b3460,0x19);
  _strncpy(&DAT_0073b8b5,s_light_t_005b3458,0x19);
  if (DAT_0073b894 != 0) {
    if (DAT_0073b894 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b888);
    }
    if (DAT_0073b894 != 0) {
      FUN_0054b339(DAT_0073b898);
      DAT_0073b894 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b888 = (LPVOID)0x0;
  DAT_0073b88c = 0;
  _DAT_0073b890 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b898 = (LPVOID)0x0;
  DAT_0073b894 = 0;
  return;
}


