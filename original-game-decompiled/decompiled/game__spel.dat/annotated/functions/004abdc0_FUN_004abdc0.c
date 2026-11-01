
/* ==== FUN_004abdc0 @ 004abdc0 ==== 
 * signature: undefined __thiscall FUN_004abdc0(void * this, void * param_1)
 * body: 004abdc0-004abf23
 */

void __thiscall FUN_004abdc0(void *this,void *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)((int)this + 0xf0);
  if (0 < iVar2) {
    piVar3 = (int *)((int)this + 0x104);
    do {
      pfVar1 = (float *)(DAT_0073b088 + *piVar3 * 0x60);
      local_2c = *(float *)((int)this + 0x38) + -25.0;
      local_30 = *pfVar1;
      local_28 = pfVar1[2];
      local_24 = pfVar1[3] + local_30;
      local_20 = pfVar1[4] + local_2c;
      local_1c = pfVar1[5] + local_28;
      local_14 = *(float *)((int)this + 0x38) + 100.0;
      local_8 = pfVar1[4] + local_14;
      local_18 = local_30;
      local_10 = local_28;
      local_c = local_24;
      local_4 = local_1c;
      FUN_004a1180(param_1,&local_30,&local_24,&local_18);
      FUN_004a1180(param_1,&local_18,&local_24,&local_c);
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


