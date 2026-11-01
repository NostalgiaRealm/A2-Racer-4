
/* ==== FUN_0040db30 @ 0040db30 ==== 
 * signature: uint __cdecl FUN_0040db30(int param_1)
 * body: 0040db30-0040db55;0040db63-0040dba7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040db56-0040db62
 */

uint __cdecl FUN_0040db30(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
    uVar3 = 5;
  }
  else if (param_1 == 1) {
    uVar1 = 6;
    uVar3 = 0x11;
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Illegal_FSM_object_type_00591aec);
    }
    uVar1 = 0x12;
    uVar3 = 0x12;
  }
  if (uVar1 <= uVar3) {
    piVar2 = &DAT_005ce9e8 + uVar1 * 0xa5;
    do {
      if (*piVar2 == -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0xa5;
    } while ((int)uVar1 <= (int)uVar3);
  }
  return 0xffffffff;
}


