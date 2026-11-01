
/* ==== FUN_004398e8 @ 004398e8 ==== 
 * signature: undefined __register FUN_004398e8(int param_1, int param_2)
 * body: 004398e8-0043991a
 */

void FUN_004398e8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x28));
    FUN_0041564c(*(int *)(param_1 + 0x2c),param_1,extraout_ECX);
  }
  return;
}


