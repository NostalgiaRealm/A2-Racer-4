
/* ==== FUN_00519d60 @ 00519d60 ==== 
 * signature: int __cdecl FUN_00519d60(int param_1, double * param_2, double * param_3)
 * body: 00519d60-00519df3
 */

int __cdecl FUN_00519d60(int param_1,double *param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  int local_14;
  double local_10;
  
  local_10 = 1.79769313486232e+308;
  local_14 = 0;
  iVar2 = DAT_0074c03c;
  if (DAT_0074be40 != 0) {
    iVar2 = DAT_0074c03c + -1;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    piVar4 = (int *)(iVar1 + 4);
    if (iVar3 != 0) {
      do {
        piVar4 = piVar4 + 1;
        fVar5 = FUN_0052b770(*(double **)(iVar3 + 8),param_2,-iVar2);
        if (fVar5 < (float10)local_10) {
          local_10 = (double)fVar5;
          local_14 = iVar3;
        }
        iVar3 = *piVar4;
      } while (iVar3 != 0);
    }
  }
  *param_3 = SQRT(local_10);
  return local_14;
}


