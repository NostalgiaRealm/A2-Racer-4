
/* ==== FUN_005481d0 @ 005481d0 ==== 
 * signature: undefined __thiscall FUN_005481d0(void * this, int * param_1, uint * param_2, int * param_3)
 * body: 005481d0-0054827c
 */

void __thiscall FUN_005481d0(void *this,int *param_1,uint *param_2,int *param_3)

{
  float local_28;
  float local_24;
  double local_20 [4];
  
  FUN_004fe7e0((void *)param_3[2],(double *)(*param_1 + 0x90),local_20);
  FUN_00509420((int *)param_3[1],param_2,local_20,&local_28);
  if (local_28 < 0.0) {
    FUN_005479c0(this,param_1,param_2,param_3);
    return;
  }
  if (local_24 < 0.0) {
    FUN_005479c0(this,param_1,
                 (uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),param_3);
    return;
  }
  FUN_00548280(this,param_1,param_2,param_3);
  return;
}


