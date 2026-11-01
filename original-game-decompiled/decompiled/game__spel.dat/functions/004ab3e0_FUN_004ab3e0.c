
/* ==== FUN_004ab3e0 @ 004ab3e0 ==== 
 * signature: undefined __stdcall FUN_004ab3e0(void)
 * body: 004ab3e0-004ab4cf
 */

void FUN_004ab3e0(void)

{
  LPVOID pvVar1;
  
  DAT_00715f0c = 0;
  _strncpy(&DAT_00715f14,s_g_chunks_005b0338,0x19);
  _strncpy(&DAT_00715f2d,s_c_chunk_005b0330,0x19);
  if (DAT_00715f0c != 0) {
    if (DAT_00715f0c == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      if (DAT_00715f00 != 0) {
        pvVar1 = (LPVOID)(DAT_00715f00 + -4);
        FUN_005586c5(DAT_00715f00,0x994,*(int *)(DAT_00715f00 + -4),FUN_004ab690);
        FUN_0054b339(pvVar1);
      }
    }
    if (DAT_00715f0c != 0) {
      FUN_0054b339(DAT_00715f10);
      DAT_00715f0c = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00715f00 = 0;
  DAT_00715f04 = 0;
  DAT_00715f08 = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  DAT_00715f10 = (LPVOID)0x0;
  DAT_00715f0c = 0;
  FUN_005584e0(0x4ab4d0);
  return;
}


