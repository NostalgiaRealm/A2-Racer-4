
/* ==== FUN_004eb740 @ 004eb740 ==== 
 * signature: float10 __thiscall FUN_004eb740(void * param_1, int param_2, float * param_3)
 * body: 004eb740-004eb790
 */

float10 __thiscall FUN_004eb740(void *param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar2 = (int *)FUN_004ea900(param_1,param_2);
  if (piVar2 == (int *)0x0) {
    return (float10)-1.0;
  }
  iVar1 = *piVar2;
  if (param_3 != (float *)0x0) {
    fVar3 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)((int)param_1 + 8) + 4) + iVar1 * 4) +
                                 0x14))(param_2);
    *param_3 = (float)fVar3;
  }
  fVar3 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)((int)param_1 + 8) + 4) + iVar1 * 4) +
                               0x10))(param_2);
  return fVar3;
}


