
/* ==== FUN_004f3260 @ 004f3260 ==== 
 * signature: undefined __thiscall FUN_004f3260(void * this, double * param_1, float * param_2)
 * body: 004f3260-004f32da
 */

void __thiscall FUN_004f3260(void *this,double *param_1,float *param_2)

{
  void *this_00;
  float local_a0 [4];
  float local_90 [4];
  double local_80 [16];
  
  FUN_004f32e0((int)this);
  this_00 = *(void **)((int)this + 0xa4);
  FUN_004f3c20(this_00,*(double *)(*(int *)((int)this + 0x18) + 0x120),local_80);
  FUN_004fab40(local_80,param_1,local_a0);
  FUN_004fafa0(local_80,param_2,local_90);
  FUN_004f3f40(this_00,local_a0,local_90,param_2);
  return;
}


