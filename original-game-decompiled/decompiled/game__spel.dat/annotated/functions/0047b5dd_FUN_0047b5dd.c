
/* ==== FUN_0047b5dd @ 0047b5dd ==== 
 * signature: undefined4 __thiscall FUN_0047b5dd(void * this, void * param_1, float param_2)
 * body: 0047b5dd-0047b784
 */

undefined4 __thiscall FUN_0047b5dd(void *this,void *param_1,float param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24 [3];
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  this_00 = param_1;
  iVar2 = FUN_0047b100((int)param_1);
  if ((2 < iVar2) && (iVar2 + 2 < *(int *)((int)this + 0xc))) {
    *(int *)((int)this + 8) = iVar2 + 2;
    pfVar3 = (float *)FUN_0047aff0(param_1,local_24,0);
    local_48 = *pfVar3;
    local_44 = pfVar3[1];
    local_40 = pfVar3[2];
    pfVar3 = (float *)FUN_0047aff0(param_1,local_24,1);
    local_30 = *pfVar3;
    local_2c = pfVar3[1];
    local_28 = pfVar3[2];
    pfVar3 = (float *)FUN_0047aff0(param_1,local_24,2);
    local_3c = *pfVar3;
    local_38 = pfVar3[1];
    local_34 = pfVar3[2];
    FUN_0047a1e0(*(void **)((int)this + 4),&local_48,&local_30,&local_3c);
    local_44 = local_44 + param_2;
    local_2c = local_2c + param_2;
    local_38 = local_38 + param_2;
    FUN_0047a1e0((void *)(*(int *)((int)this + 4) + 0x18),&local_30,&local_48,&local_3c);
    if (0 < iVar2) {
      param_1 = (void *)0x30;
      iVar5 = 0;
      do {
        iVar1 = iVar5 + 1;
        local_50 = iVar1;
        if (iVar2 <= iVar1) {
          local_50 = iVar1 - iVar2;
        }
        pfVar3 = (float *)FUN_0047aff0(this_00,local_24,iVar5);
        local_48 = *pfVar3;
        local_44 = pfVar3[1] + param_2;
        local_40 = pfVar3[2];
        pfVar3 = (float *)FUN_0047aff0(this_00,local_18,iVar5);
        pfVar4 = (float *)FUN_0047aff0(this_00,local_c,local_50);
        FUN_0047a1e0((void *)(*(int *)((int)this + 4) + (int)param_1),&local_48,pfVar4,pfVar3);
        param_1 = (void *)((int)param_1 + 0x18);
        iVar5 = iVar1;
      } while (iVar1 < iVar2);
    }
    return 0;
  }
  return 0xffffffff;
}


