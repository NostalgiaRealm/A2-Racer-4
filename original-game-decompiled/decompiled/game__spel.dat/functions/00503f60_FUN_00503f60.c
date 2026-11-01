
/* ==== FUN_00503f60 @ 00503f60 ==== 
 * signature: undefined __thiscall FUN_00503f60(void * this, double param_1)
 * body: 00503f60-005041a8
 */

void __thiscall FUN_00503f60(void *this,double param_1)

{
  double *pdVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_24 = *(float *)((int)this + 0xcc) * (float)param_1;
  local_20 = *(float *)((int)this + 0xd0) * (float)param_1;
  local_28 = *(float *)((int)this + 200) * (float)param_1;
  if ((**(byte **)((int)this + 0x100) & 0xc) == 0) {
    pdVar1 = *(double **)((int)this + 0x30);
    local_18 = (float)*pdVar1 * local_28 + (float)pdVar1[4] * local_24 + (float)pdVar1[8] * local_20
    ;
    local_14 = local_28 * (float)pdVar1[1] +
               local_24 * (float)pdVar1[5] + local_20 * (float)pdVar1[9];
    local_10 = local_28 * (float)pdVar1[2] +
               local_24 * (float)pdVar1[6] + local_20 * (float)pdVar1[10];
    FUN_004f42f0(*(byte **)((int)this + 0x100),*(float **)((int)this + 0x108),&local_18,&local_28,
                 (float *)((int)this + 0x98),(float *)((int)this + 0x78));
    FUN_005041b0((void *)((int)this + 0x38),(void *)((int)this + 0x38),(float *)((int)this + 0x78));
    FUN_005041b0((void *)((int)this + 0x58),(void *)((int)this + 0x58),(float *)((int)this + 0x98));
  }
  if ((**(byte **)((int)this + 0x104) & 0xc) == 0) {
    local_24 = local_24 * -1.0;
    local_20 = local_20 * -1.0;
    pdVar1 = *(double **)((int)this + 0x34);
    local_28 = local_28 * -1.0;
    local_18 = (float)*pdVar1 * local_28 + (float)pdVar1[4] * local_24 + (float)pdVar1[8] * local_20
    ;
    local_14 = local_28 * (float)pdVar1[1] +
               local_24 * (float)pdVar1[5] + local_20 * (float)pdVar1[9];
    local_10 = local_28 * (float)pdVar1[2] +
               local_24 * (float)pdVar1[6] + local_20 * (float)pdVar1[10];
    FUN_004f42f0(*(byte **)((int)this + 0x104),*(float **)((int)this + 0x10c),&local_18,&local_28,
                 (float *)((int)this + 0xa8),(float *)((int)this + 0x88));
    FUN_005041b0((void *)((int)this + 0x48),(void *)((int)this + 0x48),(float *)((int)this + 0x88));
    *(float *)((int)this + 0x68) = *(float *)((int)this + 0xa8) + *(float *)((int)this + 0x68);
    *(float *)((int)this + 0x6c) = *(float *)((int)this + 0xac) + *(float *)((int)this + 0x6c);
    *(float *)((int)this + 0x70) = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0x70);
  }
  return;
}


