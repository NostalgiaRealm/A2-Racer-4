
/* ==== FUN_00528490 @ 00528490 ==== 
 * signature: float10 __cdecl FUN_00528490(int param_1, int param_2, double * param_3, double * param_4)
 * body: 00528490-005285b2
 */

float10 __cdecl FUN_00528490(int param_1,int param_2,double *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  double local_20;
  double local_18;
  double local_10;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = (int *)(iVar1 + 8);
    while (iVar2 != 0) {
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfeffffff;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = (int *)(iVar1 + 8);
    while (iVar2 != 0) {
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x1000000;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  local_18 = 0.0;
  local_20 = 0.0;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar3 = piVar3 + 1;
      if ((*(uint *)(iVar1 + 0x14) & 0x1000000) == 0) {
        DAT_0074c850 = DAT_0074c850 + 1;
        FUN_005273a0(*(double **)(iVar1 + 8),param_2,&local_10);
        if (local_18 <= local_10) {
          if (local_20 < local_10) {
            local_20 = local_10;
          }
        }
        else {
          local_18 = local_10;
        }
      }
      iVar1 = *piVar3;
    }
  }
  *param_3 = local_18;
  *param_4 = local_20;
  fVar4 = -(float10)local_18;
  if (fVar4 < (float10)local_20) {
    fVar4 = (float10)local_20;
  }
  return fVar4;
}


