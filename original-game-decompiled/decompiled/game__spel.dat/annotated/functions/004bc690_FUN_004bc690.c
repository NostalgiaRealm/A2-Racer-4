
/* ==== FUN_004bc690 @ 004bc690 ==== 
 * signature: undefined __stdcall FUN_004bc690(void)
 * body: 004bc690-004bc775
 */

void FUN_004bc690(void)

{
  LPVOID pvVar1;
  
  DAT_0073b5d4 = 0;
  _strncpy(&DAT_0073b5dc,s_c_mesh_005b2460,0x19);
  _strncpy(&DAT_0073b5f5,s__d3d_mesh_ptr_005b2450,0x19);
  if (DAT_0073b5d4 != 0) {
    if (DAT_0073b5d4 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_0073b5c8 != 0) {
        pvVar1 = (LPVOID)(DAT_0073b5c8 + -4);
        FUN_005586c5(DAT_0073b5c8,0xac,*(int *)(DAT_0073b5c8 + -4),FUN_004bd590);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_0073b5d4 != 0) {
      FUN_0054b339(DAT_0073b5d8);
      DAT_0073b5d4 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_0073b5c8 = 0;
  DAT_0073b5cc = 0;
  DAT_0073b5d0 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_0073b5d8 = (LPVOID)0x0;
  DAT_0073b5d4 = 0;
  return;
}


