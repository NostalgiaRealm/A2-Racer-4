
/* ==== FUN_004ad640 @ 004ad640 ==== 
 * signature: float10 __thiscall FUN_004ad640(int param_1, float param_2, undefined4 param_3, float param_4, int param_5, int param_6)
 * body: 004ad640-004ad70a
 */

float10 __thiscall
FUN_004ad640(int param_1,float param_2,undefined4 param_3,float param_4,int param_5,int param_6)

{
  if (param_5 == 0) {
    return (((float10)*(float *)(param_1 + 0x5d4 + param_6 * 4) -
            (float10)param_2 * (float10)*(float *)(param_1 + 0x394 + param_6 * 0xc)) -
           (float10)param_4 * (float10)*(float *)(param_1 + (param_6 * 3 + 0xe7) * 4)) /
           (float10)*(float *)(param_1 + param_6 * 0xc + 0x398);
  }
  if (param_5 != 1) {
    if (param_5 != 2) {
      return (((float10)*(float *)(param_1 + 0xec) -
              (float10)param_2 * (float10)*(float *)(param_1 + 0x4c)) -
             (float10)param_4 * (float10)*(float *)(param_1 + 0x54)) /
             (float10)*(float *)(param_1 + 0x50);
    }
    return (((float10)*(float *)(param_1 + 0x934 + param_6 * 4) -
            (float10)param_2 * (float10)*(float *)(param_1 + 0x814 + param_6 * 0xc)) -
           (float10)param_4 * (float10)*(float *)(param_1 + (param_6 * 3 + 0x207) * 4)) /
           (float10)*(float *)(param_1 + param_6 * 0xc + 0x818);
  }
  return (((float10)*(float *)(param_1 + 0x314 + param_6 * 4) -
          (float10)param_2 * (float10)*(float *)(param_1 + 0x194 + param_6 * 0xc)) -
         (float10)param_4 * (float10)*(float *)(param_1 + param_6 * 0xc + 0x19c)) /
         (float10)*(float *)(param_1 + (param_6 * 3 + 0x66) * 4);
}


