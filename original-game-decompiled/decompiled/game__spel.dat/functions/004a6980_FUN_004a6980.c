
/* ==== FUN_004a6980 @ 004a6980 ==== 
 * signature: undefined __cdecl FUN_004a6980(int param_1, byte * param_2)
 * body: 004a6980-004a6a0f
 */

void __cdecl FUN_004a6980(int param_1,byte *param_2)

{
  int iVar1;
  CHAR local_190 [400];
  
  if (param_1 == 0) {
    FUN_005590ae(local_190,param_2,(undefined4 *)&stack0x0000000c);
    FUN_004c3f80(0,1);
    FUN_004c3fa0(&DAT_005aeff8);
    ShowWindow(DAT_007408a4,6);
    iVar1 = FUN_004cd5e0();
    while (iVar1 != 0) {
      iVar1 = FUN_004cd5e0();
    }
    MessageBoxExA((HWND)0x0,local_190,s_Assertion_failure_005aefe4,0x10010,0);
    FUN_004c4040();
    FUN_00559c79(0);
  }
  return;
}


