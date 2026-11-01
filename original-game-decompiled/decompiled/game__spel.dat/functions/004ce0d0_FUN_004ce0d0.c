
/* ==== FUN_004ce0d0 @ 004ce0d0 ==== 
 * signature: undefined4 __cdecl FUN_004ce0d0(int param_1)
 * body: 004ce0d0-004ce112;004ce116-004ce139
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ce113-004ce115
 */

undefined4 __cdecl FUN_004ce0d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x1006) {
    if (((param_1 < 0x1002) && (param_1 != 4)) && ((param_1 < 7 || (8 < param_1)))) {
LAB_004ce0fe:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unknown_device_selected_005b6a14);
    }
  }
  else if (param_1 != 0x1008) goto LAB_004ce0fe;
  iVar1 = FUN_004cdd80(param_1,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004cdfd0();
    FUN_004cdfa0();
    return uVar2;
  }
  return 0xffffffff;
}


