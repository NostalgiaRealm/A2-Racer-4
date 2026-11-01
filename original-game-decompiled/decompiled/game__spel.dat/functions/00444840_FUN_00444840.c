
/* ==== FUN_00444840 @ 00444840 ==== 
 * signature: undefined __cdecl FUN_00444840(int param_1, float * param_2, float * param_3, int param_4, float param_5)
 * body: 00444840-004449a2
 */

void __cdecl FUN_00444840(int param_1,float *param_2,float *param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [2];
  float local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  iVar5 = param_1 * 0xf0;
  this = *(void **)(iVar5 + 0x10 + DAT_00715e50);
  if (this == (void *)0x0) {
    return;
  }
  if (param_4 == 2) {
    pfVar4 = (float *)FUN_004a2ee0(this,local_c,2);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
  }
  else {
    if (param_4 != 3) goto LAB_004448e9;
    pfVar4 = (float *)FUN_004a2ee0(this,local_c,3);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
  }
  fVar6 = FUN_004a2eb0((int)this,2);
  local_2c = (float)((float10)local_2c - (fVar6 + (float10)1.0));
LAB_004448e9:
  fVar1 = *(float *)(iVar5 + 0xc4 + DAT_00715e50);
  fVar2 = *(float *)(iVar5 + 0xc0 + DAT_00715e50);
  fVar3 = *(float *)(iVar5 + 0xbc + DAT_00715e50);
  local_20 = 0;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  local_24 = *(float *)(iVar5 + 0xbc + DAT_00715e50) / fVar1;
  local_4 = -local_24;
  local_1c = local_4 * param_5;
  local_30 = (*(float *)(iVar5 + 0xc4 + DAT_00715e50) / fVar1) * param_5 + local_30;
  local_2c = local_2c + 0.0;
  local_28 = local_28 + local_1c;
  FUN_004bc620(&local_18,&local_30,param_3);
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  return;
}


