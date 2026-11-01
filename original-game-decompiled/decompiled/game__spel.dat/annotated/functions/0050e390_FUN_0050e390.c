
/* ==== FUN_0050e390 @ 0050e390 ==== 
 * signature: int * __thiscall FUN_0050e390(void * this, int param_1, int param_2, void * param_3, float * param_4)
 * body: 0050e390-0050e441
 */

int * __thiscall FUN_0050e390(void *this,int param_1,int param_2,void *param_3,float *param_4)

{
  undefined8 *puVar1;
  double local_80 [16];
  
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x88) = 0;
  puVar1 = (undefined8 *)((int)this + 8);
  *(void **)(*(int *)(param_2 + 0xa4) + 0x10) = this;
  if (param_3 == (void *)0x0) {
    FUN_004fa010((undefined4 *)puVar1);
    return this;
  }
  if (param_4 != (float *)0x0) {
    FUN_004fa010((undefined4 *)puVar1);
    FUN_004f2ab0(param_3,local_80);
    FUN_004fadc0(local_80,param_4,(double *)((int)this + 0x68));
    return this;
  }
  FUN_004fa5b0((void *)(*(int *)((int)param_3 + 0xa4) + 0x128),
               (double *)(*(int *)(param_2 + 0xa4) + 0x128),puVar1);
  return this;
}


