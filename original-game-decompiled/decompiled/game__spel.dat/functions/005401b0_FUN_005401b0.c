
/* ==== FUN_005401b0 @ 005401b0 ==== 
 * signature: float10 __thiscall FUN_005401b0(int param_1, void * param_2, void * param_3)
 * body: 005401b0-00540297
 */

float10 __thiscall FUN_005401b0(int param_1,void *param_2,void *param_3)

{
  float10 fVar1;
  float10 fVar2;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  double local_20 [4];
  
  FUN_004fadc0(param_2,(float *)(param_1 + 0x30),&local_a0);
  FUN_004fadc0(param_3,(float *)(param_1 + 0x40),&local_40);
  FUN_004faec0(param_3,(double *)(param_1 + 0x50),local_20);
  FUN_004faec0(param_3,(double *)(param_1 + 0x70),&local_60);
  local_80 = local_40 - local_a0;
  local_78 = local_38 - local_98;
  local_70 = local_30 - local_90;
  FUN_004f99d0(&local_c0,&local_80,local_20);
  fVar1 = FUN_004f9470(&local_c0);
  fVar2 = (float10)local_60 * (float10)local_c0 +
          (float10)local_b8 * (float10)local_58 + (float10)local_b0 * (float10)local_50 +
          (float10)*(double *)(param_1 + 0x28);
  if (fVar2 < fVar1) {
    fVar1 = (float10)(double)fVar2;
  }
  return fVar1;
}


