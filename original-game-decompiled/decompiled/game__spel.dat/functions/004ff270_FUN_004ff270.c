
/* ==== FUN_004ff270 @ 004ff270 ==== 
 * signature: double * __thiscall FUN_004ff270(void * this, int param_1, int param_2)
 * body: 004ff270-004ff39c
 */

double * __thiscall FUN_004ff270(void *this,int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(int *)((int)this + 100) = param_2;
  *(int *)((int)this + 0x60) = param_1;
  if (*(int *)(param_2 + 0x40) == 0) {
    puVar4 = FUN_004fe470(*(void **)(*(int *)(param_2 + 0x18) + 0xa4),param_2);
    *(undefined4 **)(param_2 + 0x40) = puVar4;
  }
  if ((*(int *)(param_2 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(param_2 + 0x40) < *(int *)(*(int *)(param_2 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(param_2 + 0x40));
  }
  this_00 = *(void **)(param_2 + 0x40);
  FUN_004fe7e0(this_00,(double *)(param_1 + 8),this);
  pfVar1 = (float *)((int)this + 0x50);
  FUN_004fe970(this_00,(float *)(param_1 + 0x58),pfVar1);
  fVar2 = *(float *)(param_1 + 0x68);
  *(float *)((int)this + 0x68) = fVar2;
  dVar3 = (double)(*(float *)((int)this + 0x54) * fVar2 + (float)*(double *)((int)this + 8));
  local_18 = SUB84(dVar3,0);
  uStack_14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar3 = (double)(*(float *)((int)this + 0x58) * fVar2 + (float)*(double *)((int)this + 0x10));
  local_10 = SUB84(dVar3,0);
  *(undefined4 *)((int)this + 0x38) = local_18;
  uStack_c = (undefined4)((ulonglong)dVar3 >> 0x20);
  *(undefined4 *)((int)this + 0x40) = local_10;
  *(undefined4 *)((int)this + 0x3c) = uStack_14;
  *(double *)((int)this + 0x30) = (double)(*pfVar1 * fVar2 + (float)*(double *)this);
  *(undefined4 *)((int)this + 0x44) = uStack_c;
  *(float *)((int)this + 0x20) = (float)*(double *)this;
  *(float *)((int)this + 0x24) = (float)*(double *)((int)this + 8);
  *(float *)((int)this + 0x28) = (float)*(double *)((int)this + 0x10);
  fVar2 = *(float *)((int)this + 0x68) * 0.5;
  *(float *)((int)this + 0x20) = *pfVar1 * fVar2 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = *(float *)((int)this + 0x54) * fVar2 + *(float *)((int)this + 0x24)
  ;
  *(float *)((int)this + 0x28) = *(float *)((int)this + 0x58) * fVar2 + *(float *)((int)this + 0x28)
  ;
  return this;
}


