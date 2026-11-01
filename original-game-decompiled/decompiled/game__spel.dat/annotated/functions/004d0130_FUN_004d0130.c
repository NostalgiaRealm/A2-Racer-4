
/* ==== FUN_004d0130 @ 004d0130 ==== 
 * signature: int __thiscall FUN_004d0130(void * this, int param_1)
 * body: 004d0130-004d0302
 */

int __thiscall FUN_004d0130(void *this,int param_1)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char local_9;
  char *pcStack_8;
  int iStack_4;
  
  if (param_1 == -1) {
    return 0;
  }
  uVar5 = **(uint **)((int)this + 0x20);
  cVar7 = (char)param_1;
  if (uVar5 != 0) {
    iVar9 = **(int **)((int)this + 0x30);
    if (uVar5 < iVar9 + uVar5) {
      **(int **)((int)this + 0x30) = iVar9 + -1;
      pcVar1 = (char *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(pcVar1 + 1);
      *pcVar1 = cVar7;
      return param_1;
    }
  }
  piVar11 = *(int **)((int)this + 0x50);
  if (piVar11 == (int *)0x0) {
    return -1;
  }
  if (*(int *)((int)this + 0x38) == 0) {
LAB_004d0291:
    uVar5 = FUN_0055a436((int)cVar7,piVar11);
    if (uVar5 != 0xffffffff) {
      return param_1;
    }
  }
  else {
    pvVar2 = *(void **)((int)this + 0x44);
    local_9 = cVar7;
    FUN_00402c30(pvVar2);
    iVar9 = *(int *)((int)pvVar2 + 8);
    iVar8 = -1;
    if (iVar9 != -1) {
      iVar8 = iVar9;
    }
    if (iVar8 != 0) {
      FUN_005580e0(*(undefined4 **)((int)pvVar2 + 4),
                   (undefined4 *)((int)*(undefined4 **)((int)pvVar2 + 4) + iVar8),iVar9 - iVar8);
      uVar5 = *(int *)((int)pvVar2 + 8) - iVar8;
      uVar4 = FUN_00402a00(pvVar2,uVar5,'\0');
      if ((char)uVar4 != '\0') {
        *(uint *)((int)pvVar2 + 8) = uVar5;
        *(undefined1 *)(uVar5 + *(int *)((int)pvVar2 + 4)) = 0;
      }
    }
    pvVar2 = *(void **)((int)this + 0x44);
    if (-*(int *)((int)pvVar2 + 8) - 1U < 9) {
      FUN_0054b1b4();
    }
    uVar5 = *(int *)((int)pvVar2 + 8) + 8;
    uVar4 = FUN_00402a00(pvVar2,uVar5,'\0');
    if ((char)uVar4 != '\0') {
      puVar6 = (undefined4 *)(*(int *)((int)pvVar2 + 4) + *(int *)((int)pvVar2 + 8));
      *puVar6 = 0;
      puVar6[1] = 0;
      *(uint *)((int)pvVar2 + 8) = uVar5;
      *(undefined1 *)(*(int *)((int)pvVar2 + 4) + uVar5) = 0;
    }
    pvVar2 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar2);
    if (*(int *)((int)pvVar2 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((int)pvVar2 + 8) + *(int *)((int)pvVar2 + 4);
    }
    pvVar2 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar2);
    iVar9 = (**(code **)(**(int **)((int)this + 0x38) + 0x14))
                      ((int)this + 0x40,&local_9,&pcStack_8,&pcStack_8,
                       *(undefined4 *)((int)pvVar2 + 4),iVar9,&iStack_4);
    if (iVar9 != 0) {
      if (iVar9 != 1) {
        if (iVar9 != 3) {
          return -1;
        }
        piVar11 = *(int **)((int)this + 0x50);
        cVar7 = local_9;
        goto LAB_004d0291;
      }
      if (pcStack_8 == &local_9) {
        return -1;
      }
    }
    pvVar2 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar2);
    pvVar3 = *(void **)((int)this + 0x44);
    uVar10 = iStack_4 - *(int *)((int)pvVar2 + 4);
    FUN_00471de0(pvVar3);
    uVar5 = FUN_00558c1d(*(char **)((int)pvVar3 + 4),uVar10,1,*(int **)((int)this + 0x50));
    if (uVar5 == uVar10) {
      return param_1;
    }
  }
  return -1;
}


