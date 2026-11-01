
/* ==== FUN_004993d0 @ 004993d0 ==== 
 * signature: undefined __fastcall FUN_004993d0(void * param_1)
 * body: 004993d0-00499574
 */

/* WARNING: Removing unreachable block (ram,0x00499473) */

void __fastcall FUN_004993d0(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e543;
  local_c = ExceptionList;
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_007127f8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_1c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = &DAT_007127f8;
    puVar9 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar5) = 0;
    local_14 = uVar5;
  }
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    puVar3 = (undefined1 *)FUN_0049bef0(*(int *)((int)param_1 + 0x38));
    uVar5 = *(uint *)(puVar3 + 8);
    if (local_1c == puVar3) {
      FUN_0040f800(local_1c,uVar5,0xffffffff);
      FUN_0040f800(local_1c,0,0);
    }
    else {
      if (uVar5 != 0) {
        puVar4 = *(undefined1 **)(puVar3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004028f0(local_1c,'\x01');
          local_18 = *(undefined4 **)(puVar3 + 4);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)&DAT_0057629c;
          }
          local_14 = *(uint *)(puVar3 + 8);
          local_10 = *(undefined4 *)(puVar3 + 0xc);
          *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
          goto LAB_0049951f;
        }
      }
      uVar2 = FUN_00402a00(local_1c,uVar5,'\x01');
      if ((char)uVar2 != '\0') {
        puVar7 = *(undefined4 **)(puVar3 + 4);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_0057629c;
        }
        puVar9 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_004029e0(local_1c,uVar5);
      }
    }
  }
LAB_0049951f:
  FUN_00499580(param_1,local_1c);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


