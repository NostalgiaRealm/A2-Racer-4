
/* ==== FUN_0050d6c0 @ 0050d6c0 ==== 
 * signature: undefined __thiscall FUN_0050d6c0(void * this, double * param_1)
 * body: 0050d6c0-0050d8b7
 */

void __thiscall FUN_0050d6c0(void *this,double *param_1)

{
  float fVar1;
  float fVar2;
  byte *this_00;
  byte *this_01;
  float10 fVar3;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  this_00 = *(byte **)(*(int *)((int)this + 0x14) + 0xa4);
  this_01 = *(byte **)(*(int *)((int)this + 0x44) + 0xa4);
  FUN_004fadc0(this_00 + 0x128,(float *)((int)this + 0x28),&local_20);
  FUN_004fadc0(this_01 + 0x128,(float *)((int)this + 0x58),&local_40);
  local_60 = (float)((float10)local_20 - (float10)local_40);
  local_5c = (float)((float10)local_18 - (float10)local_38);
  local_58 = (float)((float10)local_10 - (float10)local_30);
  fVar3 = FUN_004f9680(&local_60);
  if ((float10)1e-10 <= fVar3) {
    if (((float)fVar3 <= *(float *)((int)this + 0x88)) || (*(int *)((int)this + 0x8c) != 1)) {
      fVar1 = *(float *)((int)this + 0x74);
      fVar2 = *(float *)((int)this + 0x7c);
      FUN_004f3560(this_01,this_00,(float *)((int)this + 0x58),(float *)((int)this + 0x28),&local_50
                  );
      fVar1 = (((float)fVar3 - fVar1) * fVar2 -
              (local_60 * local_50 + local_5c * local_4c + local_58 * local_48) *
              *(float *)((int)this + 0x80)) * (float)*param_1;
      fVar2 = -(*(float *)((int)this + 0x84) * (float)*param_1);
      local_6c = local_4c * fVar2 + local_5c * fVar1;
      local_68 = fVar1 * local_58 + local_48 * fVar2;
      local_70 = local_50 * fVar2 + local_60 * fVar1;
      if (*(int *)(this_01 + 0x5c) * 0x1000000 < 0x8000000) {
        FUN_004f41b0(this_01,&local_40,&local_70);
      }
      if (*(int *)(this_00 + 0x5c) * 0x1000000 < 0x8000000) {
        local_6c = local_6c * -1.0;
        local_68 = local_68 * -1.0;
        local_70 = local_70 * -1.0;
        FUN_004f41b0(this_00,&local_20,&local_70);
      }
    }
    else {
      FUN_0050d4c0((int)this);
      if (this != (void *)0x0) {
        (**(code **)(*(int *)this + 0x18))(1);
        return;
      }
    }
  }
  return;
}


