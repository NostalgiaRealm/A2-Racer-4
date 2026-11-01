
/* ==== FUN_0052b650 @ 0052b650 ==== 
 * signature: undefined __cdecl FUN_0052b650(int param_1, double * param_2, double * param_3)
 * body: 0052b650-0052b763
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0052b650(int param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_2 != (double *)0x0) {
    if ((param_1 == 0) || (DAT_0074c670 == 0)) {
      fVar4 = FUN_0052b180();
    }
    else {
      fVar4 = (float10)_DAT_0074c490 + (float10)*(double *)(param_1 + 8);
    }
    *param_2 = (double)fVar4;
    if (_DAT_0074c668 < 8.988465674311579e+307) {
      *param_2 = SQRT((double)DAT_0074c03c) * _DAT_0074c668 + *param_2;
    }
  }
  if (param_3 != (double *)0x0) {
    dVar2 = _DAT_0074c688;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      local_18 = 0xffffffff;
      uStack_14 = 0x7fefffff;
      if (iVar1 != 0) {
        piVar3 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar3 = piVar3 + 1;
          DAT_0074c968 = DAT_0074c968 + 1;
          FUN_005273a0(*(double **)(iVar1 + 8),param_1,(double *)&local_10);
          if ((double)CONCAT44(uStack_c,local_10) < (double)CONCAT44(uStack_14,local_18)) {
            local_18 = local_10;
            uStack_14 = uStack_c;
          }
          iVar1 = *piVar3;
        }
      }
      dVar2 = (double)CONCAT44(uStack_14,local_18);
    }
    *param_3 = dVar2 - _DAT_0074c490;
    if (_DAT_0074c668 < 8.988465674311579e+307) {
      *param_3 = *param_3 - SQRT((double)DAT_0074c03c) * _DAT_0074c668;
    }
  }
  return;
}


