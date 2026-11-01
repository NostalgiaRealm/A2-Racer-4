
/* ==== FUN_004ecf40 @ 004ecf40 ==== 
 * signature: undefined __cdecl FUN_004ecf40(undefined4 * param_1, int param_2)
 * body: 004ecf40-004ed0ec
 */

/* WARNING: Removing unreachable block (ram,0x004ecfee) */

void __cdecl FUN_004ecf40(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *local_c;
  code *pcStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  pcStack_8 = FUN_00572679;
  local_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  iVar6 = 5;
  puVar7 = param_1;
  ExceptionList = &local_c;
  do {
    *puVar7 = &PTR_FUN_00578218;
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar2 + 4) = 0;
      *puVar2 = (undefined1)param_2;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
    puVar7[1] = puVar2;
    FUN_004ed160(puVar2,*(int *)((int)puVar7 + (param_2 - (int)param_1) + 4));
    puVar7 = puVar7 + 2;
    iVar6 = iVar6 + -1;
    local_4 = 1;
  } while (iVar6 != 0);
  puVar7 = param_1 + 10;
  *(undefined1 *)puVar7 = *(undefined1 *)(param_2 + 0x28);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = *(uint *)(param_2 + 0x30);
  if (puVar7 == (undefined4 *)(param_2 + 0x28)) {
    if (uVar1 != 0) {
      FUN_0054b29c();
    }
    FUN_00402c30(puVar7);
    iVar3 = param_1[0xc] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_005580e0((undefined4 *)(uVar1 + param_1[0xb]),
                   (undefined4 *)((int)(uVar1 + param_1[0xb]) + iVar6),iVar3 - iVar6);
      iVar3 = param_1[0xc];
      uVar4 = FUN_00402a00(puVar7,iVar3 - iVar6,'\0');
      if ((char)uVar4 != '\0') {
        FUN_004029e0(puVar7,iVar3 - iVar6);
      }
    }
    FUN_0040f800(puVar7,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar2 = *(undefined1 **)(param_2 + 0x2c);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0057629c;
      }
      if ((byte)puVar2[-1] < 0xfe) {
        FUN_004028f0(puVar7,'\x01');
        puVar2 = *(undefined1 **)(param_2 + 0x2c);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_0057629c;
        }
        param_1[0xb] = puVar2;
        param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
        param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
        puVar2[-1] = puVar2[-1] + '\x01';
        goto LAB_004ed0cc;
      }
    }
    uVar4 = FUN_00402a00(puVar7,uVar1,'\x01');
    if ((char)uVar4 != '\0') {
      puVar8 = *(undefined4 **)(param_2 + 0x2c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0057629c;
      }
      puVar9 = (undefined4 *)param_1[0xb];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_004029e0(puVar7,uVar1);
    }
  }
LAB_004ed0cc:
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  ExceptionList = local_c;
  return;
}


