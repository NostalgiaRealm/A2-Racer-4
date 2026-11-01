
/* ==== FUN_005027b0 @ 005027b0 ==== 
 * signature: undefined4 __fastcall FUN_005027b0(int param_1)
 * body: 005027b0-005027cb
 */

undefined4 __fastcall FUN_005027b0(int param_1)

{
  if (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18) < 0.0) {
    return 1;
  }
  return 0;
}


