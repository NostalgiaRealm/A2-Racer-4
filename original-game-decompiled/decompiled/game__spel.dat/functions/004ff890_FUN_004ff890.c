
/* ==== FUN_004ff890 @ 004ff890 ==== 
 * signature: undefined __thiscall FUN_004ff890(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, double * param_6)
 * body: 004ff890-004ff8f1
 */

void __thiscall
FUN_004ff890(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  
  if ((float)(double)CONCAT44(param_5,param_4) < *(float *)((int)this + 0x70)) {
    *(undefined4 *)((int)this + 0x84) = param_1;
    *(float *)((int)this + 0x70) = (float)(double)CONCAT44(param_5,param_4);
    *(float *)((int)this + 0x90) = (float)(double)CONCAT44(param_5,param_4);
    *(undefined4 *)((int)this + 0x8c) = param_3;
    *(undefined4 *)((int)this + 0x88) = param_2;
    dVar1 = param_6[1];
    dVar2 = param_6[2];
    *(float *)((int)this + 0x74) = (float)*param_6;
    *(float *)((int)this + 0x78) = (float)dVar1;
    *(float *)((int)this + 0x7c) = (float)dVar2;
  }
  return;
}


