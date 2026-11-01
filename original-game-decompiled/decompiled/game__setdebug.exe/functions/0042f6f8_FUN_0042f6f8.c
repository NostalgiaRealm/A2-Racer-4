
/* ==== FUN_0042f6f8 @ 0042f6f8 ==== 
 * signature: undefined __register FUN_0042f6f8(int param_1, int param_2)
 * body: 0042f6f8-0042f72a
 */

void FUN_0042f6f8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x28));
    FUN_00413a98(*(int *)(param_1 + 0x2c),param_1,extraout_ECX);
  }
  return;
}


