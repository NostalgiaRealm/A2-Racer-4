
/* ==== FUN_0053cf50 @ 0053cf50 ==== 
 * signature: float10 __thiscall FUN_0053cf50(void * param_1, float * param_2)
 * body: 0053cf50-0053d2b4
 */

float10 __thiscall FUN_0053cf50(void *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_84;
  int *local_78;
  int *local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  double local_60;
  int local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  int local_30 [2];
  float local_28;
  float local_24;
  float local_20;
  float fStack_10;
  
  FUN_005045f0(param_1,local_30);
  pfVar4 = *(float **)((int)param_1 + 0x40);
  local_78 = local_30 + 1;
  local_74 = (int *)((int)param_1 + 0x10);
  local_54 = 0;
  piVar7 = local_30;
  do {
    if (*(int *)(*piVar7 + 8) != 0) {
      iVar5 = *(int *)(*local_74 + 0xa8);
      local_28 = (float)*(double *)(iVar5 + 0x128);
      local_24 = (float)*(double *)(iVar5 + 0x148);
      local_20 = (float)*(double *)(iVar5 + 0x168);
      FUN_004f9970(&local_40,&local_28,pfVar4);
      fVar8 = FUN_004f9440(&local_40);
      local_60 = (double)fVar8;
      fVar8 = (float10)(**(code **)(*(int *)*piVar7 + 4))();
      fVar9 = (float10)(*(code *)**(undefined4 **)*local_78)();
      if (*(float *)((int)param_1 + 0x44) < 1e-19) {
        return (float10)0.0;
      }
      iVar5 = *(int *)((int)param_1 + 0x40);
      local_60 = (double)((((float10)*(float *)((int)param_1 + 0x44) -
                           ((float10)*(float *)((int)param_1 + 0x44) -
                           fVar9 * (float10)(double)fVar8) * (float10)local_60) *
                          (float10)0.004999999888241291) / (float10)*(float *)((int)param_1 + 0x44))
      ;
      fStack_50 = *(float *)((int)param_1 + 0x38);
      fStack_4c = *(float *)(iVar5 + 0x84) * fStack_50;
      fStack_48 = *(float *)(iVar5 + 0x88) * fStack_50;
      fStack_50 = *(float *)(iVar5 + 0x80) * fStack_50;
      FUN_004fe070(&fStack_50,&fStack_50,(float *)(iVar5 + 0x90),
                   (double)*(float *)((int)param_1 + 0x3c));
      FUN_004f9780(&local_40);
      fVar1 = local_40 * fStack_50 + fStack_3c * fStack_4c + fStack_38 * fStack_48;
      dVar3 = (double)fVar1;
      if ((float)local_60 < ABS(fVar1)) {
        fStack_70 = fStack_50;
        fStack_6c = fStack_4c;
        fStack_68 = fStack_48;
        FUN_004fe070(&fStack_70,&fStack_70,&local_40,-dVar3);
        fVar1 = local_40 * (float)local_60;
        fVar2 = fStack_3c * (float)local_60;
        fStack_10 = fStack_38 * (float)local_60;
        if (dVar3 < 0.0) {
          fVar2 = fVar2 * -1.0;
          fVar1 = fVar1 * -1.0;
          fStack_10 = fStack_38 * (float)local_60 * -1.0;
        }
        fVar2 = fVar2 + fStack_6c;
        fVar6 = fStack_68 + fStack_10;
        fVar1 = fStack_70 + fVar1;
        *param_2 = fVar1;
        param_2[1] = fVar2;
        param_2[2] = fVar6;
        param_2[3] = fStack_84;
        *(float *)((int)param_1 + 0x38) =
             fVar1 * pfVar4[0x20] + fVar6 * pfVar4[0x22] + fVar2 * pfVar4[0x21];
        *(float *)((int)param_1 + 0x3c) =
             fVar1 * pfVar4[0x24] + fVar6 * pfVar4[0x26] + fVar2 * pfVar4[0x25];
      }
    }
    local_74 = local_74 + 5;
    local_54 = local_54 + 1;
    piVar7 = piVar7 + 1;
    local_78 = local_78 + -1;
  } while (local_54 < 2);
  fVar1 = *(float *)((int)param_1 + 0x38);
  fStack_70 = pfVar4[0x20] * fVar1;
  fVar2 = *(float *)((int)param_1 + 0x3c);
  fStack_6c = pfVar4[0x25] * fVar2 + pfVar4[0x21] * fVar1;
  fStack_68 = fVar1 * pfVar4[0x22] + pfVar4[0x26] * fVar2;
  *param_2 = pfVar4[0x24] * fVar2 + fStack_70;
  param_2[1] = fStack_6c;
  param_2[2] = fStack_68;
  fVar8 = FUN_004f9680(param_2);
  return fVar8;
}


