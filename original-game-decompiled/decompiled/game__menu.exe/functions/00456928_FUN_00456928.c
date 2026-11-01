
/* ==== FUN_00456928 @ 00456928 ==== 
 * signature: int __register FUN_00456928(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00456928-0045694d
 */

int FUN_00456928(int *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00456660(param_1,1,param_3);
  if (*(char *)(param_1[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  return param_1[0x1e];
}


