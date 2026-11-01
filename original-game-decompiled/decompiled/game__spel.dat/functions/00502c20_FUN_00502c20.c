
/* ==== FUN_00502c20 @ 00502c20 ==== 
 * signature: undefined __fastcall FUN_00502c20(void * param_1)
 * body: 00502c20-00502db2
 */

void __fastcall FUN_00502c20(void *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float local_18;
  float local_14;
  float local_10;
  
  pfVar1 = (float *)((int)param_1 + 200);
  *pfVar1 = *(float *)((int)param_1 + 0xb8);
  *(undefined4 *)((int)param_1 + 0xcc) = *(undefined4 *)((int)param_1 + 0xbc);
  *(undefined4 *)((int)param_1 + 0xd0) = *(undefined4 *)((int)param_1 + 0xc0);
  FUN_004f9780(pfVar1);
  pfVar5 = *(float **)((int)param_1 + 0x11c);
  fVar2 = *pfVar5 * *pfVar1 +
          pfVar5[1] * *(float *)((int)param_1 + 0xcc) + pfVar5[2] * *(float *)((int)param_1 + 0xd0);
  if (0.0 < fVar2) {
    *pfVar1 = *(float *)((int)param_1 + 0xd8);
    *(undefined4 *)((int)param_1 + 0xcc) = *(undefined4 *)((int)param_1 + 0xdc);
    *(undefined4 *)((int)param_1 + 0xd0) = *(undefined4 *)((int)param_1 + 0xe0);
    FUN_004f9780(pfVar1);
    return;
  }
  if (*(int *)((int)param_1 + 0xe8) == 0) {
    if (-*(float *)((int)param_1 + 0x114) < fVar2) {
      fVar2 = -fVar2;
      local_14 = pfVar5[1] * fVar2 + *(float *)((int)param_1 + 0xcc);
      local_10 = pfVar5[2] * fVar2 + *(float *)((int)param_1 + 0xd0);
      local_18 = *pfVar5 * fVar2 + *pfVar1;
      FUN_004f9780(&local_18);
      fVar2 = *(float *)((int)param_1 + 0x118);
      pfVar5 = *(float **)((int)param_1 + 0x11c);
      fVar6 = -*(float *)((int)param_1 + 0x114);
      fVar3 = pfVar5[1];
      fVar4 = pfVar5[2];
      *pfVar1 = *pfVar5 * fVar6 + local_18 * fVar2;
      *(float *)((int)param_1 + 0xcc) = fVar3 * fVar6 + local_14 * fVar2;
      *(float *)((int)param_1 + 0xd0) = fVar4 * fVar6 + local_10 * fVar2;
      return;
    }
  }
  else {
    FUN_00502dc0(param_1,(double)fVar2);
  }
  return;
}


