
/* ==== FUN_004edac0 @ 004edac0 ==== 
 * signature: undefined4 * __thiscall FUN_004edac0(void * this, undefined4 * param_1)
 * body: 004edac0-004edc39
 */

/* WARNING: Removing unreachable block (ram,0x004edb1c) */

undefined4 * __thiscall FUN_004edac0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005727b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558826(this);
  this_00 = (undefined4 *)((int)this + 0xc);
  *(undefined1 *)this_00 = param_1._0_1_;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_FUN_00578210;
  local_4 = 1;
  uVar7 = param_1[2];
  if (this_00 == param_1) {
    if (*(uint *)((int)this + 0x14) < uVar7) {
      FUN_0054b29c();
    }
    FUN_00402c30(this_00);
    iVar2 = *(int *)((int)this + 0x14) - uVar7;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 0x10));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((int)this + 0x14) - iVar8;
      uVar3 = FUN_00402a00(this_00,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(this_00,uVar7);
      }
    }
    FUN_00402c30(this_00);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar8 = *(int *)((int)this + 0x10);
        if (iVar8 != 0) {
          cVar1 = *(char *)(iVar8 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iVar8 + -1));
          }
          else {
            *(char *)(iVar8 + -1) = cVar1 + -1;
          }
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined4 *)((int)this + 0x18) = 0;
        puVar4 = (undefined1 *)param_1[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = puVar4;
        *(undefined4 *)((int)this + 0x14) = param_1[2];
        *(undefined4 *)((int)this + 0x18) = param_1[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        ExceptionList = local_c;
        return this;
      }
    }
    uVar3 = FUN_00402a00(this_00,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = *(undefined4 **)((int)this + 0x10);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004029e0(this_00,uVar7);
    }
  }
  ExceptionList = local_c;
  return this;
}


