
/* ==== FUN_004d12f0 @ 004d12f0 ==== 
 * signature: uint __stdcall FUN_004d12f0(undefined4 param_1, int param_2, int param_3, uint param_4)
 * body: 004d12f0-004d1306
 */

uint FUN_004d12f0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3 - param_2;
  if (param_4 < (uint)(param_3 - param_2)) {
    uVar1 = param_4;
  }
  return uVar1;
}


