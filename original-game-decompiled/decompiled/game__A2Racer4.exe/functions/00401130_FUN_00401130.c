
/* ==== FUN_00401130 @ 00401130 ==== 
 * signature: undefined __cdecl FUN_00401130(uint * param_1, undefined4 param_2)
 * body: 00401130-0040121b
 */

void __cdecl FUN_00401130(uint *param_1,undefined4 param_2)

{
  uint **ppuVar1;
  int iVar2;
  uint *local_50 [20];
  
  ppuVar1 = local_50;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar1 = (uint *)0x0;
    ppuVar1 = ppuVar1 + 1;
  }
  local_50[0] = param_1;
  local_50[1] = (uint *)param_2;
  iVar2 = FUN_00405151(0,param_1,local_50);
  if (iVar2 == -1) {
    switch(DAT_00407f44) {
    case 2:
      MessageBoxA((HWND)0x0,s_File_or_path_is_not_found_00407140,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 7:
      MessageBoxA((HWND)0x0,s_Argument_list_exceeds_1024_bytes_00407178,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 8:
      MessageBoxA((HWND)0x0,s_Specified_file_is_not_executable_004070f8,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 0xc:
      MessageBoxA((HWND)0x0,s_Not_enough_memory_is_available_t_004070c0,s_MOTOR_00407034,0);
      break;
    case 0x16:
      MessageBoxA((HWND)0x0,s_mode_argument_is_invalid_0040715c,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    }
  }
  FUN_004010c0();
  return;
}


