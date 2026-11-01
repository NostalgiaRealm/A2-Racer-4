
/* ==== FUN_004455e0 @ 004455e0 ==== 
 * signature: undefined __cdecl FUN_004455e0(undefined4 param_1, undefined4 param_2)
 * body: 004455e0-0044563b;00445640-0044568c;00445690-00445690
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044563c-0044563f 0044568d-0044568f
 */

void __cdecl FUN_004455e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    FUN_004c4a60(DAT_007408b0);
    iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                      (DAT_007408b0,param_1,DAT_006ed690,param_2,0x1000000,0);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____blitting_error___s___0059d808);
    }
  }
  else if (iVar1 == 2) {
    FUN_004c4a60(DAT_00740890);
    iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                      (DAT_00740890,param_1,DAT_006ed690,param_2,0x1000000,0);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____blitting_error___s___0059d84c);
    }
  }
  return;
}


