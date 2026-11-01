
/* ==== FUN_00403b60 @ 00403b60 ==== 
 * signature: undefined __cdecl FUN_00403b60(int param_1, float param_2, float param_3, float param_4, float param_5)
 * body: 00403b60-00403b95;00403b9d-00403c61
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403b96-00403b9c
 */

void __cdecl FUN_00403b60(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  longlong lVar2;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    lVar2 = FUN_004031f0((&DAT_005ce9e8)[param_1 * 0xa5],param_2,param_3,param_4);
    fVar1 = (float)(int)lVar2;
    if (0.0 <= param_5) {
      param_5 = fVar1 / (param_5 * 6.0 + 1.0) + fVar1;
    }
    else {
      param_5 = fVar1 / (ABS(param_5) * 6.0 + 1.0);
    }
    if (100.0 < param_5) {
      param_5 = 100.0;
    }
    if (param_5 < -100.0) {
      param_5 = -100.0;
    }
    FUN_00402de0(&DAT_005cea7c + param_1 * 0x294,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_Illegal_entry__d_in_FSM_ta_0058ebc8);
}


