
/* ==== FUN_0043b8f8 @ 0043b8f8 ==== 
 * signature: undefined __register FUN_0043b8f8(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043b8f8-0043b916
 */

void FUN_0043b8f8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (0 < param_1[0x14]) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  if ((char)param_1[0x13] != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


