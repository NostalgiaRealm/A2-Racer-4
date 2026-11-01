
/* ==== FUN_004c3640 @ 004c3640 ==== 
 * signature: undefined __stdcall FUN_004c3640(void)
 * body: 004c3640-004c3707
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3640(void)

{
  DAT_0073b84c = 0;
  _strncpy(&DAT_0073b854,s_vertex_ptr_005b344c,0x19);
  _strncpy(&DAT_0073b86d,s_vertex_t_005b3440,0x19);
  if (DAT_0073b84c != 0) {
    if (DAT_0073b84c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b840);
    }
    if (DAT_0073b84c != 0) {
      FUN_0054b339(DAT_0073b850);
      DAT_0073b84c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b840 = (LPVOID)0x0;
  DAT_0073b844 = 0;
  _DAT_0073b848 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b850 = (LPVOID)0x0;
  DAT_0073b84c = 0;
  return;
}


