
/* ==== FUN_00411fb0 @ 00411fb0 ==== 
 * signature: undefined __cdecl FUN_00411fb0(undefined4 * param_1, undefined4 * param_2)
 * body: 00411fb0-0041210a
 */

/* WARNING: Removing unreachable block (ram,0x0041200c) */

void __cdecl FUN_00411fb0(undefined4 *param_1,undefined4 *param_2)

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
  
  pcStack_8 = FUN_00569a81;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  puVar8 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  param_1[2] = 0;
  *(undefined1 *)puVar8 = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = param_2[3];
  if (puVar8 == param_2 + 1) {
    if (uVar2 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar8);
    iVar3 = param_1[3] - uVar2;
    iVar7 = -1;
    if (iVar3 != -1) {
      iVar7 = iVar3;
    }
    if (iVar7 != 0) {
      FUN_005580e0((undefined4 *)(uVar2 + param_1[2]),
                   (undefined4 *)((int)(uVar2 + param_1[2]) + iVar7),iVar3 - iVar7);
      iVar3 = param_1[3];
      uVar4 = FUN_00402a00(puVar8,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(puVar8,iVar3 - iVar7);
      }
    }
    FUN_00402c30(puVar8);
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_2[2];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0057629c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004028f0(puVar8,'\x01');
        puVar5 = (undefined1 *)param_2[2];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        param_1[2] = puVar5;
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004120ea;
      }
    }
    uVar4 = FUN_00402a00(puVar8,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = (undefined4 *)param_2[2];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = (undefined4 *)param_1[2];
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
      param_1[3] = uVar2;
      *(undefined1 *)(param_1[2] + uVar2) = 0;
    }
  }
LAB_004120ea:
  param_1[5] = param_2[5];
  ExceptionList = local_c;
  return;
}


