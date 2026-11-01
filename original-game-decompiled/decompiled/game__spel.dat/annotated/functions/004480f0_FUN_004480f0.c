
/* ==== FUN_004480f0 @ 004480f0 ==== 
 * signature: undefined __cdecl FUN_004480f0(HINSTANCE param_1, int param_2)
 * body: 004480f0-0044815f
 */

void __cdecl FUN_004480f0(HINSTANCE param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00447870();
  FUN_00447a00(param_1,param_2);
  if (iVar1 != 0) {
    FUN_004c7ec0(1);
  }
  FUN_00447be0();
  FUN_00447cf0();
  FUN_004c3fa0((byte *)s_handle_win_msg_0059eae0);
  FUN_004cd560();
  FUN_00447d00();
  if (DAT_0059dbac == 1) {
    FUN_004c3fa0((byte *)s_Flipping_pages_0059eaf0);
    FUN_004c41e0();
  }
  DAT_0059dbb0 = 1;
  return;
}


