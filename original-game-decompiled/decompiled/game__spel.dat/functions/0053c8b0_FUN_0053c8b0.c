
/* ==== FUN_0053c8b0 @ 0053c8b0 ==== 
 * signature: undefined4 __cdecl FUN_0053c8b0(int * param_1)
 * body: 0053c8b0-0053cadc
 */

undefined4 __cdecl FUN_0053c8b0(int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  undefined8 local_18;
  undefined4 uStack_c;
  
  iVar5 = *(int *)(*param_1 + 0x28);
  if (*(int *)(iVar5 + 0x40) == 0) {
    puVar11 = FUN_004fe470(*(void **)(*(int *)(iVar5 + 0x18) + 0xa4),iVar5);
    *(undefined4 **)(iVar5 + 0x40) = puVar11;
  }
  *(int *)(*(int *)(iVar5 + 0x40) + 4) = *(int *)(*(int *)(iVar5 + 0x40) + 4) + 1;
  if ((*(int *)(iVar5 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar5 + 0x40) < *(int *)(*(int *)(iVar5 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar5 + 0x40));
  }
  iVar5 = *(int *)(iVar5 + 0x40);
  iVar6 = *(int *)(*param_1 + 0x44);
  if (*(int *)(iVar6 + 0x40) == 0) {
    puVar11 = FUN_004fe470(*(void **)(*(int *)(iVar6 + 0x18) + 0xa4),iVar6);
    *(undefined4 **)(iVar6 + 0x40) = puVar11;
  }
  *(int *)(*(int *)(iVar6 + 0x40) + 4) = *(int *)(*(int *)(iVar6 + 0x40) + 4) + 1;
  if ((*(int *)(iVar6 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar6 + 0x40) < *(int *)(*(int *)(iVar6 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar6 + 0x40));
  }
  iVar6 = *(int *)(iVar6 + 0x40);
  iVar7 = *param_1;
  dVar1 = *(double *)(iVar5 + 0x98);
  dVar2 = *(double *)(iVar6 + 0x98);
  dVar3 = *(double *)(iVar5 + 0xa0);
  dVar4 = *(double *)(iVar6 + 0xa0);
  *(float *)(iVar7 + 0x68) =
       (float)((float10)*(double *)(iVar5 + 0x90) - (float10)*(double *)(iVar6 + 0x90));
  *(float *)(iVar7 + 0x6c) = (float)((float10)dVar1 - (float10)dVar2);
  *(float *)(iVar7 + 0x70) = (float)(dVar3 - dVar4);
  iVar7 = *param_1;
  fVar8 = *(float *)(iVar7 + 0x70) * *(float *)(iVar7 + 0x70) +
          *(float *)(iVar7 + 0x6c) * *(float *)(iVar7 + 0x6c) +
          *(float *)(iVar7 + 0x68) * *(float *)(iVar7 + 0x68);
  uStack_c = (int)((ulonglong)(double)fVar8 >> 0x20);
  fVar10 = fVar8 * 0.5;
  local_18 = (double)((ulonglong)((0x7ff00000 - uStack_c >> 1) + 0x1ff00000) << 0x20);
  fVar9 = (float)local_18;
  fVar9 = ((0.5 - fVar10 * fVar9 * fVar9) + 1.0) * fVar9;
  fVar9 = ((0.5 - fVar9 * fVar9 * fVar10) + 1.0) * fVar9;
  fVar9 = ((0.5 - fVar9 * fVar9 * fVar10) + 1.0) * fVar9;
  fVar9 = ((0.5 - fVar9 * fVar9 * fVar10) + 1.0) * fVar9;
  fVar9 = ((0.5 - fVar9 * fVar9 * fVar10) + 1.0) * fVar9;
  *(float *)(iVar7 + 0x54) = fVar9 * fVar8 - *(float *)(iVar7 + 0x50);
  iVar7 = *param_1;
  *(float *)(iVar7 + 0x68) = *(float *)(iVar7 + 0x68) * fVar9;
  *(float *)(iVar7 + 0x6c) = *(float *)(iVar7 + 0x6c) * fVar9;
  *(float *)(iVar7 + 0x70) = *(float *)(iVar7 + 0x70) * fVar9;
  iVar7 = *param_1;
  *(float *)(iVar7 + 0x58) =
       (float)(((float10)*(double *)(iVar5 + 0xb0) - (float10)*(double *)(iVar6 + 0xb0)) *
               (float10)*(float *)(iVar7 + 0x68) +
              ((float10)*(double *)(iVar5 + 0xc0) - (float10)*(double *)(iVar6 + 0xc0)) *
              (float10)*(float *)(iVar7 + 0x70) +
              ((float10)*(double *)(iVar5 + 0xb8) - (float10)*(double *)(iVar6 + 0xb8)) *
              (float10)*(float *)(iVar7 + 0x6c));
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
  *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
  return 1;
}


