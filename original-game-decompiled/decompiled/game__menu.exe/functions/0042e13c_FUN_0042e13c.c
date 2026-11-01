
/* ==== FUN_0042e13c @ 0042e13c ==== 
 * signature: undefined __register FUN_0042e13c(int param_1, undefined4 * param_2)
 * body: 0042e13c-0042e159
 */

void FUN_0042e13c(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  param_2[2] = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  param_2[3] = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  return;
}


