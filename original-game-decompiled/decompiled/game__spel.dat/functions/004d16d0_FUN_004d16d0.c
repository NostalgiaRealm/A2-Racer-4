
/* ==== FUN_004d16d0 @ 004d16d0 ==== 
 * signature: undefined __thiscall FUN_004d16d0(void * this, undefined1 * param_1, undefined4 param_2)
 * body: 004d16d0-004d18cd
 */

/* WARNING: Removing unreachable block (ram,0x004d1879) */
/* WARNING: Removing unreachable block (ram,0x004d1890) */
/* WARNING: Removing unreachable block (ram,0x004d189f) */
/* WARNING: Removing unreachable block (ram,0x004d18a8) */

void __thiscall FUN_004d16d0(void *this,undefined1 *param_1,undefined4 param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 in_stack_ffffffc8;
  undefined4 *in_stack_ffffffcc;
  uint in_stack_ffffffd0;
  undefined4 uVar8;
  undefined4 *local_14;
  void *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056fafb;
  local_c = ExceptionList;
  uVar8 = 0x4d16f5;
  ExceptionList = &local_c;
  this_00 = operator_new(0x1c);
  local_4 = 0;
  local_10 = this_00;
  if (this_00 == (void *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_0041c870(&stack0xffffffc8,param_1);
    local_14 = FUN_004d18d0(this_00,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,uVar8,
                            param_2);
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
    puVar5 = puVar3;
    for (puVar6 = *(undefined4 **)((int)this + 8); puVar6 != puVar7; puVar6 = puVar6 + 1) {
      FUN_004d2770(puVar5,puVar6);
      puVar5 = puVar5 + 1;
    }
    FUN_004de280(puVar5,1,&local_14);
    FUN_004de170(puVar7,*(undefined4 **)((int)this + 0xc),puVar5 + 1);
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
    puVar6 = *(undefined4 **)((int)this + 0xc);
    for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      *puVar7 = local_14;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
  }
  ExceptionList = local_c;
  return;
}


