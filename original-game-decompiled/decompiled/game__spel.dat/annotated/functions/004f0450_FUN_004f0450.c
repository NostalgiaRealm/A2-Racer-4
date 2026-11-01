
/* ==== FUN_004f0450 @ 004f0450 ==== 
 * signature: undefined __fastcall FUN_004f0450(void * param_1)
 * body: 004f0450-004f0531
 */

void __fastcall FUN_004f0450(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f0020(param_1);
  FUN_004efbf0(param_1);
  puVar5 = (undefined4 *)PTR_s_CM_JOY_Z_AXIS_005b88a0;
  uVar3 = 0xffffffff;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar6 = PTR_s_CM_JOY_Z_AXIS_005b88a0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar3) = 0;
    local_14 = uVar3;
  }
  local_4 = 0;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x150));
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


