
/* ==== FUN_00521bb0 @ 00521bb0 ==== 
 * signature: undefined __thiscall FUN_00521bb0(void * this, int * param_1)
 * body: 00521bb0-00521c7b
 */

void __thiscall FUN_00521bb0(void *this,int *param_1)

{
  double dVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  *(int **)((int)this + 0x28) = param_1;
  FUN_0050fc90(param_1);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x1c);
  pfVar7 = (float *)(param_1 + 4);
  iVar5 = 0;
  pfVar6 = pfVar7;
  if (0 < *(int *)((int)this + 0x1c)) {
    do {
      pfVar2 = *(float **)(*(int *)((int)this + 0x10) + iVar5 * 4);
      pfVar7 = pfVar6 + 4;
      iVar5 = iVar5 + 1;
      *pfVar6 = *pfVar2;
      pfVar6[1] = pfVar2[1];
      pfVar6[2] = pfVar2[2];
      pfVar6[3] = pfVar2[3];
      pfVar6 = pfVar7;
    } while (iVar5 < *(int *)((int)this + 0x1c));
  }
  iVar5 = 0;
  *param_1 = (int)pfVar7 - (int)param_1;
  pfVar6 = pfVar7;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      pfVar6[3] = 0.0;
      pfVar7 = pfVar6 + 4;
      pdVar3 = *(double **)(*(int *)((int)this + 8) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      dVar1 = pdVar3[1];
      dVar4 = pdVar3[2];
      *pfVar6 = (float)*pdVar3;
      pfVar6[1] = (float)dVar1;
      pfVar6[2] = (float)dVar4;
      pfVar6 = pfVar7;
    } while (iVar5 < *(int *)((int)this + 0x14));
  }
  param_1[2] = ((int)pfVar7 - (int)param_1 >> 4) << 8 | param_1[2] & 0xf3U | 4;
  return;
}


