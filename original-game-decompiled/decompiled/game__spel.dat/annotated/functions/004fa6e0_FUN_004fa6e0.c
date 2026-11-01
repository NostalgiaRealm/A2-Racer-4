
/* ==== FUN_004fa6e0 @ 004fa6e0 ==== 
 * signature: undefined __thiscall FUN_004fa6e0(void * this, double * param_1, double * param_2)
 * body: 004fa6e0-004fa7a4
 */

void __thiscall FUN_004fa6e0(void *this,double *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  double local_68 [5];
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  iVar3 = 3;
  pdVar1 = (double *)((int)this + 8);
  pdVar4 = local_68;
  do {
    pdVar2 = pdVar1 + 4;
    iVar3 = iVar3 + -1;
    *pdVar4 = param_1[8] * pdVar1[1] + *param_1 * pdVar1[-1] + param_1[4] * *pdVar1;
    *(double *)(&stack0xffffff78 + -(int)this + (int)pdVar2) =
         param_1[1] * pdVar1[-1] + param_1[5] * *pdVar1 + param_1[9] * pdVar1[1];
    *(double *)(&stack0xffffff80 + -(int)this + (int)pdVar2) =
         param_1[2] * pdVar1[-1] + param_1[6] * *pdVar1 + param_1[10] * pdVar1[1];
    pdVar1 = pdVar2;
    pdVar4 = pdVar4 + 4;
  } while (iVar3 != 0);
  *param_2 = local_68[0];
  param_2[1] = local_68[1];
  param_2[2] = local_68[2];
  param_2[4] = local_68[4];
  param_2[5] = local_40;
  param_2[6] = local_38;
  param_2[8] = local_28;
  param_2[9] = local_20;
  param_2[10] = local_18;
  return;
}


