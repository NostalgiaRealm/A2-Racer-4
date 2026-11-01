
/* ==== FUN_00402e20 @ 00402e20 ==== 
 * signature: undefined __thiscall FUN_00402e20(void * this, float param_1)
 * body: 00402e20-00402e38
 */

void __thiscall FUN_00402e20(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)this;
  *(float *)this = param_1 + fVar1;
  FUN_00402de0(this,param_1 + fVar1);
  return;
}


