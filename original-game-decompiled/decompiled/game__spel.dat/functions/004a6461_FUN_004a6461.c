
/* ==== FUN_004a6461 @ 004a6461 ==== 
 * signature: undefined __stdcall FUN_004a6461(void)
 * body: 004a6461-004a646f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6461(void)

{
  int iVar1;
  int iVar2;
  
  DAT_00712874 = 0;
  _strncpy(&DAT_0071287c,s_g_elapsed_buffer_005af6e0,0x19);
  _strncpy(&DAT_00712895,s_float_005af6d8,0x19);
  if (DAT_00712874 != 0) {
    if (DAT_00712874 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_00712868);
    }
    if (DAT_00712874 != 0) {
      FUN_0054b339(DAT_00712878);
      DAT_00712874 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  DAT_00712868 = operator_new(0x10);
  DAT_0071286c = 4;
  _DAT_00712870 = 0;
  DAT_00712878 = operator_new(4);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_00712874 = 1;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)((int)DAT_00712878 + iVar1) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  FUN_005584e0(0x4a6580);
  return;
}


