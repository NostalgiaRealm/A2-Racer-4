
/* ==== FUN_004ccc10 @ 004ccc10 ==== 
 * signature: undefined4 __stdcall FUN_004ccc10(void)
 * body: 004ccc10-004ccddd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ccc10(void)

{
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  DWORD local_48;
  _MEMORYSTATUS local_44;
  _SYSTEM_INFO local_24;
  
  FUN_004c3fa0((byte *)s_Getting_system_information_005b6374);
  local_48 = 0x27;
  BVar1 = GetComputerNameA(&DAT_00740d58,&local_48);
  if (BVar1 != 0) {
    FUN_004c3fa0((byte *)s_Computername____s_005b6360);
  }
  local_48 = 0x27;
  BVar1 = GetUserNameA(&DAT_00740d88,&local_48);
  if (BVar1 != 0) {
    FUN_004c3fa0((byte *)s_Username____s_005b6350);
  }
  FUN_004cca80(0x1b);
  GlobalMemoryStatus(&local_44);
  DAT_00740dc8 = local_44.dwTotalPhys;
  DAT_00740dd0 = local_44.dwMemoryLoad;
  DAT_00740dcc = local_44.dwAvailPhys;
  FUN_004c3fa0((byte *)s_Total_Physical_Memory____d_Kb_005b632c);
  FUN_004c3fa0((byte *)s_Available_Physical_Memory____d_K_005b6308);
  FUN_004c3fa0((byte *)s_Memory_Load__of_total_____d_005b62e8);
  GetSystemInfo(&local_24);
  _DAT_00740dc4 = local_24.dwProcessorType;
  if (local_24.dwProcessorType == 0x182) {
    pcVar3 = s_386_processor_installed_005b6270;
  }
  else if (local_24.dwProcessorType == 0x1e6) {
    pcVar3 = s_486_processor_installed_005b628c;
  }
  else if (local_24.dwProcessorType == 0x24a) {
    pcVar3 = s_Pentium_processor_installed_005b62a8;
  }
  else {
    pcVar3 = s_Unknown_processor_installed_005b62c8;
  }
  FUN_004c3fa0((byte *)pcVar3);
  iVar2 = GetSystemMetrics(0x43);
  if (iVar2 == 0) {
    _DAT_00740dc0 = 0;
    pcVar3 = s_Startup___Normal_Boot_005b6214;
  }
  else if (iVar2 == 1) {
    _DAT_00740dc0 = 1;
    pcVar3 = s_Startup___Safe_Mode_Boot_005b622c;
  }
  else {
    if (iVar2 != 2) goto LAB_004ccd85;
    _DAT_00740dc0 = 1;
    pcVar3 = s_Startup___Safe_Mode_Boot_With_Ne_005b6248;
  }
  FUN_004c3fa0((byte *)pcVar3);
LAB_004ccd85:
  iVar2 = GetSystemMetrics(0x13);
  if (iVar2 != 0) {
    FUN_004c3fa0((byte *)s_Mouse_is_present_005b6200);
    _DAT_00740db4 = 1;
  }
  iVar2 = GetSystemMetrics(0x3f);
  if (iVar2 != 0) {
    FUN_004c3fa0((byte *)s_Network_is_present_005b61ec);
    _DAT_00740db8 = 1;
  }
  iVar2 = GetSystemMetrics(0x49);
  if (iVar2 != 0) {
    FUN_004c3fa0((byte *)s_Windows_95_thinks_this_is_a_slow_005b61c0);
    _DAT_00740dbc = 1;
  }
  return 0;
}


