
/* ==== FUN_004c4980 @ 004c4980 ==== 
 * signature: undefined __cdecl FUN_004c4980(int param_1, undefined4 param_2)
 * body: 004c4980-004c49a6;004c49b0-004c4a16;004c4a1a-004c4a1b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c49a7-004c49af 004c4a17-004c4a19
 */

void __cdecl FUN_004c4980(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_007408ac;
  iVar2 = DAT_007408bc;
  if (((param_1 != 0) && (piVar1 = DAT_007408b0, iVar2 = DAT_007408c0, param_1 != 1)) &&
     (piVar1 = DAT_00740890, iVar2 = DAT_007408c4, param_1 != 2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____unidentified_focus_erro_005b4230);
  }
  if (iVar2 != 0) {
    FUN_004c4a60(piVar1);
    iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,param_2);
    if (iVar2 != 0) {
      hardware(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____could_not_unlock_surfac_005b425c);
    }
  }
  return;
}


