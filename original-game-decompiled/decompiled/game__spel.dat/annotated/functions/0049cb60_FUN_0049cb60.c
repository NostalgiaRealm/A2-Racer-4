
/* ==== FUN_0049cb60 @ 0049cb60 ==== 
 * signature: undefined __thiscall FUN_0049cb60(void * this, float * param_1, float * param_2, float * param_3)
 * body: 0049cb60-0049cc35
 */

void __thiscall FUN_0049cb60(void *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  
  *(float *)((int)this + 0x40) = *param_2;
  *(float *)((int)this + 0x44) = param_2[1];
  *(float *)((int)this + 0x48) = param_2[2];
  pfVar1 = (float *)((int)this + 0x58);
  *pfVar1 = *param_1;
  *(float *)((int)this + 0x5c) = param_1[1];
  fVar2 = param_1[2];
  *(undefined4 *)((int)this + 4) = 1;
  *(float *)((int)this + 0x60) = fVar2;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(float *)((int)this + 0xc) = *pfVar1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x60);
  *(float *)((int)this + 0x68) = *(float *)((int)this + 0x40) - *pfVar1;
  *(float *)((int)this + 0x6c) = *(float *)((int)this + 0x44) - *(float *)((int)this + 0x5c);
  *(float *)((int)this + 0x70) = *(float *)((int)this + 0x48) - *(float *)((int)this + 0x60);
  if (0.0 < *param_3) {
    *(float *)((int)this + 0x74) = *param_3;
    return;
  }
  *(undefined4 *)((int)this + 0x74) = 0x3dcccccd;
  return;
}


