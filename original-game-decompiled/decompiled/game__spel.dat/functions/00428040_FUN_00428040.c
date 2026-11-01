
/* ==== FUN_00428040 @ 00428040 ==== 
 * signature: float10 __cdecl FUN_00428040(int param_1, int param_2, float param_3)
 * body: 00428040-00428113
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00428040(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_2 < 2) {
    iVar2 = DAT_00715e50 + param_1 * 0xf0;
    pfVar1 = (float *)(iVar2 + 0xc4);
    if (*(float *)(iVar2 + 0xc4) == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan(((float10)*(float *)(iVar2 + 0xbc) -
                              (float10)*(float *)(iVar2 + 0xcc) * (float10)DAT_006b2ae0) /
                              (float10)*pfVar1,(float10)1);
      fVar3 = (float10)_DAT_006b2aec * (float10)param_3 * (float10)0.01 - fVar3;
    }
  }
  else {
    iVar2 = param_1 * 0xf0 + DAT_00715e50;
    pfVar1 = (float *)(iVar2 + 0xc4);
    if (*(float *)(iVar2 + 0xc4) == 0.0) {
      fVar3 = (float10)0.0;
    }
    else {
      fVar3 = (float10)fpatan(((float10)*(float *)(iVar2 + 0xcc) * (float10)DAT_006b2ae4 +
                              (float10)*(float *)(iVar2 + 0xbc)) / (float10)*pfVar1,(float10)1);
      fVar3 = -fVar3;
    }
  }
  if (*pfVar1 < 0.0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}


