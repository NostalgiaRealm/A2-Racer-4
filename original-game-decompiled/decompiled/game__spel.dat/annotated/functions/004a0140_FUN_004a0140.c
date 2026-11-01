
/* ==== FUN_004a0140 @ 004a0140 ==== 
 * signature: undefined __stdcall FUN_004a0140(LPCSTR param_1, int param_2)
 * body: 004a0140-004a019f
 */

void FUN_004a0140(LPCSTR param_1,int param_2)

{
  int iVar1;
  int *unaff_retaddr;
  
  FUN_004c3f80(0,1);
  FUN_004c3fa0(&DAT_005aeff8);
  ShowWindow(DAT_007408a4,6);
  iVar1 = FUN_004cd5e0();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd5e0();
  }
  MessageBoxExA((HWND)0x0,param_1,s_Assertion_failure_005aefe4,0x10010,0);
  FUN_004c4040();
  FUN_00559c79(0);
  FUN_004a0100((uint)(unaff_retaddr != (int *)0x0),
               (byte *)s__s___d__NULL_pointer_passed_to_C_005aeffc);
  if (*unaff_retaddr < (int)param_1) {
    *unaff_retaddr = (int)param_1;
  }
  if (param_2 < *unaff_retaddr) {
    *unaff_retaddr = param_2;
  }
  return;
}


