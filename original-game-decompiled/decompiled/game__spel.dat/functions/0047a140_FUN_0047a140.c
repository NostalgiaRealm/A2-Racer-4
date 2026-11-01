
/* ==== FUN_0047a140 @ 0047a140 ==== 
 * signature: undefined __thiscall FUN_0047a140(void * this, void * param_1)
 * body: 0047a140-0047a1da
 */

void __thiscall FUN_0047a140(void *this,void *param_1)

{
  int iVar1;
  float *pfVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  iVar1 = FUN_0047b100((int)param_1);
  if (2 < iVar1) {
    pfVar2 = (float *)FUN_0047aff0(param_1,local_c,0);
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
    local_10 = pfVar2[2];
    pfVar2 = (float *)FUN_0047aff0(param_1,local_c,1);
    local_24 = *pfVar2;
    local_20 = pfVar2[1];
    local_1c = pfVar2[2];
    pfVar2 = (float *)FUN_0047aff0(param_1,local_c,2);
    local_30 = *pfVar2;
    local_2c = pfVar2[1];
    local_28 = pfVar2[2];
    FUN_0047a1e0(this,&local_18,&local_24,&local_30);
  }
  return;
}


