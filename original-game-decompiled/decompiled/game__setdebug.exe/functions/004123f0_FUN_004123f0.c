
/* ==== FUN_004123f0 @ 004123f0 ==== 
 * signature: undefined __register FUN_004123f0(int param_1, undefined4 param_2, uint param_3)
 * body: 004123f0-0041242e
 */

void FUN_004123f0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x11') {
    FUN_00411b6c(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


