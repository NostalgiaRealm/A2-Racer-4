
/* ==== FUN_004a99a0 @ 004a99a0 ==== 
 * signature: undefined __cdecl FUN_004a99a0(int param_1, int param_2)
 * body: 004a99a0-004a9a16
 */

void __cdecl FUN_004a99a0(int param_1,int param_2)

{
  DAT_00715e9c = 0;
  DAT_00715ea0 = 0;
  if (DAT_007152ec == 0) {
    FUN_004c3fa0((byte *)s_drawing_object_textured_005affac);
    FUN_004a9c20(param_1,param_2);
  }
  else {
    FUN_004c3fa0((byte *)s_drawing_normal_005aff9c);
    FUN_004a9a20(param_1,param_2);
  }
  FUN_004a74f0(&DAT_00715b28);
  FUN_004c3fa0((byte *)s_Ready_drawing_005aff8c);
  return;
}


