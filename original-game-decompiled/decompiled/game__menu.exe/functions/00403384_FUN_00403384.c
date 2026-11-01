
/* ==== FUN_00403384 @ 00403384 ==== 
 * signature: int __register FUN_00403384(int param_1, undefined4 param_2, char * param_3)
 * body: 00403384-004033a1
 */

int FUN_00403384(int param_1,undefined4 param_2,char *param_3)

{
  if (((param_3 != (char *)0x0) && (param_1 = *(int *)(param_3 + 1), *param_3 != -0x17)) &&
     (*param_3 == -0x15)) {
    param_1 = (int)(char)param_1;
  }
  return param_1;
}


