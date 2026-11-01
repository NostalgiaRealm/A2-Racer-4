
/* ==== FUN_00549570 @ 00549570 ==== 
 * signature: int __thiscall FUN_00549570(void * this, int param_1, int * param_2)
 * body: 00549570-005498c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00549570(void *this,int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  int local_84;
  int local_80;
  int local_7c;
  uint uStack_5c;
  uint uStack_54;
  float local_48 [4];
  float local_38 [4];
  float local_28 [4];
  float local_18 [5];
  
  iVar6 = *(int *)((int)this + 8) * *(int *)((int)this + 0xc) + -1;
  while (-1 < iVar6) {
    iVar8 = *(int *)((int)this + 0x10);
    iVar6 = iVar6 + -1;
    *(undefined4 *)(iVar8 + 8 + iVar6 * 8) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar6 * 8) = 0;
  }
  local_80 = 0;
  local_84 = 0;
  if (*(short *)((int)this + 0x32) != 0) {
    do {
      fVar3 = 0.0;
      pfVar1 = *(float **)(*(int *)((int)this + 0x34) + local_84 * 4);
      fVar2 = pfVar1[0x1e];
      if (fVar2 != 0.0) {
        fVar9 = FUN_005050f0((float *)((int)fVar2 + 0x94),pfVar1 + 0x30);
        fVar10 = FUN_005050f0((float *)((int)fVar2 + 0xa4),pfVar1);
        fVar3 = (float)(fVar10 + (float10)(double)fVar9);
      }
      fVar2 = pfVar1[0x1f];
      if (fVar2 != 0.0) {
        fVar9 = FUN_005050f0((float *)((int)fVar2 + 0x94),pfVar1 + 0x34);
        fVar10 = FUN_005050f0((float *)((int)fVar2 + 0xa4),pfVar1);
        fVar3 = (float)((float10)fVar3 - (fVar10 + (float10)(double)fVar9));
      }
      fVar2 = 1.0;
      if (DAT_0074d62c - pfVar1[0x1b] < 0.0) {
        fVar2 = 20.0;
      }
      *(double *)(*(int *)((int)this + 0x14) + local_84 * 8) =
           (double)(fVar2 * (DAT_0074d62c - pfVar1[0x1b]) + fVar3);
      if (pfVar1[0x1a] != 0.0) {
        *param_2 = local_84;
        param_2 = param_2 + 1;
        local_80 = local_80 + 1;
      }
      fVar2 = pfVar1[0x1e];
      if (fVar2 != 0.0) {
        FUN_0053f410(local_48,pfVar1 + 0x30,(float *)((int)fVar2 + 0x34));
        FUN_00549910(local_48,local_48);
        FUN_005498d0(local_38,pfVar1,(double)(*(float *)((int)fVar2 + 0x40) * -1.0));
        fVar2 = pfVar1[0x18];
        fVar3 = pfVar1[0x1e];
        local_7c = 0;
        if (*(short *)((int)fVar2 + 2) != 0) {
          do {
            iVar6 = (int)*(short *)(*(int *)(*(int *)(*(int *)((int)fVar2 + 4) + local_7c * 4) +
                                            0x40) + 0x58);
            if (-1 < iVar6) {
              pfVar4 = *(float **)(*(int *)((int)this + 0x34) + iVar6 * 4);
              if (pfVar4[0x1e] != fVar3) {
                uStack_5c = 0x3ff00000;
              }
              else {
                uStack_5c = 0xbff00000;
              }
              uVar7 = (uint)(pfVar4[0x1e] != fVar3);
              if (pfVar4[uVar7 + 0x1e] != 0.0) {
                fVar9 = FUN_005050f0(local_48,pfVar4 + (uVar7 + 0xc) * 4);
                fVar10 = FUN_005050f0(local_38,pfVar4);
                iVar6 = iVar6 * *(int *)((int)this + 0xc) + local_84;
                *(double *)(*(int *)((int)this + 0x10) + iVar6 * 8) =
                     (double)((fVar10 + (float10)(double)fVar9) *
                              (float10)(double)((ulonglong)uStack_5c << 0x20) +
                             (float10)*(double *)(*(int *)((int)this + 0x10) + iVar6 * 8));
              }
            }
            local_7c = local_7c + 1;
          } while (local_7c < (int)(uint)*(ushort *)((int)fVar2 + 2));
        }
      }
      fVar2 = pfVar1[0x1f];
      if (fVar2 != 0.0) {
        FUN_0053f410(local_18,pfVar1 + 0x34,(float *)((int)fVar2 + 0x34));
        FUN_005498d0(local_28,pfVar1,(double)*(float *)((int)fVar2 + 0x40));
        fVar2 = pfVar1[0x19];
        fVar3 = pfVar1[0x1f];
        iVar6 = 0;
        if (*(short *)((int)fVar2 + 2) != 0) {
          do {
            iVar8 = (int)*(short *)(*(int *)(*(int *)(*(int *)((int)fVar2 + 4) + iVar6 * 4) + 0x40)
                                   + 0x58);
            if (-1 < iVar8) {
              pfVar1 = *(float **)(*(int *)((int)this + 0x34) + iVar8 * 4);
              if (pfVar1[0x1e] != fVar3) {
                uStack_54 = 0x3ff00000;
              }
              else {
                uStack_54 = 0xbff00000;
              }
              uVar7 = (uint)(pfVar1[0x1e] != fVar3);
              if (pfVar1[uVar7 + 0x1e] != 0.0) {
                fVar9 = FUN_00549db0(pfVar1,uVar7,local_18,local_28);
                iVar8 = iVar8 * *(int *)((int)this + 0xc) + local_84;
                *(double *)(*(int *)((int)this + 0x10) + iVar8 * 8) =
                     (double)(fVar9 * (float10)(double)((ulonglong)uStack_54 << 0x20) +
                             (float10)*(double *)(*(int *)((int)this + 0x10) + iVar8 * 8));
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)((int)fVar2 + 2));
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 < (int)(uint)*(ushort *)((int)this + 0x32));
  }
  iVar6 = 0;
  for (puVar5 = *(undefined4 **)(param_1 + 0x20); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    if ((-1 < *(short *)(puVar5[0x10] + 0x58)) && (*(short *)(puVar5[0x10] + 0x58) != iVar6)) {
      _DAT_00000000 = 0;
    }
    iVar6 = iVar6 + 1;
  }
  return local_80;
}


