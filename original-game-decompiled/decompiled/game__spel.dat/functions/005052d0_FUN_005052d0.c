
/* ==== FUN_005052d0 @ 005052d0 ==== 
 * signature: undefined __thiscall FUN_005052d0(void * this, double * param_1, uint * param_2, int * param_3, float * param_4)
 * body: 005052d0-005054a3
 */

void __thiscall FUN_005052d0(void *this,double *param_1,uint *param_2,int *param_3,float *param_4)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 local_88;
  uint local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_58;
  float local_54;
  float local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  dVar1 = param_1[1];
  fVar2 = *(float *)((int)param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 2);
  *(double *)(param_4 + 8) = *param_1;
  param_4[0xc] = fVar3;
  *(double *)(param_4 + 10) = dVar1;
  param_4[0xd] = fVar2;
  FUN_004fe7e0((void *)param_3[2],param_1,&local_48);
  if ((char)*(uint *)((int)this + 0x60) == '\x01') {
    *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xffffff00;
    FUN_005094e0((int *)param_3[1],(uint)param_2,&local_48,(int)&local_88);
    if (((local_88._4_4_ | local_80 | (uint)local_88) & 0x80000000) != 0) {
      param_4[0x17] = (float)((uint)param_4[0x17] & 0xfffffdff | 0x100);
    }
  }
  FUN_00509c90(param_2,(int *)param_3[1],&local_78);
  fVar2 = *(float *)((int)this + 0x4c);
  local_70 = (double)((float)(double)CONCAT44(local_70._4_4_,(undefined4)local_70) * fVar2);
  local_88 = (double)((float)(double)CONCAT44(local_68._4_4_,(undefined4)local_68) * fVar2);
  local_78 = (double)((float)local_78 * fVar2);
  local_68 = local_88;
  FUN_004fe9e0((void *)param_3[2],&local_78,&local_28);
  pfVar4 = (float *)((*param_2 & 0xffff) * 0x10 + *param_3);
  pfVar5 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2) &
                     0xffff) * 0x10 + *param_3);
  *(float *)((int)this + 0x58) =
       (float)(((float10)local_48 * (float10)local_78 +
               (float10)local_70 * (float10)local_40 + (float10)local_68 * (float10)local_38) -
              ((float10)pfVar4[2] * (float10)local_68 +
              (float10)*pfVar4 * (float10)local_78 + (float10)pfVar4[1] * (float10)local_70));
  *param_4 = (float)((float10)local_28 * (float10)-1.0);
  param_4[1] = (float)((float10)local_20 * (float10)-1.0);
  param_4[2] = (float)((float10)local_18 * (float10)-1.0);
  local_54 = pfVar5[1] - pfVar4[1];
  local_50 = pfVar5[2] - pfVar4[2];
  local_88 = (double)local_50;
  local_58 = *pfVar5 - *pfVar4;
  FUN_004fea50((void *)param_3[2],&local_58,param_4 + 0x20);
  return;
}


