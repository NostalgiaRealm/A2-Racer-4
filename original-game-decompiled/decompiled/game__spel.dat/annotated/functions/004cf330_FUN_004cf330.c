
/* ==== FUN_004cf330 @ 004cf330 ==== 
 * signature: undefined4 * __thiscall FUN_004cf330(void * this, undefined1 * param_1)
 * body: 004cf330-004cf4e5
 */

/* WARNING: Removing unreachable block (ram,0x004cf39d) */

undefined4 * __thiscall FUN_004cf330(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *this_00;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  *(undefined4 *)((int)this + 8) = 3;
  this_00 = operator_new(0x10);
  local_4 = 0;
  if (this_00 == (undefined1 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    ExceptionList = local_c;
    return this;
  }
  uVar1 = *param_1;
  *(undefined4 *)(this_00 + 4) = 0;
  *this_00 = uVar1;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  if (this_00 == param_1) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_00);
    iVar3 = *(int *)(this_00 + 8) - uVar2;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      FUN_005580e0((undefined4 *)(uVar2 + *(int *)(this_00 + 4)),
                   (undefined4 *)((int)(uVar2 + *(int *)(this_00 + 4)) + iVar7),iVar3 - iVar7);
      iVar3 = *(int *)(this_00 + 8);
      uVar4 = FUN_00402a00(this_00,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(this_00,iVar3 - iVar7);
      }
    }
    FUN_00402c30(this_00);
    *(undefined1 **)((int)this + 0x10) = this_00;
    ExceptionList = local_c;
    return this;
  }
  if (uVar2 != 0) {
    puVar5 = *(undefined1 **)(param_1 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0057629c;
    }
    if ((byte)puVar5[-1] < 0xfe) {
      FUN_004028f0(this_00,'\x01');
      puVar5 = *(undefined1 **)(param_1 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      *(undefined1 **)(this_00 + 4) = puVar5;
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar5[-1] = puVar5[-1] + '\x01';
      *(undefined1 **)((int)this + 0x10) = this_00;
      ExceptionList = local_c;
      return this;
    }
  }
  uVar4 = FUN_00402a00(this_00,uVar2,'\x01');
  if ((char)uVar4 != '\0') {
    puVar8 = *(undefined4 **)(param_1 + 4);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)&DAT_0057629c;
    }
    puVar9 = *(undefined4 **)(this_00 + 4);
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(uint *)(this_00 + 8) = uVar2;
    *(undefined1 *)(*(int *)(this_00 + 4) + uVar2) = 0;
  }
  *(undefined1 **)((int)this + 0x10) = this_00;
  ExceptionList = local_c;
  return this;
}


