
/* ==== FUN_004dccd0 @ 004dccd0 ==== 
 * signature: undefined1 * __thiscall FUN_004dccd0(void * this, int param_1)
 * body: 004dccd0-004dcecf
 */

/* WARNING: Removing unreachable block (ram,0x004dce4f) */
/* WARNING: Removing unreachable block (ram,0x004dce6a) */
/* WARNING: Removing unreachable block (ram,0x004dce79) */
/* WARNING: Removing unreachable block (ram,0x004dce80) */

undefined1 * __thiscall FUN_004dccd0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  pcStack_8 = FUN_00570ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  puVar5 = *(undefined4 **)(param_1 + 4);
  local_10 = this;
  if (puVar5 != *(undefined4 **)(param_1 + 8)) {
    do {
      local_20 = *puVar5;
      puVar6 = *(undefined4 **)((int)this + 8);
      local_1c = puVar5;
      if (*(int *)((int)this + 0xc) - (int)puVar6 >> 2 == 0) {
        iVar2 = *(int *)((int)this + 4);
        if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
          uVar4 = 1;
        }
        if (iVar2 == 0) {
          local_14 = 0;
        }
        else {
          local_14 = (int)puVar6 - iVar2 >> 2;
        }
        local_14 = local_14 + uVar4;
        iVar2 = local_14;
        if (local_14 < 0) {
          iVar2 = 0;
        }
        puVar3 = operator_new(iVar2 << 2);
        local_18 = puVar3;
        for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          FUN_004d2770(puVar3,puVar5);
          puVar3 = puVar3 + 1;
        }
        FUN_004de280(puVar3,1,&local_20);
        FUN_004de170(puVar6,*(undefined4 **)((int)this + 8),puVar3 + 1);
        FUN_0042f530();
        FUN_0054b339(*(LPVOID *)((int)this + 4));
        puVar5 = local_18;
        *(undefined4 **)((int)this + 0xc) = local_18 + local_14;
        iVar2 = FUN_00492480((int)this);
        *(undefined4 **)((int)this + 4) = puVar5;
        *(undefined4 **)((int)this + 8) = puVar5 + iVar2 + 1;
        puVar5 = local_1c;
      }
      else {
        FUN_004de170(puVar6,puVar6,puVar6 + 1);
        FUN_004de280(*(undefined4 **)((int)this + 8),
                     1 - ((int)*(undefined4 **)((int)this + 8) - (int)puVar6 >> 2),&local_20);
        puVar3 = *(undefined4 **)((int)this + 8);
        for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
          *puVar6 = local_20;
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 8));
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = pvVar1;
  return this;
}


