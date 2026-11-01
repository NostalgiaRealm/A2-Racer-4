
/* ==== FUN_0041176c @ 0041176c ==== 
 * signature: undefined __register FUN_0041176c(int param_1, undefined4 param_2, uint param_3)
 * body: 0041176c-0041178e
 */

void FUN_0041176c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)param_2 != (char)uVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00413470(param_1,extraout_EDX,extraout_ECX);
    FUN_00411700();
  }
  return;
}


