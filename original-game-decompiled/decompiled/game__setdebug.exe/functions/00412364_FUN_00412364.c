
/* ==== FUN_00412364 @ 00412364 ==== 
 * signature: undefined __register FUN_00412364(int param_1, undefined4 param_2, uint param_3)
 * body: 00412364-004123a1
 */

void FUN_00412364(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_c [2];
  
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x0f') {
    FUN_00411b6c(param_1,local_c,4);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


