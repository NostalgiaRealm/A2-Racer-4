
/* ==== FUN_0044c02f @ 0044c02f ==== 
 * signature: undefined __stdcall FUN_0044c02f(void)
 * body: 0044c02f-0044c02f
 */

void FUN_0044c02f(void)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = 0;
  uStack_4 = 0;
  iVar1 = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8,&uStack_8);
  if (iVar1 != 0) {
    hardware(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Error_setting_color_key__s__005a1328);
  }
  return;
}


