
/* ==== FUN_004f3f40 @ 004f3f40 ==== 
 * signature: undefined __thiscall FUN_004f3f40(void * this, float * param_1, float * param_2, float * param_3)
 * body: 004f3f40-004f3fba
 */

void __thiscall FUN_004f3f40(void *this,float *param_1,float *param_2,float *param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_004f42f0(this,param_1,param_2,param_3,&local_10,&local_20);
  *(float *)((int)this + 0x74) = local_20 + *(float *)((int)this + 0x74);
  *(float *)((int)this + 0x78) = local_1c + *(float *)((int)this + 0x78);
  *(float *)((int)this + 0x7c) = local_18 + *(float *)((int)this + 0x7c);
  *(float *)((int)this + 0x84) = local_10 + *(float *)((int)this + 0x84);
  *(float *)((int)this + 0x88) = local_c + *(float *)((int)this + 0x88);
  *(float *)((int)this + 0x8c) = local_8 + *(float *)((int)this + 0x8c);
  return;
}


