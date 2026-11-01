
/* ==== FUN_0053dca0 @ 0053dca0 ==== 
 * signature: undefined __thiscall FUN_0053dca0(void * this, double * param_1)
 * body: 0053dca0-0053e005
 */

void __thiscall FUN_0053dca0(void *this,double *param_1)

{
  byte *pbVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float *local_11c;
  double local_118;
  double local_110;
  float local_100 [4];
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  double local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float afStack_b0 [8];
  float afStack_90 [8];
  double local_70;
  double local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50 [6];
  float local_38;
  double local_30;
  float local_28 [9];
  
  fVar6 = (float10)FUN_0053d2c0(this,&local_e8);
  local_30 = (double)fVar6;
  local_100[0] = *(float *)(*(int *)((int)this + 0x10) + 0xa8);
  local_100[1] = (float)*(undefined4 *)(*(int *)((int)this + 0x24) + 0xa8);
  pfVar3 = local_100;
  pfVar4 = local_50 + 2;
  local_11c = (float *)0x2;
  local_d8 = (double)(*(float *)((int)this + 0x54) * *(float *)((int)this + 0x44) * (float)*param_1)
  ;
  do {
    if ((*(byte *)*pfVar3 & 0xc) == 0) {
      FUN_004f3f20((byte *)*pfVar3,
                   (float *)(*(int *)((int)this + 0x40) + (0xa0 - (int)(local_50 + 2)) + (int)pfVar4
                            ),pfVar4 + -2);
    }
    else {
      pfVar4[-2] = 0.0;
      pfVar4[-1] = 0.0;
      *pfVar4 = 0.0;
    }
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 4;
    local_11c = (float *)((int)local_11c + -1);
  } while (local_11c != (float *)0x0);
  local_11c = local_100;
  local_110 = 0.0;
  local_118 = 1.0;
  iVar5 = 0;
  local_70 = (double)((local_50[0] - local_50[4]) * local_e8 +
                     (local_50[1] - local_50[5]) * local_e4 + (local_50[2] - local_38) * local_e0);
  do {
    *(undefined4 *)((int)afStack_90 + iVar5) = 0;
    *(undefined4 *)((int)afStack_90 + iVar5 + 4) = 0;
    *(undefined4 *)((int)afStack_90 + iVar5 + 8) = 0;
    pbVar1 = (byte *)*local_11c;
    *(undefined4 *)((int)afStack_b0 + iVar5) = 0;
    *(undefined4 *)((int)afStack_b0 + iVar5 + 4) = 0;
    *(undefined4 *)((int)afStack_b0 + iVar5 + 8) = 0;
    if ((*pbVar1 & 0xc) == 0) {
      local_100[3] = local_e4 * (float)local_118;
      local_f0 = local_e0 * (float)local_118;
      local_68 = (double)local_f0;
      local_100[2] = local_e8 * (float)local_118;
      FUN_004fafa0(pbVar1 + 0x128,local_100 + 2,(float *)((int)local_28 + iVar5));
      FUN_004f42f0(pbVar1,(float *)(iVar5 + 0xa0 + *(int *)((int)this + 0x40)),
                   (float *)((int)local_28 + iVar5),local_100 + 2,&local_c0,&local_d0);
      *(float *)((int)afStack_90 + iVar5) = local_c0;
      *(undefined4 *)((int)afStack_90 + iVar5 + 4) = local_bc;
      *(undefined4 *)((int)afStack_90 + iVar5 + 8) = local_b8;
      *(float *)((int)afStack_b0 + iVar5) = local_d0;
      *(undefined4 *)((int)afStack_b0 + iVar5 + 4) = local_cc;
      *(undefined4 *)((int)afStack_b0 + iVar5 + 8) = local_c8;
      FUN_004f3390(pbVar1,(float *)(iVar5 + 0xa0 + *(int *)((int)this + 0x40)),&local_c0,&local_d0,
                   &local_60);
      local_110 = (double)(local_60 * local_100[2] + local_5c * local_100[3] + local_58 * local_f0 +
                          (float)local_110);
    }
    iVar2 = 0;
    local_118 = local_118 * -1.0;
    iVar5 = iVar5 + 0x10;
    local_11c = local_11c + 1;
  } while (iVar5 < 0x20);
  if (1e-19 < local_110) {
    fVar6 = ((float10)local_30 * (float10)*param_1 - (float10)local_70) / (float10)local_110;
    if ((float10)local_d8 < ABS(fVar6)) {
      fVar6 = (float10)local_d8;
    }
    pfVar3 = local_100;
    do {
      pbVar1 = (byte *)*pfVar3;
      if ((*pbVar1 & 0xc) == 0) {
        *(float *)(pbVar1 + 0xa4) =
             (float)((float10)*(float *)((int)afStack_90 + iVar2) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0xa4));
        *(float *)(pbVar1 + 0xa8) =
             (float)((float10)*(float *)((int)afStack_90 + iVar2 + 4) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0xa8));
        *(float *)(pbVar1 + 0xac) =
             (float)((float10)*(float *)((int)afStack_90 + iVar2 + 8) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0xac));
        *(float *)(pbVar1 + 0x94) =
             (float)((float10)*(float *)((int)afStack_b0 + iVar2) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0x94));
        *(float *)(pbVar1 + 0x98) =
             (float)((float10)*(float *)((int)afStack_b0 + iVar2 + 4) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0x98));
        *(float *)(pbVar1 + 0x9c) =
             (float)((float10)*(float *)((int)afStack_b0 + iVar2 + 8) * fVar6 +
                    (float10)*(float *)(pbVar1 + 0x9c));
      }
      iVar2 = iVar2 + 0x10;
      pfVar3 = pfVar3 + 1;
    } while (iVar2 < 0x20);
  }
  return;
}


