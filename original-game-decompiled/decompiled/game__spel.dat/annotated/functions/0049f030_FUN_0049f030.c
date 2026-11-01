
/* ==== FUN_0049f030 @ 0049f030 ==== 
 * signature: undefined __thiscall FUN_0049f030(void * this, uint param_1)
 * body: 0049f030-0049f29d
 */

/* WARNING: Removing unreachable block (ram,0x0049f0ec) */
/* WARNING: Removing unreachable block (ram,0x0049f1a9) */

void __thiscall FUN_0049f030(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  LPCSTR pCVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  FUN_004a0100((uint)(*(int *)this != 0),(byte *)s__s___d__Sound_types_not_allocate_005aeac4);
  FUN_004a00b0(*(int *)((int)this + 4),0,*(int *)((int)this + 8) + -1);
  pCVar9 = *(LPCSTR *)(param_1 + 0x1c);
  if (pCVar9 == (LPCSTR)0x0) {
    pCVar9 = "";
  }
  iVar1 = FUN_004c64d0(pCVar9);
  FUN_004a0100(iVar1,(byte *)s__s___d__Can_t_find_filename__s_w_005aea84);
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  iVar1 = *(int *)this + iVar1 * 0x38;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  pvVar7 = (void *)(iVar1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x20);
  if (pvVar7 == (void *)(param_1 + 0x18)) {
    FUN_0040f800(pvVar7,uVar10,0xffffffff);
    FUN_0040f800(pvVar7,0,0);
  }
  else {
    if (uVar10 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x1c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(pvVar7,'\x01');
        puVar4 = *(undefined1 **)(param_1 + 0x1c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)(iVar1 + 0x1c) = puVar4;
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0049f194;
      }
    }
    uVar3 = FUN_00402a00(pvVar7,uVar10,'\x01');
    if ((char)uVar3 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0057629c;
      }
      puVar11 = *(undefined4 **)(iVar1 + 0x1c);
      for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(uint *)(iVar1 + 0x20) = uVar10;
      *(undefined1 *)(*(int *)(iVar1 + 0x1c) + uVar10) = 0;
    }
  }
LAB_0049f194:
  uVar10 = *(uint *)(param_1 + 0x30);
  pvVar7 = (void *)(iVar1 + 0x28);
  if (pvVar7 == (void *)(param_1 + 0x28)) {
    if (*(uint *)(iVar1 + 0x30) < uVar10) {
      FUN_0054b29c();
    }
    FUN_00402c30(pvVar7);
    iVar2 = *(int *)(iVar1 + 0x30) - uVar10;
    iVar8 = -1;
    if (iVar2 != -1) {
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      puVar6 = (undefined4 *)(uVar10 + *(int *)(iVar1 + 0x2c));
      FUN_005580e0(puVar6,(undefined4 *)((int)puVar6 + iVar8),iVar2 - iVar8);
      uVar10 = *(int *)(iVar1 + 0x30) - iVar8;
      uVar3 = FUN_00402a00(pvVar7,uVar10,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(pvVar7,uVar10);
      }
    }
    FUN_0040f800(pvVar7,0,0);
    return;
  }
  if (uVar10 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x2c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0057629c;
    }
    if ((byte)puVar4[-1] < 0xfe) {
      FUN_004028f0(pvVar7,'\x01');
      puVar4 = *(undefined1 **)(param_1 + 0x2c);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      *(undefined1 **)(iVar1 + 0x2c) = puVar4;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      puVar4[-1] = puVar4[-1] + '\x01';
      return;
    }
  }
  uVar3 = FUN_00402a00(pvVar7,uVar10,'\x01');
  if ((char)uVar3 != '\0') {
    puVar6 = (undefined4 *)&DAT_0057629c;
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 0x2c);
    }
    puVar11 = *(undefined4 **)(iVar1 + 0x2c);
    for (uVar5 = uVar10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(uint *)(iVar1 + 0x30) = uVar10;
    *(undefined1 *)(*(int *)(iVar1 + 0x2c) + uVar10) = 0;
  }
  return;
}


