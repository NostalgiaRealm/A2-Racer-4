
/* ==== FUN_00548710 @ 00548710 ==== 
 * signature: undefined __thiscall FUN_00548710(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 00548710-005487c4
 */

void __thiscall FUN_00548710(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  float local_28;
  float local_24;
  double local_20 [4];
  
  FUN_00509120(param_1,param_3,(int)param_4,local_20);
  FUN_00509420((int *)param_4[1],param_2,local_20,&local_28);
  if (local_28 < 0.0) {
    FUN_00547cc0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (local_24 < 0.0) {
    FUN_00547cc0(this,param_1,
                 (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),param_3,
                 param_4);
    return;
  }
  FUN_005487d0(this,param_1,param_2,param_3,param_4);
  return;
}


