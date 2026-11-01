
/* ==== FUN_00504ef0 @ 00504ef0 ==== 
 * signature: float10 __fastcall FUN_00504ef0(int param_1)
 * body: 00504ef0-00504f79
 */

float10 __fastcall FUN_00504ef0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)0.0;
  pcVar3 = (char *)(param_1 + 0x16);
  piVar2 = (int *)(*(int *)(param_1 + 0x40) + 0x78);
  iVar4 = 2;
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*pcVar3 != '\x03')) {
      fVar6 = ((float10)*(float *)(iVar1 + 0x9c) * (float10)*(float *)(iVar1 + 0x9c) +
              (float10)*(float *)(iVar1 + 0x98) * (float10)*(float *)(iVar1 + 0x98) +
              (float10)*(float *)(iVar1 + 0x94) * (float10)*(float *)(iVar1 + 0x94)) *
              (float10)2.5e-05;
      if ((float10)0.25 < fVar6) {
        fVar6 = (float10)0.25;
      }
      fVar6 = (float10)fcos(SQRT(fVar6));
      fVar5 = fVar5 + ((float10)1.0 - fVar6) * (float10)*(float *)(iVar1 + 4) *
                      (float10)*(double *)(*(int *)(iVar1 + 0xc) + 200);
    }
    piVar2 = piVar2 + 1;
    pcVar3 = pcVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return fVar5;
}


