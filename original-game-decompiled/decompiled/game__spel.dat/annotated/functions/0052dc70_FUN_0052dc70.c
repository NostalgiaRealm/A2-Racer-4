
/* ==== FUN_0052dc70 @ 0052dc70 ==== 
 * signature: undefined __cdecl FUN_0052dc70(int param_1, double * param_2, double * param_3)
 * body: 0052dc70-0052dd35
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0052dc70(int param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  if ((DAT_0074be98 == 0) && (8.988465674311579e+307 <= _DAT_0074c668)) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    return;
  }
  FUN_0052b650(param_1,param_2,param_3);
  dVar1 = _DAT_0074c6a8;
  if (_DAT_0074c668 < 8.988465674311579e+307) {
    dVar1 = _DAT_0074c6a8 - SQRT((double)DAT_0074c03c) * _DAT_0074c668;
  }
  *param_2 = dVar1 + *param_2;
  *param_3 = *param_3 - dVar1;
  if ((DAT_0074bee0 != 0) || (DAT_0074bf7c != 0)) {
    *param_2 = _DAT_0074c498 * 0.002 + *param_2;
    *param_3 = *param_3 - _DAT_0074c498 * 0.002;
  }
  return;
}


