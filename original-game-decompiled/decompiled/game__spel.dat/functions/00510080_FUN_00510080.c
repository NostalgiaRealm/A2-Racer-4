
/* ==== FUN_00510080 @ 00510080 ==== 
 * signature: undefined __thiscall FUN_00510080(void * this, undefined4 param_1, int param_2)
 * body: 00510080-005100bc
 */

void __thiscall FUN_00510080(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  
  *(int *)((int)this + 8) = param_2;
  uVar1 = FUN_0050dfd0((void *)(param_2 + 0x68),(int)this,
                       (float)(((float10)*(double *)(*(int *)(param_2 + 0x18) + 0x120) -
                               (float10)*(double *)(param_2 + 0x48)) *
                               (float10)*(float *)(param_2 + 0x50) +
                               (float10)*(float *)(param_2 + 0x58) + (float10)1.0000000200408773e+20
                              ));
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}


