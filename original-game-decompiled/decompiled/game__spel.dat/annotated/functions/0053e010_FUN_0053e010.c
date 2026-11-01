
/* ==== FUN_0053e010 @ 0053e010 ==== 
 * signature: undefined __thiscall FUN_0053e010(void * this, double * param_1)
 * body: 0053e010-0053e171
 */

void __thiscall FUN_0053e010(void *this,double *param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  float fVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float local_20;
  
  uVar5 = (uint)*(ushort *)((int)this + 0x36);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    fVar3 = 0.0;
    iVar1 = *(int *)(*(int *)((int)this + 0x38) + uVar5 * 4);
    uVar8 = (uint)*(ushort *)(iVar1 + 2);
    iVar7 = uVar8 - 1;
    if (-1 < iVar7) {
      piVar6 = (int *)(*(int *)(iVar1 + 4) + iVar7 * 4);
      do {
        iVar2 = *piVar6;
        piVar6 = piVar6 + -1;
        uVar8 = uVar8 - 1;
        fVar3 = *(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x44) * *(float *)(iVar2 + 0x30) +
                fVar3;
      } while (uVar8 != 0);
    }
    local_20 = 0.0;
    fVar3 = fVar3 * (float)*param_1 * (float)*param_1;
    if (-1 < iVar7) {
      do {
        this_00 = *(void **)(*(int *)(iVar1 + 4) + iVar7 * 4);
        fVar4 = *(float *)((int)this_00 + 0x3c) * *(float *)((int)this_00 + 0x3c) +
                *(float *)((int)this_00 + 0x38) * *(float *)((int)this_00 + 0x38);
        if (fVar3 * fVar3 + 1e-06 < fVar4) {
          fVar9 = FUN_004f9200(fVar4);
          *(uint *)((int)this_00 + 0x60) =
               CONCAT31((int3)((uint)*(undefined4 *)((int)this_00 + 0x60) >> 8),1);
          *(float *)((int)this_00 + 0x48) =
               (float)((fVar9 * (float10)fVar4 - (float10)fVar3) *
                       (float10)*(float *)((int)this_00 + 0x54) *
                       (float10)*(float *)((int)this_00 + 0x44) +
                      (float10)*(float *)((int)this_00 + 0x48));
          *(float *)((int)this_00 + 0x38) =
               (float)((float10)*(float *)((int)this_00 + 0x38) * fVar9 * (float10)fVar3);
          *(float *)((int)this_00 + 0x3c) =
               (float)((float10)*(float *)((int)this_00 + 0x3c) * fVar9 * (float10)fVar3);
        }
        if (*(char *)((int)this_00 + 0x34) == '\x01') {
          FUN_0053dca0(this_00,param_1);
        }
        else {
          fVar9 = FUN_0053d590((int)this_00,param_1);
          local_20 = (float)(fVar9 + (float10)local_20);
        }
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      if (0.0 < local_20) {
        *(float *)(iVar1 + 0x28) = local_20 + *(float *)(iVar1 + 0x28);
      }
    }
  }
  return;
}


