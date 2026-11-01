
/* ==== FUN_004d3e00 @ 004d3e00 ==== 
 * signature: undefined __thiscall FUN_004d3e00(void * this, int * param_1, int * param_2)
 * body: 004d3e00-004d3e3d
 */

void __thiscall FUN_004d3e00(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  FUN_00479480((int)(param_2 + 2));
  FUN_0054b339(param_2);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_1 = iVar1;
  return;
}


