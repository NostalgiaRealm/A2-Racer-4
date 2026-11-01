
/* ==== FUN_00479b80 @ 00479b80 ==== 
 * signature: undefined4 * __thiscall FUN_00479b80(void * this, undefined4 * param_1)
 * body: 00479b80-00479ce6
 */

/* WARNING: Removing unreachable block (ram,0x00479bde) */

undefined4 * __thiscall FUN_00479b80(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ba08;
  local_c = ExceptionList;
  local_14 = &DAT_00712694;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00558853(this,&local_14);
  puVar9 = (undefined4 *)((int)this + 0xc);
  uVar1 = *(undefined1 *)param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)puVar9 = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar7 = param_1[2];
  local_4 = 0;
  if (puVar9 == param_1) {
    if (uVar7 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar9);
    iVar2 = *(int *)((int)this + 0x14) - uVar7;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(uVar7 + *(int *)((int)this + 0x10));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar7 = *(int *)((int)this + 0x14) - iVar8;
      uVar3 = FUN_00402a00(puVar9,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar9,uVar7);
      }
    }
    FUN_00402c30(puVar9);
  }
  else {
    if (uVar7 != 0) {
      puVar4 = (undefined1 *)param_1[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(puVar9,'\x01');
        puVar4 = (undefined1 *)param_1[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)((int)this + 0x10) = puVar4;
        *(undefined4 *)((int)this + 0x14) = param_1[2];
        *(undefined4 *)((int)this + 0x18) = param_1[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00479c3c;
      }
    }
    uVar3 = FUN_00402a00(puVar9,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = (undefined4 *)param_1[1];
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)&DAT_0057629c;
      }
      puVar6 = *(undefined4 **)((int)this + 0x10);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar7;
      *(undefined1 *)(uVar7 + *(int *)((int)this + 0x10)) = 0;
      *local_10 = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return local_10;
    }
  }
LAB_00479c3c:
  *(undefined ***)this = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return this;
}


