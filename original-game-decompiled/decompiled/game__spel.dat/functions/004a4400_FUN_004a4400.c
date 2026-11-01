
/* ==== FUN_004a4400 @ 004a4400 ==== 
 * signature: int * __thiscall FUN_004a4400(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004a4400-004a4423
 */

int * __thiscall FUN_004a4400(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004a43d0(this,param_1);
  (**(code **)(*piVar1 + 4))(param_2,param_3);
  return piVar1;
}


