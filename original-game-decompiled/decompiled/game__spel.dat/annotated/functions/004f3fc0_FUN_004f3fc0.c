
/* ==== FUN_004f3fc0 @ 004f3fc0 ==== 
 * signature: undefined __thiscall FUN_004f3fc0(void * this, float * param_1, float * param_2, float * param_3)
 * body: 004f3fc0-004f404c
 */

void __thiscall FUN_004f3fc0(void *this,float *param_1,float *param_2,float *param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_004f42f0(this,param_1,param_2,param_3,&local_10,&local_20);
  *(float *)((int)this + 0x94) = local_20 + *(float *)((int)this + 0x94);
  *(float *)((int)this + 0x98) = local_1c + *(float *)((int)this + 0x98);
  *(float *)((int)this + 0x9c) = local_18 + *(float *)((int)this + 0x9c);
  *(float *)((int)this + 0xa4) = local_10 + *(float *)((int)this + 0xa4);
  *(float *)((int)this + 0xa8) = local_c + *(float *)((int)this + 0xa8);
  *(float *)((int)this + 0xac) = local_8 + *(float *)((int)this + 0xac);
  return;
}


