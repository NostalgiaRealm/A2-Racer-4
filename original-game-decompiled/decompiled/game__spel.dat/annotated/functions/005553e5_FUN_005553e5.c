
/* ==== FUN_005553e5 @ 005553e5 ==== 
 * signature: uint __stdcall FUN_005553e5(char * param_1, char * param_2, char * param_3, char * param_4)
 * body: 005553e5-00555422
 */

uint FUN_005553e5(char *param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00555416;
    if (*param_1 < *param_3) goto LAB_00555407;
    if (*param_3 < *param_1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00555416:
    uVar1 = (uint)(param_1 != param_2);
  }
  else {
LAB_00555407:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


