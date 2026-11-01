
/* ==== FUN_0044c030 @ 0044c030 ==== 
 * signature: undefined __stdcall FUN_0044c030(void)
 * body: 0044c030-0044c069;0044c06d-0044c070
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044c06a-0044c06c
 */

void FUN_0044c030(void)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8,&local_8);
  if (iVar1 != 0) {
    hardware(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Error_setting_color_key__s__005a1328);
  }
  return;
}


