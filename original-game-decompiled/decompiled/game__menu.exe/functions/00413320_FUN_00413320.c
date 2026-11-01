
/* ==== FUN_00413320 @ 00413320 ==== 
 * signature: undefined __register FUN_00413320(int param_1, undefined4 param_2, uint param_3)
 * body: 00413320-00413342
 */

void FUN_00413320(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)param_2 != (char)uVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00415024(param_1,extraout_EDX,extraout_ECX);
    FUN_004132b4();
  }
  return;
}


