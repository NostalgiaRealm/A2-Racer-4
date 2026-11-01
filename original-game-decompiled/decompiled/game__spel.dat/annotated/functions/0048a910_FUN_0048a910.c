
/* ==== FUN_0048a910 @ 0048a910 ==== 
 * signature: undefined __thiscall FUN_0048a910(void * this, int param_1, int param_2)
 * body: 0048a910-0048abdf
 */

void __thiscall FUN_0048a910(void *this,int param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_1c [4];
  byte *pbStack_18;
  uint uStack_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d7db;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) != 0) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &local_c;
    FUN_004028f0(local_1c,'\0');
    pcVar2 = *(char **)(param_1 + 4);
    local_4 = 0;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    uVar7 = (uint)(*pcVar2 == '~');
    uVar8 = uVar7;
    if (uVar7 < *(uint *)(param_1 + 8)) {
      do {
        iVar9 = *(int *)(iVar3 + 4);
        if (iVar9 == 0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)(iVar9 + uVar8);
        }
        param_1._0_1_ = *pcVar2;
        if (('`' < (char)param_1) && ((char)param_1 < '{')) {
          param_1._0_1_ = (char)param_1 + -0x20;
        }
        FUN_0047eab0(local_1c,1,(char)param_1);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(iVar3 + 8));
    }
    if (uVar7 == 0) {
      iVar9 = 0;
      iVar3 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
      if (0 < iVar3) {
        do {
          pvVar6 = (void *)FUN_0049dd90(*(int *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) +
                                                iVar9 * 4));
          pbVar4 = pbStack_18;
          if (pbStack_18 == (byte *)0x0) {
            pbVar4 = &DAT_0057629c;
          }
          uVar8 = FUN_0040fc80(pvVar6,0,*(uint *)((int)pvVar6 + 8),pbVar4,uStack_14);
          if (uVar8 == 0) {
            iVar3 = FUN_0049dd50(*(int *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + iVar9 * 4));
            iVar3 = FUN_0049d200(iVar3);
            if (iVar3 != -1) {
              iVar3 = *(int *)((int)this + 0x260);
              pvVar6 = *(void **)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + iVar9 * 4);
              iVar5 = FUN_0049dd70((int)pvVar6);
              FUN_00489ec0(this,pvVar6,iVar3 + iVar5,param_2);
            }
            FUN_004899a0(this,*(int *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + iVar9 * 4));
            if (pbStack_18 == (byte *)0x0) {
              ExceptionList = local_c;
              return;
            }
            bVar1 = pbStack_18[-1];
            if ((bVar1 != 0) && (bVar1 != 0xff)) {
              pbStack_18[-1] = bVar1 - 1;
              ExceptionList = local_c;
              return;
            }
            goto LAB_0048abc1;
          }
          iVar9 = iVar9 + 1;
          iVar3 = (*(code *)**(undefined4 **)((int)this + 0x2a8))();
        } while (iVar9 < iVar3);
      }
      if (pbStack_18 != (byte *)0x0) {
        bVar1 = pbStack_18[-1];
        if ((bVar1 == 0) || (bVar1 == 0xff)) {
LAB_0048abc1:
          FUN_0054b339(pbStack_18 + -1);
        }
        else {
          pbStack_18[-1] = bVar1 - 1;
        }
      }
    }
    else {
      iVar9 = 0;
      iVar3 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          pvVar6 = (void *)(iVar3 + *(int *)(*(int *)((int)this + 700) + 4));
          pbVar4 = pbStack_18;
          if (pbStack_18 == (byte *)0x0) {
            pbVar4 = &DAT_0057629c;
          }
          uVar8 = FUN_0040fc80(pvVar6,0,*(uint *)((int)pvVar6 + 8),pbVar4,uStack_14);
          if (uVar8 == 0) {
            iVar3 = *(int *)(iVar9 * 0x114 + 0x10 + *(int *)(*(int *)((int)this + 700) + 4));
            if (0 < iVar3) {
              iVar3 = FUN_00489e50(iVar3);
              pvVar6 = *(void **)(*(int *)(*(int *)((int)this + 0x2ac) + 4) +
                                 *(int *)(*(int *)(*(int *)((int)this + 700) + 4) + 0x14 +
                                         (iVar3 + iVar9 * 0x45) * 4) * 4);
              iVar3 = FUN_0049dd70((int)pvVar6);
              FUN_00489ec0(this,pvVar6,iVar3 + *(int *)((int)this + 0x260),param_2);
              FUN_004899a0(this,*(int *)(*(int *)(*(int *)((int)this + 0x2ac) + 4) + iVar9 * 4));
            }
            break;
          }
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 0x114;
          iVar5 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
        } while (iVar9 < iVar5);
      }
      local_4 = 0xffffffff;
      FUN_004028f0(local_1c,'\x01');
    }
  }
  ExceptionList = local_c;
  return;
}


