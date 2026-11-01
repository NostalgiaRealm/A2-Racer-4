
/* ==== ReadMenuExitCode @ 004010c0 ==== 
 * signature: int __stdcall ReadMenuExitCode(void)
 * body: 004010c0-00401121
 * note: ANALYST: Reads [General] ExitCode from Menu.ini. [confidence: confirmed] [evidence: strings Menu.ini, ExitCode]
 */

/* ANALYST: Reads [General] ExitCode from Menu.ini. [confidence: confirmed] [evidence: strings
   Menu.ini, ExitCode] */

int ReadMenuExitCode(void)

{
  int iVar1;
  CHAR local_40 [64];
  
  BuildIniPath(s_Menu_ini_004070b4);
  iVar1 = IniGetInt(s_General_004070a0,s_ExitCode_004070a8);
  if (iVar1 == 0) {
    FUN_004014e0(s__s___d__No_value_specified_for_m_0040703c,
                 (byte *)s_C__Work_Motor_main_cpp_00407088);
    MessageBoxA((HWND)0x0,local_40,s_MOTOR_00407034,0);
  }
  return iVar1;
}


