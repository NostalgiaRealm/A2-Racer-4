
/* ==== FUN_004b43d0 @ 004b43d0 ==== 
 * signature: undefined __stdcall FUN_004b43d0(void)
 * body: 004b43d0-004b44b5
 */

void FUN_004b43d0(void)

{
  LPVOID pvVar1;
  
  DAT_0073b0dc = 0;
  _strncpy(&DAT_0073b0e4,s__d3d_objects_005b0eac,0x19);
  _strncpy(&DAT_0073b0fd,s_c_3dobject_005b0ea0,0x19);
  if (DAT_0073b0dc != 0) {
    if (DAT_0073b0dc == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_0073b0d0 != 0) {
        pvVar1 = (LPVOID)(DAT_0073b0d0 + -4);
        FUN_005586c5(DAT_0073b0d0,0xa9,*(int *)(DAT_0073b0d0 + -4),FUN_0051ed40);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_0073b0dc != 0) {
      FUN_0054b339(DAT_0073b0e0);
      DAT_0073b0dc = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b0d0 = 0;
  DAT_0073b0d4 = 0;
  DAT_0073b0d8 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b0e0 = (LPVOID)0x0;
  DAT_0073b0dc = 0;
  return;
}


