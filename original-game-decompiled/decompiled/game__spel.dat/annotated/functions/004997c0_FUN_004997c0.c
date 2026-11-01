
/* ==== FUN_004997c0 @ 004997c0 ==== 
 * signature: uint __fastcall FUN_004997c0(void * param_1)
 * body: 004997c0-00499957
 */

/* WARNING: Removing unreachable block (ram,0x00499863) */

uint __fastcall FUN_004997c0(void *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e5a2;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar9 = (char *)&DAT_00712808;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = &DAT_00712808;
    puVar10 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar6) = 0;
    local_14 = uVar6;
  }
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    puVar4 = (undefined1 *)FUN_0049bef0(*(int *)((int)param_1 + 0x38));
    uVar6 = *(uint *)(puVar4 + 8);
    if (local_1c == puVar4) {
      FUN_0040f800(local_1c,uVar6,0xffffffff);
      FUN_0040f800(local_1c,0,0);
    }
    else {
      if (uVar6 != 0) {
        puVar5 = *(undefined1 **)(puVar4 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0057629c;
        }
        if ((byte)puVar5[-1] < 0xfe) {
          FUN_004028f0(local_1c,'\x01');
          local_18 = *(undefined4 **)(puVar4 + 4);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)&DAT_0057629c;
          }
          local_14 = *(uint *)(puVar4 + 8);
          local_10 = *(undefined4 *)(puVar4 + 0xc);
          *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + '\x01';
          goto LAB_0049990f;
        }
      }
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 != '\0') {
        puVar8 = *(undefined4 **)(puVar4 + 4);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)&DAT_0057629c;
        }
        puVar10 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_004029e0(local_1c,uVar6);
      }
    }
  }
LAB_0049990f:
  uVar3 = FUN_00499960(param_1,local_1c);
  uVar2 = (undefined1)uVar3;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      uVar3 = FUN_0054b339((undefined1 *)((int)local_18 + -1));
    }
    else {
      uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),cVar1 + -1);
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),uVar2);
}


