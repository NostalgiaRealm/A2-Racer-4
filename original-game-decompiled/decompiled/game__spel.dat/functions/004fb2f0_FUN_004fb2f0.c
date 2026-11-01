
/* ==== FUN_004fb2f0 @ 004fb2f0 ==== 
 * signature: undefined __thiscall FUN_004fb2f0(undefined4 * param_1, void * param_2, double param_3, double param_4, double param_5)
 * body: 004fb2f0-004fb35a
 */

void __thiscall
FUN_004fb2f0(undefined4 *param_1,void *param_2,double param_3,double param_4,double param_5)

{
  float local_a0;
  float local_9c;
  float local_98;
  float local_90 [4];
  double local_80 [16];
  
  *param_1 = param_2;
  FUN_004f2ab0(param_2,local_80);
  local_a0 = (float)param_3;
  local_9c = (float)param_4;
  local_98 = (float)param_5;
  FUN_004fac20(local_80,&local_a0,local_90);
  FUN_004fb1b0(param_1,(int)param_2,local_90);
  return;
}


