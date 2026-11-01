
/* ==== FUN_0052aee0 @ 0052aee0 ==== 
 * signature: double * __cdecl FUN_0052aee0(double * param_1, int param_2)
 * body: 0052aee0-0052af3c
 */

double * __cdecl FUN_0052aee0(double *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  double local_10;
  
  pdVar2 = (double *)0x0;
  local_10 = -1.79769313486232e+308;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    dVar1 = *param_1;
    if (*param_1 < 0.0) {
      dVar1 = -dVar1;
    }
    if (local_10 < dVar1) {
      pdVar2 = param_1;
      local_10 = dVar1;
    }
    param_1 = param_1 + 1;
  }
  return pdVar2;
}


