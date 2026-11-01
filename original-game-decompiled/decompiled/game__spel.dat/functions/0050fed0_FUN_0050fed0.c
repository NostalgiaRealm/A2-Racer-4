
/* ==== FUN_0050fed0 @ 0050fed0 ==== 
 * signature: bool __stdcall FUN_0050fed0(int * param_1, int * param_2)
 * body: 0050fed0-0050ff19
 */

bool FUN_0050fed0(int *param_1,int *param_2)

{
  if (param_1[3] != param_2[3]) {
    return false;
  }
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[1] != param_2[1]) {
    return false;
  }
  return param_1[2] == param_2[2];
}


