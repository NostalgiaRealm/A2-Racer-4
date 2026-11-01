
/* ==== FUN_004dd830 @ 004dd830 ==== 
 * signature: undefined4 * __thiscall FUN_004dd830(void * this, int param_1)
 * body: 004dd830-004ddab5
 */

/* WARNING: Removing unreachable block (ram,0x004dda49) */
/* WARNING: Removing unreachable block (ram,0x004dda64) */
/* WARNING: Removing unreachable block (ram,0x004dda73) */
/* WARNING: Removing unreachable block (ram,0x004dda7a) */

undefined4 * __thiscall FUN_004dd830(void *this,int param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570ceb;
  local_c = ExceptionList;
  puVar1 = (undefined1 *)((int)this + 4);
  ExceptionList = &local_c;
  *puVar1 = (undefined1)param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_00577978;
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8) >> 2;
  }
  local_14 = this;
  if (uVar3 < local_1c) {
    uVar3 = local_1c;
    if ((int)local_1c < 0) {
      uVar3 = 0;
    }
    puVar4 = operator_new(uVar3 * 4);
    puVar7 = *(undefined4 **)((int)this + 8);
    local_18 = *(undefined4 **)((int)this + 0xc);
    puVar9 = puVar4;
    if (puVar7 != local_18) {
      do {
        FUN_004d2770(puVar9,puVar7);
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (puVar7 != local_18);
    }
    local_10 = *(undefined4 **)((int)this + 8);
    FUN_0054b339(local_10);
    *(undefined4 **)((int)this + 0x10) = puVar4 + local_1c;
    iVar5 = FUN_00492480((int)puVar1);
    *(undefined4 **)((int)this + 0xc) = puVar4 + iVar5;
    *(undefined4 **)((int)this + 8) = puVar4;
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (puVar7 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      local_18 = puVar7;
      local_1c = (**(code **)(*(int *)*puVar7 + 0x28))();
      puVar8 = *(uint **)((int)this + 0xc);
      if (*(int *)((int)this + 0x10) - (int)puVar8 >> 2 == 0) {
        uVar3 = FUN_00492480((int)puVar1);
        if (uVar3 < 2) {
          iVar5 = 1;
        }
        else {
          iVar5 = FUN_00492480((int)puVar1);
        }
        iVar6 = FUN_00492480((int)puVar1);
        iVar6 = iVar6 + iVar5;
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = 0;
        }
        puVar7 = operator_new(iVar5 * 4);
        local_10 = FUN_004de170(*(undefined4 **)((int)this + 8),puVar8,puVar7);
        FUN_004de280(local_10,1,&local_1c);
        FUN_004de170(puVar8,*(undefined4 **)((int)this + 0xc),local_10 + 1);
        FUN_0042f530();
        FUN_0054b339(*(LPVOID *)((int)this + 8));
        *(undefined4 **)((int)this + 0x10) = puVar7 + iVar6;
        iVar5 = FUN_00492480((int)puVar1);
        *(undefined4 **)((int)this + 8) = puVar7;
        *(undefined4 **)((int)this + 0xc) = puVar7 + iVar5 + 1;
        puVar7 = local_18;
      }
      else {
        FUN_004de170(puVar8,puVar8,puVar8 + 1);
        FUN_004de280(*(undefined4 **)((int)this + 0xc),
                     1 - ((int)*(undefined4 **)((int)this + 0xc) - (int)puVar8 >> 2),&local_1c);
        puVar2 = *(uint **)((int)this + 0xc);
        for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
          *puVar8 = local_1c;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return local_14;
}


