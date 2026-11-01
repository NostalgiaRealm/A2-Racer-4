
/* ==== FUN_00491250 @ 00491250 ==== 
 * signature: undefined __cdecl FUN_00491250(undefined1 * param_1, undefined1 * param_2)
 * body: 00491250-004913a9
 */

/* WARNING: Removing unreachable block (ram,0x004912a0) */

void __cdecl FUN_00491250(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
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
  
  pcStack_8 = FUN_0056df71;
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
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      FUN_005580e0((undefined4 *)(uVar2 + *(int *)(param_1 + 4)),
                   (undefined4 *)(iVar7 + (int)(uVar2 + *(int *)(param_1 + 4))),iVar3 - iVar7);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = FUN_00402a00(param_1,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(param_1,iVar3 - iVar7);
      }
    }
    FUN_00402c30(param_1);
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
        goto LAB_00491384;
      }
    }
    uVar4 = FUN_00402a00(param_1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)(param_2 + 4) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(param_2 + 4);
      }
      puVar9 = *(undefined4 **)(param_1 + 4);
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
      FUN_004029e0(param_1,uVar2);
    }
  }
LAB_00491384:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar8 = (undefined4 *)(param_2 + 0x14);
  puVar9 = (undefined4 *)(param_1 + 0x14);
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  ExceptionList = local_c;
  return;
}


