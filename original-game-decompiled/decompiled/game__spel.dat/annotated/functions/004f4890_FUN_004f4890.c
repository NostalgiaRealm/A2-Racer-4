
/* ==== FUN_004f4890 @ 004f4890 ==== 
 * signature: undefined __fastcall FUN_004f4890(int param_1)
 * body: 004f4890-004f49fd
 */

void __fastcall FUN_004f4890(int param_1)

{
  double *this;
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  double *pdVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 local_28 [36];
  
  iVar6 = FUN_004f5400(*(void **)(*(int *)(param_1 + 0xc) + 0xb4),0x38);
  *(int *)(param_1 + 0x22c) = iVar6;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  this = (double *)(param_1 + 0x108);
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  dVar3 = *(double *)(*(int *)(param_1 + 0xc) + 0x120);
  puVar8 = *(undefined4 **)(param_1 + 0x22c);
  *puVar8 = *(undefined4 *)(param_1 + 0x94);
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  pdVar7 = this;
  puVar8 = (undefined4 *)(*(int *)(param_1 + 0x22c) + 0x10);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pdVar7;
    pdVar7 = (double *)((int)pdVar7 + 4);
    puVar8 = puVar8 + 1;
  }
  FUN_004f9130(local_28,(double *)(param_1 + 0xe8),this);
  FUN_004f8d60(this,(double *)(param_1 + 0xe8),this,
               (dVar3 - *(double *)(param_1 + 0x68)) * (double)*(float *)(param_1 + 0x70));
  FUN_004f8b00(this,(double *)(param_1 + 0x128));
  dVar3 = dVar3 - *(double *)(param_1 + 0x68);
  dVar4 = (double)*(float *)(param_1 + 0xdc) * dVar3 + *(double *)(param_1 + 0xc0);
  local_38 = SUB84(dVar4,0);
  uStack_34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar4 = (double)*(float *)(param_1 + 0xe0) * dVar3 + *(double *)(param_1 + 200);
  local_30 = SUB84(dVar4,0);
  *(undefined4 *)(param_1 + 400) = local_38;
  uStack_2c = (undefined4)((ulonglong)dVar4 >> 0x20);
  *(undefined4 *)(param_1 + 0x198) = local_30;
  *(undefined4 *)(param_1 + 0x194) = uStack_34;
  *(double *)(param_1 + 0x188) =
       (double)*(float *)(param_1 + 0xd8) * dVar3 + *(double *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x19c) = uStack_2c;
  fVar5 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x70);
  fVar9 = (float10)FUN_00559e50();
  *(float *)(param_1 + 0x94) = (float)(fVar9 * (float10)fVar5);
  fVar9 = (float10)FUN_00559e50();
  *(float *)(param_1 + 0x98) = (float)(fVar9 * (float10)fVar5);
  fVar9 = (float10)FUN_00559e50();
  *(float *)(param_1 + 0x9c) = (float)(fVar9 * (float10)fVar5);
  return;
}


