
/* ==== FUN_0045b9d4 @ 0045b9d4 ==== 
 * signature: undefined __register FUN_0045b9d4(int * param_1)
 * body: 0045b9d4-0045ba0a
 */

void FUN_0045b9d4(int *param_1)

{
  if (param_1[0x12] != 0) {
    FUN_0040c968(param_1 + 0x12);
  }
  if (param_1[9] != 0) {
    FUN_0045be3c(param_1,param_1 + 9);
  }
  *(undefined4 *)(param_1[10] + 4) = 0;
  FUN_00451ac4((undefined4 *)param_1[0xc]);
  return;
}


