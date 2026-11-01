
/* ==== FUN_004af5a0 @ 004af5a0 ==== 
 * signature: undefined4 __cdecl FUN_004af5a0(int param_1, int param_2, int * param_3, int * param_4, undefined4 * param_5, int * param_6)
 * body: 004af5a0-004af62d
 */

undefined4 __cdecl
FUN_004af5a0(int param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5,int *param_6)

{
  *param_3 = param_1 - param_2;
  *param_4 = param_1 + param_2;
  if (*param_3 < 0) {
    *param_5 = 0;
    *param_6 = *param_4 % DAT_00715258;
    *param_3 = *param_3 + DAT_00715258 + -1;
    *param_4 = DAT_00715258 + -1;
    return 1;
  }
  if (DAT_00715258 + -1 < param_1 + param_2) {
    *param_5 = 0;
    *param_6 = *param_4 % DAT_00715258;
    *param_4 = DAT_00715258 + -1;
    return 1;
  }
  return 0;
}


