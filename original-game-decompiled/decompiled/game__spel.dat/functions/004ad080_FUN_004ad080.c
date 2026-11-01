
/* ==== FUN_004ad080 @ 004ad080 ==== 
 * signature: undefined __thiscall FUN_004ad080(void * this, float * param_1, float * param_2)
 * body: 004ad080-004ad2a0
 */

void __thiscall FUN_004ad080(void *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)((int)this + 0x40);
  local_8 = 0.0;
  local_c = -(*(float *)((int)this + 0x3c) - param_2[2]) +
            -(param_1[2] - *(float *)((int)this + 0x3c));
  local_4 = (*param_1 - *(float *)((int)this + 0x34)) + (*(float *)((int)this + 0x34) - *param_2);
  *pfVar1 = local_c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(float *)((int)this + 0x48) = local_4;
  *(undefined4 *)((int)this + 0x44) = 0;
  fVar5 = (float10)FUN_0041e120();
  fVar5 = SQRT(fVar5);
  pfVar2 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar1 / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x44) / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x48) / fVar5));
  *pfVar1 = *pfVar2;
  *(float *)((int)this + 0x44) = pfVar2[1];
  *(float *)((int)this + 0x48) = pfVar2[2];
  local_c = *param_2 - *(float *)((int)this + 0x34);
  local_8 = param_2[1] - *(float *)((int)this + 0x38);
  local_4 = param_2[2] - *(float *)((int)this + 0x3c);
  pfVar2 = (float *)((int)this + 0x58);
  *pfVar2 = local_c;
  *(float *)((int)this + 0x5c) = local_8;
  *(float *)((int)this + 0x60) = local_4;
  fVar5 = (float10)FUN_0041e120();
  fVar5 = SQRT(fVar5);
  pfVar3 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar2 / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x5c) / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x60) / fVar5));
  *pfVar2 = *pfVar3;
  *(float *)((int)this + 0x5c) = pfVar3[1];
  *(float *)((int)this + 0x60) = pfVar3[2];
  local_c = *(float *)((int)this + 0x48) * *(float *)((int)this + 0x5c) -
            *(float *)((int)this + 0x44) * *(float *)((int)this + 0x60);
  local_8 = *(float *)((int)this + 0x60) * *pfVar1 - *(float *)((int)this + 0x48) * *pfVar2;
  pfVar3 = (float *)((int)this + 0x4c);
  local_4 = *(float *)((int)this + 0x44) * *pfVar2 - *(float *)((int)this + 0x5c) * *pfVar1;
  *pfVar3 = local_c;
  *(float *)((int)this + 0x50) = local_8;
  *(float *)((int)this + 0x54) = local_4;
  fVar5 = (float10)FUN_0041e120();
  fVar5 = SQRT(fVar5);
  pfVar2 = (float *)FUN_004066c0(&local_c,(float)((float10)*pfVar3 / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x50) / fVar5),
                                 (float)((float10)*(float *)((int)this + 0x54) / fVar5));
  *pfVar3 = *pfVar2;
  *(float *)((int)this + 0x50) = pfVar2[1];
  *(float *)((int)this + 0x54) = pfVar2[2];
  *(float *)((int)this + 0xec) =
       *pfVar3 * *(float *)((int)this + 0x34) +
       *(float *)((int)this + 0x38) * *(float *)((int)this + 0x50) +
       *(float *)((int)this + 0x54) * *(float *)((int)this + 0x3c);
  pfVar2 = (float *)&DAT_0073b538;
  pfVar3 = (float *)((int)this + 0x6c);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)((int)this + 0x6c) = *pfVar1;
  *(float *)((int)this + 0x70) = *pfVar1;
  *(float *)((int)this + 0x74) = *pfVar1;
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x60);
  return;
}


