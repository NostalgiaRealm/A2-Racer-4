
/* ==== FUN_004fbe40 @ 004fbe40 ==== 
 * signature: undefined __thiscall FUN_004fbe40(void * this, double * param_1)
 * body: 004fbe40-004fbf9d
 */

void __thiscall FUN_004fbe40(void *this,double *param_1)

{
  void *this_00;
  void *this_01;
  float10 fVar1;
  float local_88;
  float local_84;
  float local_80;
  double local_78;
  undefined8 local_70;
  float local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  local_78 = (double)*(float *)((int)this + 0x70);
  if (*(float *)((int)this + 0x70) != 0.0) {
    this_00 = *(void **)(*(int *)((int)this + 0x14) + 0xa4);
    this_01 = *(void **)(*(int *)((int)this + 0x44) + 0xa4);
    FUN_004fadc0((void *)((int)this_00 + 0x128),(float *)((int)this + 0x28),&local_40);
    FUN_004fadc0((void *)((int)this_01 + 0x128),(float *)((int)this + 0x58),&local_20);
    local_60 = local_40 - local_20;
    local_58 = local_38 - local_18;
    local_50 = local_30 - local_10;
    FUN_004f94a0(&local_60);
    fVar1 = (float10)local_78 * (float10)*param_1;
    local_78 = (double)((float10)(float)local_58 * fVar1);
    local_70 = (double)((float10)(float)local_50 * fVar1);
    local_88 = (float)((float10)local_60 * fVar1);
    local_84 = (float)((float10)(float)local_58 * fVar1);
    local_80 = (float)((float10)(float)local_50 * fVar1);
    if (((*(byte *)((int)this + 0x74) & 1) != 0) &&
       (*(int *)((int)this_00 + 0x5c) * 0x1000000 < 0x8000000)) {
      FUN_004f41b0(this_00,&local_40,&local_88);
    }
    if (((*(byte *)((int)this + 0x74) & 2) != 0) &&
       (*(int *)((int)this_01 + 0x5c) * 0x1000000 < 0x8000000)) {
      local_70 = (double)CONCAT44(local_84 * -1.0,local_88 * -1.0);
      local_68 = local_80 * -1.0;
      FUN_004f41b0(this_01,&local_20,(float *)&local_70);
    }
  }
  return;
}


