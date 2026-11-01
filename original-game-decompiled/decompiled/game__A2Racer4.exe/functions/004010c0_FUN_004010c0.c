
/* ==== FUN_004010c0 @ 004010c0 ==== 
 * signature: int __stdcall FUN_004010c0(void)
 * body: 004010c0-00401121
 */

int FUN_004010c0(void)

{
  int iVar1;
  CHAR local_40 [64];
  
  FUN_00401020(s_Menu_ini_004070b4);
  iVar1 = FUN_00401000(s_General_004070a0,s_ExitCode_004070a8);
  if (iVar1 == 0) {
    FUN_004014e0(s__s___d__No_value_specified_for_m_0040703c,
                 (byte *)s_C__Work_Motor_main_cpp_00407088);
    MessageBoxA((HWND)0x0,local_40,s_MOTOR_00407034,0);
  }
  return iVar1;
}


