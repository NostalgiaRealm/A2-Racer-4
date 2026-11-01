
/* ==== FUN_004b86c0 @ 004b86c0 ==== 
 * signature: undefined __stdcall FUN_004b86c0(void)
 * body: 004b86c0-004b87a2
 */

void FUN_004b86c0(void)

{
  LPVOID pvVar1;
  
  DAT_0073b1bc = 0;
  _strncpy(&DAT_0073b1c4,s_c_texture_005b14b4,0x19);
  _strncpy(&DAT_0073b1dd,s__d3d_texture_ptr_005b14a0,0x19);
  if (DAT_0073b1bc != 0) {
    if (DAT_0073b1bc == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_0073b1b0 != 0) {
        pvVar1 = (LPVOID)(DAT_0073b1b0 + -4);
        FUN_005586c5(DAT_0073b1b0,0x48,*(int *)(DAT_0073b1b0 + -4),FUN_004b9670);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_0073b1bc != 0) {
      FUN_0054b339(DAT_0073b1c0);
      DAT_0073b1bc = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b1b0 = 0;
  DAT_0073b1b4 = 0;
  DAT_0073b1b8 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b1c0 = (LPVOID)0x0;
  DAT_0073b1bc = 0;
  return;
}


