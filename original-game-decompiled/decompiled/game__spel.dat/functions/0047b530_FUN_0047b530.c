
/* ==== FUN_0047b530 @ 0047b530 ==== 
 * signature: int __thiscall FUN_0047b530(void * this, float * param_1)
 * body: 0047b530-0047b5dc
 */

int __thiscall FUN_0047b530(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int local_18;
  float local_14;
  undefined4 local_c [3];
  
  iVar7 = *(int *)((int)this + 8);
  if (0 < iVar7) {
    iVar10 = 0;
    local_18 = -1;
    if (0 < iVar7) {
      iVar9 = 0;
      do {
        pfVar8 = (float *)FUN_0047a2e0((void *)(*(int *)((int)this + 4) + iVar9),local_c);
        fVar1 = pfVar8[2];
        fVar2 = param_1[2];
        fVar3 = pfVar8[1];
        fVar4 = param_1[1];
        fVar5 = *param_1;
        fVar6 = *pfVar8;
        fVar11 = FUN_0047a300(*(int *)((int)this + 4) + iVar9);
        fVar11 = (float10)(fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2) - fVar11;
        if (((float10)0.0 < fVar11) && ((local_18 == -1 || (fVar11 < (float10)local_14)))) {
          local_14 = (float)fVar11;
          local_18 = iVar10;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x18;
      } while (iVar10 < iVar7);
    }
    return local_18;
  }
  return -1;
}


