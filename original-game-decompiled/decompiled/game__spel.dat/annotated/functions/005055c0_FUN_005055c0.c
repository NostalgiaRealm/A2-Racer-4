
/* ==== FUN_005055c0 @ 005055c0 ==== 
 * signature: undefined __thiscall FUN_005055c0(void * this, double * param_1, uint * param_2, int * param_3, float * param_4)
 * body: 005055c0-00505804
 */

void __thiscall FUN_005055c0(void *this,double *param_1,uint *param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  FUN_0050a110(param_2,param_3,&local_48);
  FUN_0050a110((uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),param_3,
               &local_28);
  fVar1 = (float)((float10)local_28 - (float10)local_48);
  fVar2 = (float)((float10)local_20 - (float10)local_40);
  fVar3 = (float)((float10)local_18 - (float10)local_38);
  local_58 = (float)((float10)*param_1 - (float10)local_48);
  local_54 = (float)((float10)param_1[1] - (float10)local_40);
  local_50 = (float)((float10)param_1[2] - (float10)local_38);
  dVar4 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar8 = FUN_004f92a0(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
  dVar4 = (double)fVar8;
  local_68 = local_50 * fVar2 - fVar3 * local_54;
  local_64 = fVar3 * local_58 - local_50 * fVar1;
  local_60 = local_54 * fVar1 - fVar2 * local_58;
  fVar8 = FUN_004f9440(&local_68);
  fVar8 = fVar8 * (float10)dVar4;
  *(float *)((int)this + 0x58) = (float)fVar8;
  if (fVar8 * fVar8 <= (float10)1e-19) {
    local_68 = 1.0;
    local_64 = 0.0;
    local_60 = 0.0;
  }
  else {
    fVar8 = (float10)dVar4 / fVar8;
    local_68 = (float)((float10)local_68 * fVar8);
    local_64 = (float)((float10)local_64 * fVar8);
    local_60 = (float)((float10)local_60 * fVar8);
  }
  *param_4 = local_60 * fVar2 - local_64 * fVar3;
  param_4[1] = fVar3 * local_68 - local_60 * fVar1;
  param_4[2] = local_64 * fVar1 - fVar2 * local_68;
  FUN_004f9780(param_4);
  dVar5 = param_1[1];
  fVar6 = *(float *)(param_1 + 2);
  fVar7 = *(float *)((int)param_1 + 0x14);
  *(double *)(param_4 + 8) = *param_1;
  param_4[0xc] = fVar6;
  *(double *)(param_4 + 10) = dVar5;
  param_4[0xd] = fVar7;
  FUN_00506440(param_4 + 0x20,&local_68);
  if ((char)*(uint *)((int)this + 0x60) == '\x01') {
    *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xffffff00;
    dVar4 = dVar4 * dVar4 *
            ((double)local_58 * (double)fVar1 +
            (double)local_54 * (double)fVar2 + (double)fVar3 * (double)local_50);
    if ((dVar4 < 0.0) || (1.0 < dVar4)) {
      param_4[0x17] = (float)((uint)param_4[0x17] & 0xfffffdff | 0x100);
    }
  }
  return;
}


