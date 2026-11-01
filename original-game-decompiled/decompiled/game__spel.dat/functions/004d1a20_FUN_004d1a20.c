
/* ==== FUN_004d1a20 @ 004d1a20 ==== 
 * signature: undefined4 * __fastcall FUN_004d1a20(int param_1)
 * body: 004d1a20-004d1ba6
 */

/* WARNING: Removing unreachable block (ram,0x004d1a81) */

undefined4 * __fastcall FUN_004d1a20(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
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
  pcStack_8 = FUN_0056fb3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x1c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar8 = puVar2 + 1;
  *(undefined1 *)puVar8 = *(undefined1 *)(param_1 + 4);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (puVar8 == (undefined4 *)(param_1 + 4)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar8);
    iVar3 = puVar2[3] - uVar1;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      FUN_005580e0((undefined4 *)(uVar1 + puVar2[2]),
                   (undefined4 *)((int)(uVar1 + puVar2[2]) + iVar7),iVar3 - iVar7);
      iVar3 = puVar2[3];
      uVar4 = FUN_00402a00(puVar8,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(puVar8,iVar3 - iVar7);
      }
    }
    FUN_0040f800(puVar8,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 8);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(puVar8,'\x01');
        puVar5 = *(undefined1 **)(param_1 + 8);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        puVar2[2] = puVar5;
        puVar2[3] = *(undefined4 *)(param_1 + 0xc);
        puVar2[4] = *(undefined4 *)(param_1 + 0x10);
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004d1b61;
      }
    }
    uVar4 = FUN_00402a00(puVar8,uVar1,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = *(undefined4 **)(param_1 + 8);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = (undefined4 *)puVar2[2];
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar2[3] = uVar1;
      *(undefined1 *)(puVar2[2] + uVar1) = 0;
    }
  }
LAB_004d1b61:
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *puVar2 = &PTR_FUN_005777b8;
  puVar2[5] = uVar4;
  puVar2[6] = *(undefined4 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_005777e0;
  ExceptionList = local_c;
  return puVar2;
}


