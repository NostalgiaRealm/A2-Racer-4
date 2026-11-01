
/* ==== FUN_00479930 @ 00479930 ==== 
 * signature: undefined1 * __thiscall FUN_00479930(void * this, undefined1 * param_1)
 * body: 00479930-00479a56
 */

/* WARNING: Removing unreachable block (ram,0x0047995f) */

undefined1 * __thiscall FUN_00479930(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar2 = *(undefined1 **)((int)this + 0x10);
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = *(uint *)(puVar2 + 8);
  if (param_1 == puVar2) {
    if (uVar3 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(param_1);
    iVar4 = *(int *)(param_1 + 8) - uVar3;
    iVar8 = -1;
    if (iVar4 != -1) {
      iVar8 = iVar4;
    }
    if (iVar8 != 0) {
      FUN_005580e0((undefined4 *)(uVar3 + *(int *)(param_1 + 4)),
                   (undefined4 *)((int)(uVar3 + *(int *)(param_1 + 4)) + iVar8),iVar4 - iVar8);
      iVar4 = *(int *)(param_1 + 8);
      uVar5 = FUN_00402a00(param_1,iVar4 - iVar8,'\0');
      if ((char)uVar5 != '\0') {
        FUN_004029e0(param_1,iVar4 - iVar8);
      }
    }
    FUN_00402c30(param_1);
    return param_1;
  }
  if (uVar3 != 0) {
    puVar6 = *(undefined1 **)(puVar2 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0057629c;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      FUN_004028f0(param_1,'\x01');
      puVar6 = *(undefined1 **)(puVar2 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0057629c;
      }
      *(undefined1 **)(param_1 + 4) = puVar6;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      return param_1;
    }
  }
  uVar5 = FUN_00402a00(param_1,uVar3,'\x01');
  if ((char)uVar5 != '\0') {
    puVar9 = *(undefined4 **)(puVar2 + 4);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)&DAT_0057629c;
    }
    puVar10 = *(undefined4 **)(param_1 + 4);
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(uint *)(param_1 + 8) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
  }
  return param_1;
}


