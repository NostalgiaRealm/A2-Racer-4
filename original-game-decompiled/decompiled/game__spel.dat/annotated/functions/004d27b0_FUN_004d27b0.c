
/* ==== FUN_004d27b0 @ 004d27b0 ==== 
 * signature: undefined __thiscall FUN_004d27b0(void * this, int param_1)
 * body: 004d27b0-004d29a7
 */

void __thiscall FUN_004d27b0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  
  iVar5 = *(int *)((int)this + 8);
  iVar4 = *(int *)((int)this + 0xc) - iVar5;
  pvVar1 = *(void **)((int)this + 4);
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar2 != iVar2) {
    iVar2 = iVar5 - (int)pvVar1 >> 0x1f;
    if ((iVar5 - (int)pvVar1) / 0x18 + iVar2 != iVar2) {
      FUN_004d2d40(iVar5 + -0x18,iVar5,(void *)iVar5);
      FUN_004d2de0((int)pvVar1,(int)*(void **)((int)this + 8) + -0x18,*(void **)((int)this + 8));
      FUN_004d2db0(pvVar1,(void *)((int)pvVar1 + 0x18),param_1);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
      return;
    }
    FUN_004d2d40((int)pvVar1,iVar5,(void *)((int)pvVar1 + 0x18));
    FUN_004d2d80(*(void **)((int)this + 8),1 - ((int)*(void **)((int)this + 8) - (int)pvVar1) / 0x18
                 ,param_1);
    FUN_004d2db0(pvVar1,*(void **)((int)this + 8),param_1);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
    return;
  }
  if ((pvVar1 == (void *)0x0) || (uVar6 = (iVar5 - (int)pvVar1) / 0x18, uVar6 < 2)) {
    uVar6 = 1;
  }
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (iVar5 - (int)pvVar1) / 0x18;
  }
  iVar5 = iVar5 + uVar6;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x18);
  pvVar7 = pvVar3;
  for (pvVar8 = *(void **)((int)this + 4); pvVar8 != pvVar1; pvVar8 = (void *)((int)pvVar8 + 0x18))
  {
    FUN_004d2e20(pvVar7,(int)pvVar8);
    pvVar7 = (void *)((int)pvVar7 + 0x18);
  }
  FUN_004d2d80(pvVar7,1,param_1);
  FUN_004d2d40((int)pvVar1,*(int *)((int)this + 8),(void *)((int)pvVar7 + 0x18));
  FUN_004d2d10(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x18);
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 != 0) {
    *(void **)((int)this + 4) = pvVar3;
    *(void **)((int)this + 8) =
         (void *)((int)pvVar3 + (((*(int *)((int)this + 8) - iVar5) / 0x18) * 3 + 3) * 8);
    return;
  }
  *(void **)((int)this + 4) = pvVar3;
  *(int *)((int)this + 8) = (int)pvVar3 + 0x18;
  return;
}


