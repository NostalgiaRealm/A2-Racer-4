
/* ==== FUN_004ce030 @ 004ce030 ==== 
 * signature: undefined4 __cdecl FUN_004ce030(int param_1, int param_2)
 * body: 004ce030-004ce072;004ce076-004ce0b9;004ce0bd-004ce0ce
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ce073-004ce075 004ce0ba-004ce0bc
 */

undefined4 __cdecl FUN_004ce030(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1006) {
    if (((param_1 < 0x1002) && (param_1 != 4)) && ((param_1 < 7 || (8 < param_1)))) {
LAB_004ce05e:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unknown_device_selected_005b6a14);
    }
  }
  else if (param_1 != 0x1008) goto LAB_004ce05e;
  iVar1 = FUN_004cdd80(param_1,0);
  if (iVar1 == 0) {
    return 10000;
  }
  if ((DAT_00740efc <= param_2) && (param_2 <= DAT_00740f00)) {
    FUN_004ce000(param_2);
    FUN_004cdfa0();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____error_setting_volume_va_005b69d4);
}


