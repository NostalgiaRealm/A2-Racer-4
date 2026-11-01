
/* ==== FUN_0041fbd0 @ 0041fbd0 ==== 
 * signature: undefined __cdecl FUN_0041fbd0(int param_1)
 * body: 0041fbd0-0041fbf3;0041fbf7-0041fc9c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041fbf4-0041fbf6
 */

void __cdecl FUN_0041fbd0(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = param_1 * 0x294;
    if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
      (&DAT_005ce9f8)[iVar1] = 0;
      *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
      (&DAT_005ceadd)[iVar1] = 0;
      (&DAT_005ceadc)[iVar1] = 1;
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x3f800000;
    }
    if (*(float *)(&DAT_005cec28 + iVar1) <= 0.0) {
      iVar1 = FUN_00421710(param_1);
      if (iVar1 != 0) {
        iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
        FUN_0040e5a0(iVar1,*(undefined4 **)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),'\0');
        FUN_0040d470(&DAT_005ce9e8 + param_1 * 0xa5,0x1d);
      }
    }
    FUN_0041eeb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Illegal_FSM_object_inde_00594fb4);
}


