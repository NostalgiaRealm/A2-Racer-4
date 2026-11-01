
/* ==== FUN_00413f58 @ 00413f58 ==== 
 * signature: undefined __register FUN_00413f58(int param_1, undefined4 param_2, uint param_3)
 * body: 00413f58-00413f9c
 */

void FUN_00413f58(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x10') {
    FUN_00413720(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


