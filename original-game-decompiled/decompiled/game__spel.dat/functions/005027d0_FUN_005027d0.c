
/* ==== FUN_005027d0 @ 005027d0 ==== 
 * signature: undefined __thiscall FUN_005027d0(void * this, undefined4 param_1, undefined4 param_2, float param_3, float param_4, undefined4 param_5)
 * body: 005027d0-00502817
 */

void __thiscall
FUN_005027d0(void *this,undefined4 param_1,undefined4 param_2,float param_3,float param_4,
            undefined4 param_5)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)(double)CONCAT44(param_2,param_1) - (float10)*(double *)this;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(float *)((int)this + 0x10) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) + (float10)*(float *)((int)this + 0x10));
  fVar1 = *(float *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)fVar1 + (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 8) = param_4 * 1.00001;
  *(float *)((int)this + 0x18) = param_4 * 1.00001 * param_3 + *(float *)((int)this + 0x10);
  return;
}


