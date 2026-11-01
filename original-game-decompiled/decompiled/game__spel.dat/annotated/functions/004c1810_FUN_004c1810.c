
/* ==== FUN_004c1810 @ 004c1810 ==== 
 * signature: undefined __stdcall FUN_004c1810(void)
 * body: 004c1810-004c18d7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1810(void)

{
  DAT_0073b79c = 0;
  _strncpy(&DAT_0073b7a4,s_draw_order_005b2fac,0x19);
  _strncpy(&DAT_0073b7bd,s_draw_info_t_005b2fa0,0x19);
  if (DAT_0073b79c != 0) {
    if (DAT_0073b79c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b790);
    }
    if (DAT_0073b79c != 0) {
      FUN_0054b339(DAT_0073b7a0);
      DAT_0073b79c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b790 = (LPVOID)0x0;
  DAT_0073b794 = 0;
  _DAT_0073b798 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b7a0 = (LPVOID)0x0;
  DAT_0073b79c = 0;
  return;
}


