
/* ==== FUN_005122a0 @ 005122a0 ==== 
 * signature: undefined __fastcall FUN_005122a0(int param_1)
 * body: 005122a0-005125be
 */

void __fastcall FUN_005122a0(int param_1)

{
  double *this;
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  longlong lVar12;
  int local_80;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  undefined8 local_38;
  double local_28 [4];
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar9 = (uint)*(ushort *)(param_1 + 0x22);
  *(uint *)(param_1 + 4) = uVar9;
  puVar5 = FUN_004f5aa0(uVar9 + 1,8);
  *(undefined4 **)(param_1 + 0x1c) = puVar5;
  *(undefined2 *)((int)puVar5 + 2) = 1;
  iVar8 = 1;
  local_80 = 0;
  if (uVar9 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24) + local_80 * 4);
      piVar6 = operator_new(0x40);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar10 = piVar6;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
      }
      if (*(ushort *)(param_1 + 0x94) <= *(ushort *)(param_1 + 0x96)) {
        FUN_004f6060((ushort *)(param_1 + 0x94));
      }
      *(int **)(*(int *)(param_1 + 0x98) + (uint)*(ushort *)(param_1 + 0x96) * 4) = piVar6;
      *(short *)(param_1 + 0x96) = *(short *)(param_1 + 0x96) + 1;
      FUN_00508cf0(piVar1,local_28,&local_68);
      this = (double *)(piVar6 + 2);
      FUN_004f9360(this,&local_68,local_28,0.5);
      local_40 = local_60 - *(double *)(piVar6 + 4);
      local_38 = local_58 - *(double *)(piVar6 + 6);
      local_48 = local_68 - *this;
      fVar11 = FUN_004f9470(&local_48);
      *(double *)(piVar6 + 10) = (double)fVar11;
      if ((float10)*this - fVar11 < (float10)*(float *)(param_1 + 0x38)) {
        *(float *)(param_1 + 0x38) = (float)((float10)*this - fVar11);
      }
      if ((float10)*(float *)(param_1 + 0x48) < (float10)*(double *)(piVar6 + 10) + (float10)*this)
      {
        *(float *)(param_1 + 0x48) = (float)((float10)*(double *)(piVar6 + 10) + (float10)*this);
      }
      if ((float10)*(double *)(piVar6 + 4) - (float10)*(double *)(piVar6 + 10) <
          (float10)*(float *)(param_1 + 0x3c)) {
        *(float *)(param_1 + 0x3c) =
             (float)((float10)*(double *)(piVar6 + 4) - (float10)*(double *)(piVar6 + 10));
      }
      if ((float10)*(float *)(param_1 + 0x4c) <
          (float10)*(double *)(piVar6 + 10) + (float10)*(double *)(piVar6 + 4)) {
        *(float *)(param_1 + 0x4c) =
             (float)((float10)*(double *)(piVar6 + 10) + (float10)*(double *)(piVar6 + 4));
      }
      if ((float10)*(double *)(piVar6 + 6) - (float10)*(double *)(piVar6 + 10) <
          (float10)*(float *)(param_1 + 0x40)) {
        *(float *)(param_1 + 0x40) =
             (float)((float10)*(double *)(piVar6 + 6) - (float10)*(double *)(piVar6 + 10));
      }
      if ((float10)*(float *)(param_1 + 0x50) <
          (float10)*(double *)(piVar6 + 10) + (float10)*(double *)(piVar6 + 6)) {
        *(float *)(param_1 + 0x50) =
             (float)((float10)*(double *)(piVar6 + 10) + (float10)*(double *)(piVar6 + 6));
      }
      lVar12 = __ftol();
      *(char *)(piVar6 + 0xc) = (char)lVar12 + '\x01';
      lVar12 = __ftol();
      *(char *)((int)piVar6 + 0x31) = (char)lVar12 + '\x01';
      lVar12 = __ftol();
      *(char *)((int)piVar6 + 0x32) = (char)lVar12 + '\x01';
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x40;
      piVar6[0xd] = (int)piVar1;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      *piVar6 = iVar8;
      *(short *)(*(int *)(param_1 + 0x1c) + iVar8 * 8) = (short)iVar8 + -1;
      *(short *)(*(int *)(param_1 + 0x1c) + 2 + iVar8 * 8) = (short)iVar8 + 1;
      *(int **)(*(int *)(param_1 + 0x1c) + 4 + iVar8 * 8) = piVar6;
      if (*(double *)(param_1 + 0x10) == 0.0) {
        *(int *)(param_1 + 0x10) = piVar6[10];
        *(int *)(param_1 + 0x14) = piVar6[0xb];
      }
      else if (*(double *)(piVar6 + 10) < *(double *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = piVar6[10];
        *(int *)(param_1 + 0x14) = piVar6[0xb];
      }
      if (*(ushort *)(param_1 + 0x30) <= *(ushort *)(param_1 + 0x32)) {
        FUN_004f6060((ushort *)(param_1 + 0x30));
      }
      *(int **)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x32) * 4) = piVar6;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
      iVar8 = iVar8 + 1;
      local_80 = local_80 + 1;
    } while (local_80 < (int)uVar9);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x1c) + -6 + iVar8 * 8) = 0;
  if (1 < local_80) {
    fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38);
    fVar3 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40);
    if (fVar2 < fVar3) {
      if (fVar4 <= fVar3) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        return;
      }
      *(undefined4 *)(param_1 + 0x58) = 2;
      return;
    }
    if (fVar2 < fVar4) {
      *(undefined4 *)(param_1 + 0x58) = 2;
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


