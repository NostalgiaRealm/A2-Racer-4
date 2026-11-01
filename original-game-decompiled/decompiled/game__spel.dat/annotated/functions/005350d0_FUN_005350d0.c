
/* ==== FUN_005350d0 @ 005350d0 ==== 
 * signature: undefined __cdecl FUN_005350d0(int param_1, int param_2, int param_3, int * param_4, double * param_5, double * param_6, double * param_7)
 * body: 005350d0-00535184
 */

void __cdecl
FUN_005350d0(int param_1,int param_2,int param_3,int *param_4,double *param_5,double *param_6,
            double *param_7)

{
  float10 fVar1;
  float10 fVar2;
  double local_18;
  double local_10;
  double local_8;
  
  if (param_1 == 0) {
    fVar2 = FUN_00528490(param_2,param_3,&local_18,&local_8);
    fVar1 = (float10)local_8;
  }
  else {
    DAT_0074c850 = DAT_0074c850 + 1;
    FUN_005273a0(*(double **)(param_2 + 0x28),param_3,&local_10);
    fVar1 = (float10)DAT_0074c03c * (float10)local_10;
    fVar2 = fVar1;
    if (fVar1 < (float10)0.0) {
      local_18 = (double)fVar1;
      fVar2 = -fVar1;
      fVar1 = (float10)0.0;
    }
  }
  if ((float10)*param_5 <= fVar2) {
    return;
  }
  *param_4 = param_3;
  *param_6 = local_18;
  *param_7 = (double)fVar1;
  *param_5 = (double)fVar2;
  return;
}


