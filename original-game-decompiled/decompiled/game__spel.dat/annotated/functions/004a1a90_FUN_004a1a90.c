
/* ==== FUN_004a1a90 @ 004a1a90 ==== 
 * signature: undefined __thiscall FUN_004a1a90(void * this, float * param_1)
 * body: 004a1a90-004a1b4f
 */

void __thiscall FUN_004a1a90(void *this,float *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  double *pdVar5;
  float local_18c;
  float local_188;
  float local_184;
  double local_180;
  double local_178;
  double local_170;
  double local_160 [4];
  float local_140 [16];
  float local_100 [32];
  double local_80 [16];
  
  local_18c = *param_1;
  local_188 = param_1[1];
  local_184 = param_1[2];
  FUN_004a4180(&local_18c);
  local_180 = (double)local_18c;
  local_178 = (double)local_188;
  local_170 = (double)local_184;
  pfVar1 = (float *)FUN_004a5a40(local_100);
  pfVar4 = local_140;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_004a58b0(local_100,local_140);
  pdVar5 = local_80;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  FUN_004f8bf0(local_160,local_80);
  FUN_004f3130(*(void **)((int)this + 8),local_160,&local_180,0);
  return;
}


