
/* ==== FUN_00447a80 @ 00447a80 ==== 
 * signature: undefined __cdecl FUN_00447a80(int param_1)
 * body: 00447a80-00447bd3
 */

void __cdecl FUN_00447a80(int param_1)

{
  HANDLE pvVar1;
  byte *pbVar2;
  char *pcVar3;
  byte local_21c [12];
  int local_210;
  int local_20c;
  CHAR local_104 [260];
  
  FUN_005587a3(local_104,(byte *)s_x___s_0059e730);
  local_104[0] = DAT_00740dec;
  FUN_004c3fa0((byte *)s__Looking_for_file___s__and_path___0059e738);
  pvVar1 = FUN_005590ff(local_104,(uint *)local_21c);
  if (pvVar1 == (HANDLE)0xffffffff) {
    pcVar3 = s__Check_file_not_found__0059e760;
  }
  else {
    FUN_004c3fa0((byte *)s___s_file_info__0059e778);
    FUN_004c3fa0((byte *)s_RDO_HID_SYS_ARC_FILE_DATE__25c_S_0059e78c);
    FUN_004c3fa0((byte *)s____________________________25c___0059e7bc);
    pbVar2 = &DAT_0059e7ec;
    if ((local_21c[0] & 1) == 0) {
      pbVar2 = &DAT_0059e7f4;
    }
    FUN_004c3fa0(pbVar2);
    pbVar2 = &DAT_0059e7fc;
    if ((local_21c[0] & 4) == 0) {
      pbVar2 = &DAT_0059e804;
    }
    FUN_004c3fa0(pbVar2);
    pbVar2 = &DAT_0059e80c;
    if ((local_21c[0] & 2) == 0) {
      pbVar2 = &DAT_0059e814;
    }
    FUN_004c3fa0(pbVar2);
    pbVar2 = &DAT_0059e81c;
    if ((local_21c[0] & 0x20) == 0) {
      pbVar2 = &DAT_0059e824;
    }
    FUN_004c3fa0(pbVar2);
    FUN_0055924c(&local_210);
    FUN_004c3fa0((byte *)s___12s___24s__9ld_0059e82c);
    if (param_1 == local_20c) {
      pcVar3 = s__CD_check_succeeded___0059e840;
    }
    else {
      pcVar3 = s__CD_check_failed___0059e858;
    }
  }
  FUN_004c3fa0((byte *)pcVar3);
  FUN_005591c9(pvVar1);
  return;
}


