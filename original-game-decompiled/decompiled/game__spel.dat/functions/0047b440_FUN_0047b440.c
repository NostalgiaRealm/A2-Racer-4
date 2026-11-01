
/* ==== FUN_0047b440 @ 0047b440 ==== 
 * signature: undefined4 __thiscall FUN_0047b440(void * this, float * param_1, void * param_2)
 * body: 0047b440-0047b520
 */

undefined4 __thiscall FUN_0047b440(void *this,float *param_1,void *param_2)

{
  bool bVar1;
  void *this_00;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 local_24 [3];
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  this_00 = param_2;
  iVar2 = FUN_0047b100((int)param_2);
  if ((2 < iVar2) && (iVar2 + 1 < *(int *)((int)this + 0xc))) {
    *(int *)((int)this + 8) = iVar2 + 1;
    pfVar3 = (float *)FUN_0047aff0(param_2,local_24,2);
    pfVar4 = (float *)FUN_0047aff0(param_2,local_18,0);
    pfVar5 = (float *)FUN_0047aff0(param_2,local_c,1);
    FUN_0047a1e0(*(void **)((int)this + 4),pfVar5,pfVar4,pfVar3);
    if (0 < iVar2) {
      param_2 = &DAT_00000018;
      iVar7 = 1;
      do {
        iVar6 = iVar7;
        if (iVar2 <= iVar7) {
          iVar6 = iVar7 - iVar2;
        }
        pfVar3 = (float *)FUN_0047aff0(this_00,local_c,iVar7 + -1);
        pfVar4 = (float *)FUN_0047aff0(this_00,local_18,iVar6);
        FUN_0047a1e0((void *)((int)param_2 + *(int *)((int)this + 4)),param_1,pfVar4,pfVar3);
        param_2 = (void *)((int)param_2 + 0x18);
        bVar1 = iVar7 < iVar2;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    return 0;
  }
  return 0xffffffff;
}


