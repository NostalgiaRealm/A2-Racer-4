
/* ==== FUN_004f5e90 @ 004f5e90 ==== 
 * signature: undefined __thiscall FUN_004f5e90(void * this, double * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, int * param_7)
 * body: 004f5e90-004f5f3f
 */

void __thiscall
FUN_004f5e90(void *this,double *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int *piVar1;
  
  if (param_4 == 0) {
    piVar1 = (int *)(*(int *)(*(int *)((int)this + 4) + 0x20) + *(int *)((int)this + 4));
  }
  else {
    piVar1 = (int *)(*(int *)(param_4 + 4) + param_4);
    FUN_004f5cb0(piVar1 + 7,param_1,param_2,param_3,param_7);
    piVar1 = (int *)(*piVar1 + (int)piVar1);
  }
  FUN_004f5cb0(piVar1,param_1,param_2,param_3,param_7);
  return;
}


