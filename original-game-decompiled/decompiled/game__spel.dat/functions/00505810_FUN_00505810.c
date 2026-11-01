
/* ==== FUN_00505810 @ 00505810 ==== 
 * signature: undefined __thiscall FUN_00505810(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4, float * param_5, undefined4 * param_6)
 * body: 00505810-00505cad
 */

void __thiscall
FUN_00505810(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4,float *param_5,
            undefined4 *param_6)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  double local_190;
  double local_188;
  double local_180;
  double local_170;
  double local_168;
  double local_160;
  double local_150;
  double local_148;
  double local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  FUN_0050a110(param_1,param_3,&local_190);
  FUN_0050a110((uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1 & 0xc)) + (int)param_1),param_3,
               &local_b0);
  FUN_0050a110(param_2,param_4,&local_150);
  FUN_0050a110((uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),param_4,
               &local_d0);
  local_48 = local_d0 - local_150;
  local_40 = local_c8 - local_148;
  local_38 = local_c0 - local_140;
  FUN_004f94a0(&local_48);
  local_f0 = local_b0 - local_190;
  local_e8 = local_a8 - local_188;
  local_e0 = local_a0 - local_180;
  FUN_004f94a0(&local_f0);
  FUN_004f99d0(&local_170,&local_f0,&local_48);
  local_90 = local_170 * local_170 + local_168 * local_168 + local_160 * local_160;
  if (local_90 <= 1e-24) {
    param_5[0x17] = (float)((uint)param_5[0x17] & 0xfffffdff | 0x100);
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    *(undefined4 *)((int)this + 0x58) = DAT_0074d630;
    *(double *)(param_5 + 8) = local_190;
    *(double *)(param_5 + 10) = local_188;
    *(double *)(param_5 + 0xc) = local_180;
    *param_5 = 1.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[0x20] = 0.0;
    param_5[0x21] = 1.0;
    param_5[0x22] = 0.0;
  }
  else {
    FUN_004f99d0(&local_110,&local_f0,&local_170);
    FUN_004f99d0(&local_130,&local_48,&local_170);
    dVar1 = local_110 * local_150 + local_108 * local_148 + local_100 * local_140;
    dVar1 = (dVar1 - (local_110 * local_190 + local_108 * local_188 + local_100 * local_180)) *
            (1.0 / (dVar1 - (local_110 * local_d0 + local_108 * local_c8 + local_100 * local_c0)));
    dVar2 = local_130 * local_190 + local_128 * local_188 + local_120 * local_180;
    dVar2 = (dVar2 - (local_130 * local_150 + local_128 * local_148 + local_120 * local_140)) *
            (1.0 / (dVar2 - (local_130 * local_b0 + local_128 * local_a8 + local_120 * local_a0)));
    FUN_004f9360(&local_68,&local_190,&local_b0,dVar2);
    FUN_004f9360(&local_28,&local_150,&local_d0,dVar1);
    local_88 = local_28 - local_68;
    local_80 = local_20 - local_60;
    local_78 = local_18 - local_58;
    fVar3 = FUN_004f9470(&local_88);
    if (fVar3 <= (float10)1e-19) {
      *(undefined4 *)((int)this + 0x58) = 0;
      fVar3 = (float10)1.0 / SQRT((float10)local_90);
      *param_5 = (float)(fVar3 * (float10)local_170);
      param_5[1] = (float)((float10)local_168 * fVar3);
      local_78 = local_160;
    }
    else {
      *(float *)((int)this + 0x58) = (float)fVar3;
      fVar3 = (float10)1.0 / fVar3;
      *param_5 = (float)((float10)local_88 * fVar3);
      param_5[1] = (float)((float10)local_80 * fVar3);
    }
    param_5[2] = (float)((float10)local_78 * fVar3);
    param_5[0x20] = (float)local_f0;
    param_5[0x21] = (float)local_e8;
    param_5[0x22] = (float)local_e0;
    *(double *)(param_5 + 8) = local_68;
    *(double *)(param_5 + 10) = local_60;
    *(double *)(param_5 + 0xc) = local_58;
    if (((char)*(uint *)((int)this + 0x60) == '\x01') &&
       ((((*(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xffffff00, dVar1 < 0.0 ||
          (1.0 < dVar1)) || (dVar2 < 0.0)) || (1.0 < dVar2)))) {
      param_5[0x17] = (float)((uint)param_5[0x17] & 0xfffffdff | 0x100);
      return;
    }
  }
  return;
}


