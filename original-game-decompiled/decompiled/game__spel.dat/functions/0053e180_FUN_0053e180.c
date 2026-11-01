
/* ==== FUN_0053e180 @ 0053e180 ==== 
 * signature: undefined __thiscall FUN_0053e180(void * this, float * param_1)
 * body: 0053e180-0053e1d1
 */

void __thiscall FUN_0053e180(void *this,float *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x40);
  *(float *)((int)this + 0x38) =
       *(float *)(iVar1 + 0x80) * *param_1 +
       *(float *)(iVar1 + 0x84) * param_1[1] + *(float *)(iVar1 + 0x88) * param_1[2] +
       *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x3c) =
       *(float *)(iVar1 + 0x90) * *param_1 +
       *(float *)(iVar1 + 0x94) * param_1[1] + *(float *)(iVar1 + 0x98) * param_1[2] +
       *(float *)((int)this + 0x3c);
  return;
}


