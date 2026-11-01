
/* ==== FUN_00410f80 @ 00410f80 ==== 
 * signature: undefined __cdecl FUN_00410f80(undefined1 * param_1, undefined1 * param_2)
 * body: 00410f80-00411135
 */

/* WARNING: Removing unreachable block (ram,0x00410fd1) */

void __cdecl FUN_00410f80(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00569a61;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(param_1);
    iVar3 = *(int *)(param_1 + 8) - uVar2;
    iVar8 = -1;
    if (iVar3 != -1) {
      iVar8 = iVar3;
    }
    if (iVar8 != 0) {
      FUN_005580e0((undefined4 *)(uVar2 + *(int *)(param_1 + 4)),
                   (undefined4 *)((int)(uVar2 + *(int *)(param_1 + 4)) + iVar8),iVar3 - iVar8);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = FUN_00402a00(param_1,iVar3 - iVar8,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(param_1,iVar3 - iVar8);
      }
    }
    FUN_0040f800(param_1,0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(param_1,'\x01');
        puVar5 = *(undefined1 **)(param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        *(undefined1 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004110b9;
      }
    }
    uVar4 = FUN_00402a00(param_1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = *(undefined4 **)(param_1 + 4);
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)(param_1 + 8) = uVar2;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
    }
  }
LAB_004110b9:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  param_1[0x48] = param_2[0x48];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  ExceptionList = local_c;
  return;
}


