
/* ==== FUN_005499e0 @ 005499e0 ==== 
 * signature: undefined __thiscall FUN_005499e0(void * this, int * param_1, int * param_2)
 * body: 005499e0-00549a15
 */

void __thiscall FUN_005499e0(void *this,int *param_1,int *param_2)

{
  if (*(int **)((int)this + 0x20) == param_1) {
    *(int **)((int)this + 0x20) = param_2;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = param_2;
  }
  if (*param_2 != 0) {
    *(int **)(*param_2 + 4) = param_1;
  }
  *param_1 = *param_2;
  param_2[1] = param_1[1];
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}


