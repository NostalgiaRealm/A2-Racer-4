
/* ==== FUN_004a7321 @ 004a7321 ==== 
 * signature: undefined __stdcall FUN_004a7321(void)
 * body: 004a7321-004a732f
 */

void FUN_004a7321(void)

{
  LPVOID pvVar1;
  
  DAT_00715e5c = 0;
  _strncpy(&DAT_00715e64,s_main_objects_005afab0,0x19);
  _strncpy(&DAT_00715e7d,s_c_obj_main_005afaa4,0x19);
  if (DAT_00715e5c != 0) {
    if (DAT_00715e5c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_00715e50 != 0) {
        pvVar1 = (LPVOID)(DAT_00715e50 + -4);
        FUN_005586c5(DAT_00715e50,0xf0,*(int *)(DAT_00715e50 + -4),FUN_004ab690);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_00715e5c != 0) {
      FUN_0054b339(DAT_00715e60);
      DAT_00715e5c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00715e50 = 0;
  DAT_00715e54 = 0;
  DAT_00715e58 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_00715e60 = (LPVOID)0x0;
  DAT_00715e5c = 0;
  FUN_005584e0(0x4a7420);
  return;
}


