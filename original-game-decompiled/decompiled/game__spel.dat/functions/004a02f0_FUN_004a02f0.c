
/* ==== FUN_004a02f0 @ 004a02f0 ==== 
 * signature: undefined __thiscall FUN_004a02f0(void * this, int param_1, float * param_2, float * param_3, int param_4, int param_5)
 * body: 004a02f0-004a0388
 */

void __thiscall
FUN_004a02f0(void *this,int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  pdVar2 = (double *)0x0;
  pdVar1 = (double *)0x0;
  if (param_2 != (float *)0x0) {
    local_4c = *param_2;
    local_48 = param_2[1];
    local_44 = param_2[2];
    FUN_004a4180(&local_4c);
    pdVar1 = &local_40;
    local_40 = (double)local_4c;
    local_38 = (double)local_48;
    local_30 = (double)local_44;
  }
  if (param_3 != (float *)0x0) {
    pdVar2 = &local_20;
    local_20 = (double)*param_3;
    local_18 = (double)-param_3[1];
    local_10 = (double)param_3[2];
  }
  FUN_004f5860(this,*(void **)(param_1 + 8),pdVar1,pdVar2,param_4,param_5,(void *)0x0,(double *)0x0)
  ;
  return;
}


