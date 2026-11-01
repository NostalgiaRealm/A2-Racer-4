
/* ==== FUN_005282b0 @ 005282b0 ==== 
 * signature: float10 __cdecl FUN_005282b0(double * param_1, double * param_2)
 * body: 005282b0-00528349
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_005282b0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  double local_8;
  
  fVar4 = (float10)0.0;
  for (iVar3 = DAT_0074c03c; iVar3 != 0; iVar3 = iVar3 + -1) {
    dVar1 = *param_1;
    dVar2 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    fVar4 = (float10)dVar1 * (float10)dVar2 + fVar4;
  }
  local_8 = (double)fVar4;
  if (DAT_0074bf98 != 0) {
    iVar3 = FUN_0052bd10();
    fVar4 = ((float10)iVar3 * (float10)9.313225754828403e-10 - (float10)1.0) *
            (float10)_DAT_0074bfa0 + (float10)local_8;
    local_8 = (double)fVar4;
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_getangle___2_2g_005c1d08);
    fVar4 = (float10)local_8;
  }
  return fVar4;
}


