
/* ==== FUN_00403a70 @ 00403a70 ==== 
 * signature: undefined __cdecl FUN_00403a70(float param_1, float param_2, float param_3, float param_4)
 * body: 00403a70-00403aa5;00403aad-00403b5b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00403aa6-00403aac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00403a70(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  fVar1 = param_1;
  if ((-1 < (int)param_1) && ((int)param_1 < 0x13)) {
    lVar3 = FUN_004031f0((&DAT_005ce9e8)[(int)param_1 * 0xa5],param_2,param_3,param_4);
    iVar2 = (int)lVar3;
    if (_DAT_005d1b8c <= ABS((float)iVar2)) {
      if ((float)iVar2 <= _DAT_005d1b90) {
        if (-_DAT_005d1b90 <= (float)iVar2) {
          param_1 = (float)iVar2 / _DAT_005d1b94;
        }
        else {
          param_1 = -100.0;
        }
      }
      else {
        param_1 = 100.0;
      }
    }
    else {
      param_1 = 0.0;
    }
    FUN_00402de0(&DAT_005cea7c + (int)fVar1 * 0x294,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_Illegal_entry__d_in_FSM_ta_0058eb80);
}


