
/* ==== FUN_004ff100 @ 004ff100 ==== 
 * signature: undefined __thiscall FUN_004ff100(void * this, int * param_1)
 * body: 004ff100-004ff1e4
 */

void __thiscall FUN_004ff100(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  undefined1 local_18 [20];
  
  while( true ) {
    fVar1 = (float)param_1[5];
    local_24 = (float)param_1[3];
    local_20 = (float)param_1[4];
    fVar2 = *(float *)((int)this + 0x68) * 0.5 + fVar1;
    local_38 = (float)param_1[2] - *(float *)((int)this + 0x20);
    local_34 = local_24 - *(float *)((int)this + 0x24);
    local_30 = local_20 - *(float *)((int)this + 0x28);
    fVar3 = (float10)FUN_004ff1f0();
    if ((float10)fVar2 * (float10)fVar2 <= fVar3) {
      return;
    }
    if ((float10)fVar1 * (float10)fVar1 <= fVar3) {
      FUN_004ff210(local_18,(float *)((int)this + 0x50),&local_38);
      fVar3 = (float10)FUN_004ff1f0();
      if ((float10)(float)((float10)fVar1 * (float10)fVar1) <= fVar3) {
        return;
      }
    }
    if (*param_1 == 0) break;
    FUN_004ff100(this,param_1 + 7);
    param_1 = (int *)((int)param_1 + *param_1);
  }
  FUN_004fecd0(this,(int *)(param_1[1] + (int)param_1));
  return;
}


