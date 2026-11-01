
/* ==== FUN_004d2a00 @ 004d2a00 ==== 
 * signature: undefined1 * __thiscall FUN_004d2a00(void * this, int param_1)
 * body: 004d2a00-004d2c8d
 */

/* WARNING: Removing unreachable block (ram,0x004d2c36) */

undefined1 * __thiscall FUN_004d2a00(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056fc68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18, iVar4 != 0)) {
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x18);
    iVar2 = *(int *)((int)this + 8);
    pvVar7 = pvVar3;
    for (iVar8 = *(int *)((int)this + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
      FUN_004d2e20(pvVar7,iVar8);
      pvVar7 = (void *)((int)pvVar7 + 0x18);
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    for (puVar9 = *(undefined4 **)((int)this + 4); puVar9 != puVar1; puVar9 = puVar9 + 6) {
      (**(code **)*puVar9)(0);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x18);
    iVar4 = FUN_004d2ce0((int)this);
    *(void **)((int)this + 4) = pvVar3;
    *(void **)((int)this + 8) = (void *)((int)pvVar3 + iVar4 * 0x18);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != *(int *)(param_1 + 8)) {
    do {
      pvVar7 = *(void **)((int)this + 8);
      iVar8 = *(int *)((int)this + 0xc) - (int)pvVar7;
      iVar2 = iVar8 >> 0x1f;
      if (iVar8 / 0x18 + iVar2 == iVar2) {
        uVar5 = FUN_004d2ce0((int)this);
        if (uVar5 < 2) {
          iVar2 = 1;
        }
        else {
          iVar2 = FUN_004d2ce0((int)this);
        }
        iVar8 = FUN_004d2ce0((int)this);
        iVar8 = iVar8 + iVar2;
        iVar2 = iVar8;
        if (iVar8 < 0) {
          iVar2 = 0;
        }
        pvVar3 = operator_new(iVar2 * 0x18);
        pvVar6 = FUN_004d2d40(*(int *)((int)this + 4),(int)pvVar7,pvVar3);
        FUN_004d2d80(pvVar6,1,iVar4);
        FUN_004d2d40((int)pvVar7,*(int *)((int)this + 8),(void *)((int)pvVar6 + 0x18));
        FUN_004d2d10(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
        FUN_0054b339(*(LPVOID *)((int)this + 4));
        *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + iVar8 * 0x18);
        iVar2 = FUN_004d2ce0((int)this);
        *(void **)((int)this + 4) = pvVar3;
        *(void **)((int)this + 8) = (void *)((int)pvVar3 + (iVar2 + 1) * 0x18);
      }
      else {
        FUN_004d2d40((int)pvVar7,(int)pvVar7,(void *)((int)pvVar7 + 0x18));
        FUN_004d2d80(*(void **)((int)this + 8),
                     1 - ((int)*(void **)((int)this + 8) - (int)pvVar7) / 0x18,iVar4);
        FUN_004d2db0(pvVar7,*(void **)((int)this + 8),iVar4);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(param_1 + 8));
  }
  ExceptionList = pvStack_c;
  return this;
}


