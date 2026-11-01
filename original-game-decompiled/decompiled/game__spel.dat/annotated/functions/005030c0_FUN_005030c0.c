
/* ==== FUN_005030c0 @ 005030c0 ==== 
 * signature: undefined __thiscall FUN_005030c0(void * this, float * param_1, int param_2)
 * body: 005030c0-0050356b
 */

void __thiscall FUN_005030c0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float local_118;
  float local_114;
  float local_110;
  double local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  double local_b0;
  float local_a8 [4];
  float local_98 [4];
  float local_88;
  float local_84;
  float local_80;
  float local_78 [4];
  float local_68 [4];
  float local_58;
  float local_54;
  float local_50;
  double local_48 [4];
  double local_28 [4];
  
  FUN_004fadc0(*(void **)((int)this + 0x30),*(float **)((int)this + 0x108),local_48);
  FUN_004fadc0(*(void **)((int)this + 0x34),*(float **)((int)this + 0x10c),local_28);
  local_100 = *param_1 * -1.0;
  local_fc = param_1[1] * -1.0;
  local_f8 = param_1[2] * -1.0;
  local_c0 = *(float *)((int)this + 0x38);
  local_bc = *(undefined4 *)((int)this + 0x3c);
  local_b8 = *(undefined4 *)((int)this + 0x40);
  local_d0 = *(float *)((int)this + 0x58);
  local_cc = *(undefined4 *)((int)this + 0x5c);
  local_c8 = *(undefined4 *)((int)this + 0x60);
  FUN_004f3390(*(void **)((int)this + 0x100),*(float **)((int)this + 0x108),&local_d0,&local_c0,
               &local_88);
  local_c0 = *(float *)((int)this + 0x48);
  local_bc = *(undefined4 *)((int)this + 0x4c);
  local_b8 = *(undefined4 *)((int)this + 0x50);
  local_d0 = *(float *)((int)this + 0x68);
  local_cc = *(undefined4 *)((int)this + 0x6c);
  local_c8 = *(undefined4 *)((int)this + 0x70);
  FUN_004f3390(*(void **)((int)this + 0x104),*(float **)((int)this + 0x10c),&local_d0,&local_c0,
               &local_58);
  fVar1 = (local_58 - local_88) * local_100 +
          (local_54 - local_84) * local_fc + (local_50 - local_80) * local_f8;
  if ((param_2 == 1) && (0.0 < fVar1)) {
    fVar1 = 0.0;
  }
  local_b0 = (double)(*(float *)this - fVar1);
  if (0.0 <= local_b0) {
    local_108 = 0.0;
    local_118 = local_100;
    local_114 = local_fc;
    local_110 = local_f8;
    if ((**(byte **)((int)this + 0x104) & 0xc) == 0) {
      FUN_004fafa0(*(void **)((int)this + 0x34),&local_118,local_a8);
      FUN_004f42f0(*(void **)((int)this + 0x104),*(float **)((int)this + 0x10c),local_a8,&local_118,
                   local_98,local_68);
      FUN_004f3390(*(void **)((int)this + 0x104),*(float **)((int)this + 0x10c),local_98,local_68,
                   &local_e0);
      local_108 = (double)local_e0 * (double)local_118 +
                  (double)local_114 * (double)local_dc + (double)local_110 * (double)local_d8;
    }
    if ((**(byte **)((int)this + 0x100) & 0xc) == 0) {
      local_114 = local_114 * -1.0;
      local_110 = local_110 * -1.0;
      local_118 = local_118 * -1.0;
      FUN_004fafa0(*(void **)((int)this + 0x30),&local_118,local_a8);
      FUN_004f42f0(*(void **)((int)this + 0x100),*(float **)((int)this + 0x108),local_a8,&local_118,
                   local_98,local_68);
      FUN_004f3390(*(void **)((int)this + 0x100),*(float **)((int)this + 0x108),local_98,local_68,
                   &local_e0);
      local_108 = (double)local_e0 * (double)local_118 +
                  (double)local_114 * (double)local_dc + (double)local_110 * (double)local_d8 +
                  local_108;
    }
    local_108 = local_b0 / local_108;
    if (0.0 <= local_108) {
      if ((**(byte **)((int)this + 0x100) & 0xc) == 0) {
        local_e8 = -(float)local_108;
        local_f0 = local_100 * local_e8;
        local_ec = local_fc * local_e8;
        local_e8 = local_f8 * local_e8;
        FUN_004fafa0(*(void **)((int)this + 0x30),&local_f0,local_78);
        FUN_004f42f0(*(void **)((int)this + 0x100),*(float **)((int)this + 0x108),local_78,&local_f0
                     ,(float *)((int)this + 0x98),(float *)((int)this + 0x78));
        *(float *)((int)this + 0x38) = *(float *)((int)this + 0x78) + *(float *)((int)this + 0x38);
        *(float *)((int)this + 0x3c) = *(float *)((int)this + 0x7c) + *(float *)((int)this + 0x3c);
        *(float *)((int)this + 0x40) = *(float *)((int)this + 0x80) + *(float *)((int)this + 0x40);
        *(float *)((int)this + 0x58) = *(float *)((int)this + 0x98) + *(float *)((int)this + 0x58);
        *(float *)((int)this + 0x5c) = *(float *)((int)this + 0x9c) + *(float *)((int)this + 0x5c);
        *(float *)((int)this + 0x60) = *(float *)((int)this + 0xa0) + *(float *)((int)this + 0x60);
      }
      if ((**(byte **)((int)this + 0x104) & 0xc) == 0) {
        local_f0 = local_100 * (float)local_108;
        local_ec = local_fc * (float)local_108;
        local_e8 = local_f8 * (float)local_108;
        FUN_004fafa0(*(void **)((int)this + 0x34),&local_f0,local_78);
        FUN_004f42f0(*(void **)((int)this + 0x104),*(float **)((int)this + 0x10c),local_78,&local_f0
                     ,(float *)((int)this + 0xa8),(float *)((int)this + 0x88));
        *(float *)((int)this + 0x48) = *(float *)((int)this + 0x88) + *(float *)((int)this + 0x48);
        *(float *)((int)this + 0x4c) = *(float *)((int)this + 0x8c) + *(float *)((int)this + 0x4c);
        *(float *)((int)this + 0x50) = *(float *)((int)this + 0x90) + *(float *)((int)this + 0x50);
        *(float *)((int)this + 0x68) = *(float *)((int)this + 0xa8) + *(float *)((int)this + 0x68);
        *(float *)((int)this + 0x6c) = *(float *)((int)this + 0xac) + *(float *)((int)this + 0x6c);
        *(float *)((int)this + 0x70) = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0x70);
      }
    }
  }
  return;
}


