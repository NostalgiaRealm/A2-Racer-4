
/* ==== FUN_004d2290 @ 004d2290 ==== 
 * signature: undefined __thiscall FUN_004d2290(void * this, undefined1 * param_1, undefined1 * param_2, undefined4 param_3)
 * body: 004d2290-004d24aa
 */

/* WARNING: Removing unreachable block (ram,0x004d2456) */
/* WARNING: Removing unreachable block (ram,0x004d246d) */
/* WARNING: Removing unreachable block (ram,0x004d247c) */
/* WARNING: Removing unreachable block (ram,0x004d2485) */

void __thiscall FUN_004d2290(void *this,undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffffb8;
  int in_stack_ffffffbc;
  undefined4 uVar8;
  undefined1 in_stack_ffffffc8;
  int in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 uVar9;
  undefined4 *local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fc03;
  local_c = ExceptionList;
  uVar9 = 0x4d22b5;
  ExceptionList = &local_c;
  this_00 = operator_new(0x2c);
  local_4 = 0;
  local_10 = this_00;
  if (this_00 == (void *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x4d22e2;
    FUN_0041c870(&stack0xffffffc8,param_2);
    local_4._0_1_ = 1;
    FUN_0041c870(&stack0xffffffb8,param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    local_14 = FUN_004d24b0(this_00,in_stack_ffffffb8,in_stack_ffffffbc,uVar8,param_2,
                            in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,uVar9,param_3);
  }
  local_4 = 0xffffffff;
  puVar7 = *(undefined4 **)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - (int)puVar7 >> 2 == 0) {
    iVar1 = *(int *)((int)this + 8);
    if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1 >> 2, uVar4 < 2)) {
      uVar4 = 1;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar7 - iVar1 >> 2;
    }
    iVar1 = iVar1 + uVar4;
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 4);
    puVar6 = puVar3;
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar7; puVar5 = puVar5 + 1) {
      FUN_004d2770(puVar6,puVar5);
      puVar6 = puVar6 + 1;
    }
    FUN_004de280(puVar6,1,&local_14);
    FUN_004de170(puVar7,*(undefined4 **)((int)this + 0xc),puVar6 + 1);
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)this + 8));
    iVar2 = *(int *)((int)this + 8);
    *(undefined4 **)((int)this + 0x10) = puVar3 + iVar1;
    if (iVar2 == 0) {
      *(undefined4 **)((int)this + 8) = puVar3;
      *(undefined4 **)((int)this + 0xc) = puVar3 + 1;
    }
    else {
      *(undefined4 **)((int)this + 8) = puVar3;
      *(undefined4 **)((int)this + 0xc) = puVar3 + (*(int *)((int)this + 0xc) - iVar2 >> 2) + 1;
    }
  }
  else {
    FUN_004de170(puVar7,puVar7,puVar7 + 1);
    FUN_004de280(*(undefined4 **)((int)this + 0xc),
                 1 - ((int)*(undefined4 **)((int)this + 0xc) - (int)puVar7 >> 2),&local_14);
    puVar5 = *(undefined4 **)((int)this + 0xc);
    for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
      *puVar7 = local_14;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}


