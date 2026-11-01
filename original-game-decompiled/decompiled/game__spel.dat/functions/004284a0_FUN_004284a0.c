
/* ==== FUN_004284a0 @ 004284a0 ==== 
 * signature: undefined __cdecl FUN_004284a0(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 004284a0-00428580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004284a0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  FUN_00428120(param_3,param_2,*(char *)(param_4 + 0x18));
  fVar3 = FUN_00428460(*(int *)(param_4 + 0x1c));
  fVar1 = *(float *)(param_4 + 8);
  fVar2 = *(float *)(&DAT_006b2b18 + (*(int *)(param_4 + 0xc) + DAT_006fbb50 * 6) * 4);
  fVar4 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_006b2af0 * (float10)0.01;
  if (DAT_006fbb4c == 1) {
    fVar4 = fVar4 * (float10)1.2;
  }
  else if (DAT_006fbb4c == 2) {
    fVar4 = fVar4 * (float10)1.5;
  }
  if (*(char *)(param_4 + 0x19) == '\x01') {
    fVar5 = (float10)4000.0;
  }
  else {
    fVar5 = (float10)0.0;
  }
  if ((DAT_006c2f28 != '\0') && (param_2 == DAT_006fba58)) {
    fVar5 = fVar5 + (float10)_DAT_006c2f2c;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (float)(((float10)fVar1 * (float10)fVar2 * fVar3 * (float10)0.030699998 + fVar5) -
                      fVar4);
  return;
}


