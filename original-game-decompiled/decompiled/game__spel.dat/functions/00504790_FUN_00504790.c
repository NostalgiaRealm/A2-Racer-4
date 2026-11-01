
/* ==== FUN_00504790 @ 00504790 ==== 
 * signature: undefined __thiscall FUN_00504790(void * this, float * param_1, float param_2, void * param_3)
 * body: 00504790-0050490f
 */

void __thiscall FUN_00504790(void *this,float *param_1,float param_2,void *param_3)

{
  float local_138;
  float local_134;
  float local_130;
  undefined1 local_128 [152];
  undefined1 local_90 [80];
  undefined4 local_40;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float *local_c;
  int local_8;
  
  FUN_00402d00(local_90,0x10,2,FUN_0043e110);
  local_24 = *(int *)((int)this + 0x7c);
  if (local_24 == 0) {
    local_20 = (int)this + 0xb0;
    local_28 = *(int *)(*(int *)((int)this + 0x44) + 0xa4);
    local_24 = *(int *)((int)this + 0x78);
    local_138 = -*(float *)this;
    local_134 = -*(float *)((int)this + 4);
    local_1c = (int)this + 0xa0;
    local_c = &local_138;
    local_130 = -*(float *)((int)this + 8);
  }
  else {
    local_28 = *(int *)((int)this + 0x78);
    if (local_28 == 0) {
      local_28 = *(int *)(*(int *)((int)this + 0x40) + 0xa4);
    }
    local_20 = (int)this + 0xa0;
    local_1c = (int)this + 0xb0;
    local_c = this;
  }
  local_18 = *(float *)((int)this + 0x68);
  local_8 = (int)this + 0x10;
  local_40 = 0;
  if ((*(int *)(local_28 + 0x10) == 0) && (*(int *)(local_24 + 0x10) == 0)) {
    FUN_00504640(*(float *)((int)param_3 + 0x44),local_18,&local_14,&local_10);
    if (*(char *)((int)param_3 + 0x34) != '\0') {
      FUN_00504d90(local_128,param_3);
    }
  }
  else {
    FUN_00504640(0.0,local_18,&local_14,&local_10);
  }
  FUN_00503570(local_128,param_1,1.4013e-45,(int)*(short *)((int)this + 0x5a),param_2);
  return;
}


