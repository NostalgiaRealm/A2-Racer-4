
/* ==== FUN_00448f90 @ 00448f90 ==== 
 * signature: undefined __thiscall FUN_00448f90(void * this, int * param_1, int * param_2)
 * body: 00448f90-00448fc3
 */

void __thiscall FUN_00448f90(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  FUN_0054b339(param_2);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_1 = iVar1;
  return;
}


