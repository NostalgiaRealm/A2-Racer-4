
/* ==== FUN_00479d90 @ 00479d90 ==== 
 * signature: undefined4 * __thiscall FUN_00479d90(undefined4 * param_1, int param_2)
 * body: 00479d90-00479eec
 */

/* WARNING: Removing unreachable block (ram,0x00479de4) */

undefined4 * __thiscall FUN_00479d90(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ba28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558890(param_1,param_2);
  puVar7 = param_1 + 3;
  local_4 = 0;
  *(undefined1 *)puVar7 = *(undefined1 *)(param_2 + 0xc);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *(uint *)(param_2 + 0x14);
  if (puVar7 == (undefined4 *)(param_2 + 0xc)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar7);
    iVar2 = param_1[5] - uVar1;
    iVar6 = -1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (iVar6 != 0) {
      FUN_005580e0((undefined4 *)(uVar1 + param_1[4]),
                   (undefined4 *)((int)(uVar1 + param_1[4]) + iVar6),iVar2 - iVar6);
      iVar2 = param_1[5];
      uVar3 = FUN_00402a00(puVar7,iVar2 - iVar6,'\0');
      if ((char)uVar3 != '\0') {
        FUN_004029e0(puVar7,iVar2 - iVar6);
      }
    }
    FUN_00402c30(puVar7);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004028f0(puVar7,'\x01');
        puVar4 = *(undefined1 **)(param_2 + 0x10);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        param_1[4] = puVar4;
        param_1[5] = *(undefined4 *)(param_2 + 0x14);
        param_1[6] = *(undefined4 *)(param_2 + 0x18);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00479e42;
      }
    }
    uVar3 = FUN_00402a00(puVar7,uVar1,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0057629c;
      }
      puVar8 = (undefined4 *)param_1[4];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[5] = uVar1;
      *(undefined1 *)(param_1[4] + uVar1) = 0;
      *param_1 = &PTR_FUN_00578e74;
      ExceptionList = local_c;
      return local_c;
    }
  }
LAB_00479e42:
  *param_1 = &PTR_FUN_00578e74;
  ExceptionList = local_c;
  return local_c;
}


