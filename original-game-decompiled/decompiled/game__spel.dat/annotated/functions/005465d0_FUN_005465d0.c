
/* ==== FUN_005465d0 @ 005465d0 ==== 
 * signature: undefined __thiscall FUN_005465d0(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 005465d0-005466bc
 */

void __thiscall FUN_005465d0(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  float10 fVar2;
  int local_48;
  double local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  double local_28 [4];
  
  FUN_00509120(param_1,param_3,(int)param_4,local_28);
  FUN_005094e0((int *)param_4[1],(uint)param_2,local_28,(int)&local_38);
  if (((local_34 | local_30 | local_38) & 0x80000000) != 0) {
    local_40 = 1e+101;
    puVar1 = (uint *)0x0;
    local_48 = 3;
    do {
      fVar2 = (float10)FUN_0050a080(local_28,(int *)param_4[1],param_2);
      if (fVar2 < (float10)local_40) {
        local_40 = (double)fVar2;
        puVar1 = param_2;
      }
      param_2 = (uint *)((int)param_2 + *(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)));
      local_48 = local_48 + -1;
    } while (local_48 != 0);
    FUN_00548710(this,param_1,puVar1,param_3,param_4);
    return;
  }
  FUN_005468f0(this,param_1,local_28,param_2,param_3,param_4);
  return;
}


