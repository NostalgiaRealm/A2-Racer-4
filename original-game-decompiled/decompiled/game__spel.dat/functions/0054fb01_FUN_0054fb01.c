
/* ==== FUN_0054fb01 @ 0054fb01 ==== 
 * signature: char * __stdcall FUN_0054fb01(char * param_1, char * param_2, undefined2 * param_3)
 * body: 0054fb01-0054fb2d
 */

char * FUN_0054fb01(char *param_1,char *param_2,undefined2 *param_3)

{
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0054ef7c((int)*param_1);
    *param_3 = (short)uVar1;
    param_3 = param_3 + 1;
  }
  return param_1;
}


