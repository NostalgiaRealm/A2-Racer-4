
/* ==== FUN_005408e0 @ 005408e0 ==== 
 * signature: float10 __thiscall FUN_005408e0(int param_1, void * param_2, void * param_3)
 * body: 005408e0-005409c8
 */

float10 __thiscall FUN_005408e0(int param_1,void *param_2,void *param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double local_a0;
  double local_98;
  double local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_40 [4];
  double local_20 [4];
  
  FUN_004faec0(param_2,(double *)(param_1 + 0x48),local_20);
  FUN_004fad20(param_2,(double *)(param_1 + 0x28),&local_a0);
  FUN_004faec0(param_3,(double *)(param_1 + 0x88),local_40);
  FUN_004fad20(param_3,(double *)(param_1 + 0x68),&local_80);
  FUN_004f99d0(&local_60,local_20,local_40);
  fVar1 = (float10)local_60;
  fVar2 = (float10)local_58;
  fVar3 = (float10)local_50;
  fVar4 = FUN_004f9200((float)(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2));
  return fVar4 * (float10)(double)(((float10)local_a0 * fVar1 +
                                   fVar2 * (float10)local_98 + fVar3 * (float10)local_90) -
                                  ((float10)local_80 * fVar1 +
                                  fVar2 * (float10)local_78 + fVar3 * (float10)local_70)) *
         (float10)*(double *)(param_1 + 0xa8);
}


