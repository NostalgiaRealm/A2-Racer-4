
/* ==== FUN_004a2f70 @ 004a2f70 ==== 
 * signature: undefined4 __thiscall FUN_004a2f70(void * this, float param_1, float param_2)
 * body: 004a2f70-004a31cb
 */

undefined4 __thiscall FUN_004a2f70(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_ESI;
  int iVar7;
  float10 fVar8;
  float fVar9;
  
  fVar6 = param_1 * -0.01;
  (**(code **)(**(int **)((int)this + 0x30) + 0x30))(2);
  fVar9 = 0.0;
  iVar7 = 0;
  do {
    fVar8 = (float10)(**(code **)(**(int **)((int)this + 0x30) + 0x34))(iVar7);
    iVar7 = iVar7 + 1;
    fVar9 = (float)(ABS(fVar8) + (float10)fVar9);
  } while (iVar7 < 4);
  fVar9 = fVar9 * 0.63661975;
  fVar8 = FUN_004a2f50((int)this,fVar9);
  *(undefined4 *)((int)this + 0xe4) = 0;
  if ((float10)*(float *)((int)this + 0x84) < fVar8) {
    do {
      if (*(int *)((int)this + 0xc0) + -1 <= *(int *)((int)this + 0xe4)) break;
      *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + 1;
      fVar8 = FUN_004a2f50((int)this,fVar9);
    } while ((float10)*(float *)((int)this + 0x84) < fVar8);
  }
  if (fVar8 < (float10)*(float *)((int)this + 0x88)) {
    do {
      if (*(int *)((int)this + 0xe4) < 1) break;
      *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xe4) + -1;
      fVar8 = FUN_004a2f50((int)this,fVar9);
    } while (fVar8 < (float10)*(float *)((int)this + 0x88));
  }
  fVar8 = FUN_004a2f50((int)this,fVar9);
  iVar7 = 0;
  *(float *)((int)this + 0xbc) = (float)fVar8;
  fVar9 = *(float *)((int)this + *(int *)((int)this + 0xe4) * 4 + 0xa4);
  fVar1 = *(float *)((int)this + 0xa0);
  fVar2 = *(float *)((int)this + 0x80);
  fVar3 = *(float *)((int)this + 0x84);
  fVar4 = *(float *)((int)this + 0x74);
  do {
    if (iVar7 < 2) {
      fVar5 = *(float *)((int)this + 0x8c);
    }
    else {
      fVar5 = 1.0 - *(float *)((int)this + 0x8c);
    }
    (**(code **)(**(int **)((int)this + 0x30) + 0x20))
              (iVar7,fVar5 * *(float *)((int)this + 0x74) *
                     ((fVar9 * fVar1 * fVar2 * unaff_ESI * 447420.0) / (fVar3 * fVar4 * 6.2831855))
                     * -0.5);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  if (param_1 != 0.0) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x30))(2);
    iVar7 = 0;
    do {
      (**(code **)(**(int **)((int)this + 0x30) + 0x34))(iVar7);
      (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                (iVar7,-(*(float *)((int)this + (iVar7 / 2) * 4 + 0x90) *
                         *(float *)((int)this + 0x74) * fVar6 * 0.5));
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    (**(code **)(**(int **)((int)this + 0x30) + 0x24))();
  }
  param_2._0_1_ = SUB41(param_2 * 0.01,0);
  if (param_2._0_1_ == '\0') {
    if (*(char *)((int)this + 0xe8) != '\0') {
      *(undefined1 *)((int)this + 0xe8) = 0;
      FUN_004a2e50(this,2);
      FUN_004a2e50(this,3);
    }
  }
  else if (*(char *)((int)this + 0xe8) == '\0') {
    *(undefined1 *)((int)this + 0xe8) = 1;
    FUN_004a2e30(this,2);
    FUN_004a2e30(this,3);
  }
  return CONCAT31((int3)((uint)fVar6 >> 8),fVar6 != *(float *)((int)this + 0xe4));
}


